#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/imgproc.hpp>
#include <string>

int main(int argc, char** argv ){

    cv::namedWindow("display_video", cv::WINDOW_AUTOSIZE);
    cv::namedWindow("log polar", cv::WINDOW_AUTOSIZE);

    cv::VideoCapture capture( argv[1] );
    double fps = capture.get( cv::CAP_PROP_FPS );

    cv::Size size( (int)capture.get(cv::CAP_PROP_FRAME_WIDTH),
              (int)capture.get(cv::CAP_PROP_FRAME_HEIGHT) );

    cv::VideoWriter writer;
    writer.open( argv[2], CV_FOURCC('M', 'J', 'P', 'G' ), fps, size);

    cv::Mat logpolar_frame, bgr_frame;

    for(;;){

        capture >> bgr_frame;
        if(bgr_frame.empty())
            break;

        cv::imshow("example", bgr_frame );

        cv::logPolar( bgr_frame, logpolar_frame, cv::Point2f(bgr_frame.cols/2, bgr_frame.rows/2),
                      40, cv::WARP_FILL_OUTLIERS);
        cv::imshow("logpolar", logpolar_frame);

        writer << logpolar_frame;

        char c = cv::waitKey(0);
        if( c == 27)
            break;

    }


    capture.release();
}

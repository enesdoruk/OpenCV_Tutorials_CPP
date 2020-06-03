#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/imgproc.hpp>
#include <string>

int main(int argc, char** argv ){

    cv::namedWindow("display_video", cv::WINDOW_AUTOSIZE);
    cv::VideoCapture cap;
    cap.open( std::string(argv[1]) );

    cv::Mat frame;

    for(;;){
        cap >> frame;
        if( frame.empty())
            break;
        cv::imshow("display_video", frame);

        if( cv::waitKey(33) >= 0)
            break;
    }

    return 0;
}

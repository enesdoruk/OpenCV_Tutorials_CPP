#include<opencv2/opencv.hpp>

// using namespace cv;

int main(int argc, char** argv){
    cv::Mat img = cv::imread(argv[1], -1);

    if( img.empty())
        return -1;

    cv::namedWindow("Display_picture", cv::WINDOW_AUTOSIZE);
    cv::imshow("Display_picture", img);

    cv::waitKey(0);
    cv::destroyWindow("Display_picture");

    return 0;

}

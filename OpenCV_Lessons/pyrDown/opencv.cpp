#include<opencv2/opencv.hpp>

using namespace std;

int main(int argc, char** argv){

    cv::Mat img1, img2;

    cv::namedWindow("example1", cv::WINDOW_AUTOSIZE);
    cv::namedWindow("example2", cv::WINDOW_AUTOSIZE);

    img1 = cv::imread( argv[1] );
    cv::imshow( "example1", img1);

    cv::pyrDown(img1, img2);
    cv::imshow("example2", img2);

    cv::waitKey(0);

    return 0;

}

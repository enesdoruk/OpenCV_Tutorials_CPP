#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/imgproc.hpp>
#include<iostream>
#include<fstream>

using namespace std;

void example1( const cv::Mat & image){

    cv::namedWindow("example1", cv::WINDOW_AUTOSIZE);
    cv::namedWindow("example2", cv::WINDOW_AUTOSIZE);

    cv::imshow("example1", image);

    cv::Mat out;

    cv::GaussianBlur( image, out, cv::Size(5,5), 3, 3);
    cv::GaussianBlur(out, out, cv::Size(5,5), 3, 3);

    cv::imshow("result", out);

    cv::waitKey(0);
}


int main(int argc, char** argv){


    return 0;

}

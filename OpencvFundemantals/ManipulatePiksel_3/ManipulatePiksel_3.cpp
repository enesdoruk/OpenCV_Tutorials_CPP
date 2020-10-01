#include<opencv2/core.hpp>
#include<opencv2/imgproc.hpp>
#include<opencv2/highgui.hpp>
#include<iostream>

using namespace std;

// Scanning image with iterators


void colorReduce(cv::Mat image, int div= 128){

    int n = static_cast<int>(
                log(static_cast<double>(div)) / log(2.0) + 0.5);
    uchar mask = 0xFF << n;
    uchar div2 = div >> 1;

    cv::Mat_<cv::Vec3b>::iterator it = image.begin<cv::Vec3b>();
    cv::Mat_<cv::Vec3b>::iterator itend = image.end<cv::Vec3b>();

    for(; it != itend; ++it){
        (*it) [0] &= mask;
        (*it) [0] &= mask;
        (*it) [1] &= mask;
        (*it) [1] &= mask;
        (*it) [2] &= mask;
        (*it) [2] &= mask;
    }
}


int main(){

    const int64 start = cv::getTickCount();
    cv::Mat image = cv::imread("araba.jpeg");
    colorReduce(image);
    double duration = (cv::getTickCount() - start) / cv::getTickFrequency();
    std::cout << "time:" << duration << endl;
    cv::namedWindow("Image");
    cv::imshow("image", image);
    cv::waitKey(0);

}

















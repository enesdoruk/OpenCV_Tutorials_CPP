#include <iostream>
#include "opencv2/opencv.hpp"
int main (int argc, char* argv[])
{
    cv::Mat h_img1 = cv::imread("araba.jpg");
    cv::Mat h_img2 = cv::imread("ev.jpg");
    cv::cuda::GpuMat d_result1, d_img1,	d_img2;
    cv::Mat h_result1;
    d_img1.upload(h_img1);
    d_img2.upload(h_img2);
    cv::cuda::addWeighted(d_img1, 0.7, d_img2, 0.3, 0, d_result1);
    d_result1.download(h_result1);
    cv::imshow("Image1", h_img1);
    cv::imshow("Image2",    h_img2);
    cv::imshow("Result	addition ", h_result1);
    cv::imwrite("/result_add.png",  h_result1);
    cv::waitKey();
    return 0;
}

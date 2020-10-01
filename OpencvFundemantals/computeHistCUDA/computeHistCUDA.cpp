#include<opencv2/opencv.hpp>
#include<iostream>

using namespace std;

int main(){

    cv::Mat h_img1 = cv::imread("araba.jpeg");
    cv::Mat h_img2 = cv::imread("x.png");


    cv::cuda::GpuMat d_result1, d_img1, d_img2;
    cv::Mat h_result1;

    d_img1.upload(h_img1);
    d_img2.upload(h_img2);
    cv::cuda::add(d_img1, d_img2, d_result1);

    d_result1.download(h_result1);
    cv::imshow("image1", h_img1);
    cv::imshow("image2", h_img2);
    cv::imshow("add result", h_result1);
    cv::imwrite("/enes.jpeg", h_result1);
    cv::waitKey();

    return 0;


}

















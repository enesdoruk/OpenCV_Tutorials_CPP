#include<opencv2/core.hpp>
#include<opencv2/imgproc.hpp>
#include<opencv2/highgui.hpp>
#include<iostream>

using namespace std;

void wave(const cv::Mat &image, cv::Mat &result){

    cv::Mat srcX(image.rows, image.cols, CV_32F);
    cv::Mat srcY(image.rows, image.cols, CV_32F);

    for( int i = 0; i < image.rows; i++){
        for(int j = 0; j < image.cols; j++){

            srcX.at<float>(i, j) = j;
            srcY.at<float>(i, j) = i + 5*sin(j / 10.0)
        }
    }
    cv::remap(image, result, srcX, srcY, cv::INTER_LINEAR);
}


int main(){


}

















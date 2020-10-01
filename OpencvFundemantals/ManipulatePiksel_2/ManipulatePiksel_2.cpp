#include<opencv2/core.hpp>
#include<opencv2/imgproc.hpp>
#include<opencv2/highgui.hpp>
#include<iostream>

using namespace std;

// Scanning Image with Pointer

void colorReduce(cv::Mat image, int div = 64){

    int nl = image.rows;
    int nc = image.cols * image.channels(); // total number of elements per line

    for (int j= 0; j < nl; j++){
        uchar* data = image.ptr<uchar>(j); // get address of row j

        for (int i= 0; i < nc; i++){
            data[i] = data[i] / div * div + div / 2; // process each piksel
        }
    }

}


int main(){

    cv::Mat image = cv::imread("araba.jpeg");
    colorReduce(image, 64);
    cv::namedWindow("Image");
    cv::imshow("image", image);
    cv::waitKey(0);


}

















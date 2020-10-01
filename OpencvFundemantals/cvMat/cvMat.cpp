#include<opencv2/core.hpp>
#include<opencv2/imgproc.hpp>
#include<opencv2/highgui.hpp>
#include<iostream>

using namespace std;

cv::Mat function(){
    cv::Mat ima(500, 500, CV_8U, 50); // CV_8U = 8 byte
    return ima;
}

int main(){

    cv::Mat image1(240, 320, CV_8U, 100);
    cv::imshow("Image1", image1);
    cv::waitKey(0);

    // re allocate
    image1.create(200, 200, CV_8U);
    image1 = 200;
    cv::imshow("image1", image1);
    cv::waitKey(0);

    // create red color Image
    cv::Mat image2(cv::Size(320, 240), CV_8UC3); // 8 byte 3 channels
    image2 = cv::Scalar(0, 0, 255); //BGR
    cv::imshow("red channel", image2);
    cv::waitKey(0);

    // imread image
    cv::Mat image3 = cv::imread("araba.jpeg", cv::IMREAD_COLOR);

    // same data block
    cv::Mat image4(image3);
    image1 = image3;

    // copy
    image3.copyTo(image2);
    cv::Mat image5 = image3.clone();

    //transform
    cv::flip(image3, image3, 1);

    cv::imshow("image 3", image3);
    cv::imshow("image 1", image1);
    cv::imshow("image 2", image2);
    cv::imshow("image 4", image4);
    cv::imshow("image 5", image5);

    cv::waitKey(0);

    // read image grayscale
    image1 = cv::imread("araba.jpeg", CV_LOAD_IMAGE_GRAYSCALE);
    image1.convertTo(image2, CV_32F, 1/255.0, 0.0); // 32 bit float, normalization
    cv::imshow("image", image2);
    cv::waitKey(0);

    //manipulating matrix

    cv::Matx33d matrix( 3.0, 2.0, 1.0,
                        2.0, 1.0, 3.0,
                        1.0, 5.0, 2.0);

    cv::Matx31d vector(5.0, 1.0, 3.0);

    cv::Matx31d result = matrix * vector;

    // show channels
    cv::Mat src = cv::imread("araba.jpeg", CV_LOAD_IMAGE_COLOR);
    cv::Mat bgr[3];
    cv::split(src,bgr);//split source

    cv::imshow("blue",bgr[0]); //blue channel
    cv::imshow("green",bgr[1]); //green channel
    cv::imshow("red",bgr[2]); //red channel
    cv::waitKey(0);

}

















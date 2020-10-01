#include<opencv2/core.hpp>
#include<opencv2/imgproc.hpp>
#include<opencv2/highgui.hpp>
#include<iostream>

using namespace std;

int main(){

// create empty image

cv::Mat image;

std::cout << "this is image is" << image.rows << "x" << image.cols << std::endl;

// Read Image
image = cv::imread("araba.jpeg");

if( image.empty())
    std::cout << "image is not found";

cv::namedWindow("original Image");
cv::imshow("original image", image);
cv::imwrite("image2.jpeg", image);

// Flipped Image
// ( positive for horizontal, 0 for veritical, negative for both)

cv::Mat result;
cv::flip(image, result, 1);

cv::namedWindow("output Image");
cv::imshow("output Image", result);
cv::imwrite("outputImage.jpeg", result);

// 0 to indefinetely wait for a key pressed wait
// if there is number, wait number ms

cv::waitKey(0);

// Read Grayscale

cv::Mat image3;
image3 = cv::imread("araba.jpeg", cv::IMREAD_GRAYSCALE);
cv::imshow("grayscale", image3);
cv::waitKey(0);

std::cout << "this image3 has   " << image3.channels() << "   channels" << std::endl;

// Read Color Image

cv::Mat image4;
image4 = cv::imread("araba.jpeg", cv::IMREAD_COLOR);
cv::imshow("colorImage", image4);
cv::waitKey(0);

std::cout << "this image4 has   " << image4.channels() << "  channels" << std::endl;

// Drawing

cv::Mat image5;
image5 = cv::imread("araba.jpeg", cv::IMREAD_GRAYSCALE);

cv::circle(image5,
           cv::Point(50,50), //place
           40, //radius
           0, //color
           3 //thickness
           );
cv::imshow("circleImage", image5);

cv::waitKey(0);

// Put Text
cv::Mat image6;
image6 = cv::imread("araba.jpeg", cv::IMREAD_COLOR);

cv::putText(image6, "this is car", cv::Point(50,50),
            cv::FONT_HERSHEY_PLAIN,
            2.0, //font scale
            255, //text color
            2 //thickness
            );
cv::imshow("textImage", image6);
cv::waitKey(0);

}

















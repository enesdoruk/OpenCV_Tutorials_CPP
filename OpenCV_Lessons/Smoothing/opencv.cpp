#include<iostream>
#include<opencv2/opencv.hpp>

using namespace std;

int main(int argc, char** argv){

    double fixed_threshold = (double)atof(argv[1]);

    int threshold_type = atoi(argv[2]) ? cv::THRESH_BINARY : cv::THRESH_BINARY_INV;

    int adaptive_method = atoi(argv[3]) ? cv::ADAPTIVE_THRESH_MEAN_C
                                        : cv::ADAPTIVE_THRESH_GAUSSIAN_C;

    int block_size = atoi(argv[4]);

    double offset = (double)atof(argv[5]);

    cv::Mat Igray = cv::imread(argv[6], cv::IMREAD_GRAYSCALE);

    if ( Igray.empty()){
    cout << " can not load";
    }

    cv::Mat It, Iat;

    cv::threshold(Igray, It, fixed_threshold, 255, threshold_type);

    cv::adaptiveThreshold(Igray, Iat, 255, adaptive_method, threshold_type, block_size, offset);

    cv::imshow("raw", Igray);
    cv::imshow("threshold",It);
    cv::imshow("Adaptive threshold", Iat);

     cv::waitKey(0);

     return 0;

}

#include<opencv2/opencv.hpp>

using namespace std;

int main(int argc, char** argv){

    cv::Mat img_rgb;

    cv::namedWindow("canny", cv::WINDOW_AUTOSIZE);

    img_rgb = cv::imread( argv[1] );

    int x = 16;
    int y = 32;

    cv::Vec3b intensity = img_rgb.at< cv::Vec3b >(y,x);

    uchar blue = intensity[0];
    uchar green = intensity[1];
    uchar red = intensity[2];

    std::cout << "blue" << (unsigned int)blue << "green" << (unsigned int)green << "red" <<
                 (unsigned int)red <<endl;



    cv::waitKey(0);

    return 0;

}

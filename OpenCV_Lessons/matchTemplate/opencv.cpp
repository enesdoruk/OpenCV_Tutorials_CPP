#include<opencv2/opencv.hpp>
#include<iostream>

using namespace std;

int main(int argc, char** argv){

    if(argc != 3){
        return -1;
    }

    cv::Mat src, tmpl, ftmp[6];

    if((tmpl=cv::imread(argv[1],1)).empty()){
        cout << "error reading template";
        return -1;
    }

    if((src=cv::imread(argv[2],1)).empty()){
        cout << "error reading src";
        return -1;
    }

    for(int i=0; i<6; ++i){
        cv::matchTemplate(src,tmpl,ftmp[i],i);
        cv::normalize(ftmp[i],ftmp[i],1,0,cv::MIN_MAX);
    }

    cv::imshow("template",tmpl);
    cv::imshow("image",src);
    cv::imshow("SQDIFF",ftmp[0]);
    cv::imshow("SQDIFF_NORMED",ftmp[1]);
    cv::imshow("ccorr",ftmp[2]);
    cv::imshow("ccor_Normed",ftmp[3]);
    cv::imshow("ccqef",ftmp[4]);
    cv::imshow("ccqef_normed",ftmp[5]);

    cv::waitKey(0);

    return 0;

}

#include<opencv2/opencv.hpp>
#include<iostream>
#include<algorithm>

using namespace std;

struct AreaCmp
{
    AreaCmp(const vector<float>& _areas) : areas(&_areas) {}
    bool operator()(int a, int b) const {return (*areas)[a] > (*areas)[b]; }
    const vector<float>* areas;
};

int main(int argc, char** argv[]){

    cv::Mat img, img_edge, img_color;


    cv::threshold(img, img_edge, 128, 255, cv::THRESH_BINARY);
    cv::imshow("Image after threshold", img_edge);
    vector< vector< cv::Point > > contours;
    vector< cv::Vec4i > hierarchy;

    cv::findContours(img_edge, contours, hierarchy, cv::RETR_LIST, cv::CHAIN_APPROX_SIMPLE);

    cout << "press esc to quit" << endl;

    cout << "total contours detected " << contours.size() << endl;

    vector<int> sortidx(contours.size());
    vector<float> areas(contours.size());

    for(int n =0; n < (int)contours.size(); n++){
        sortidx[n] =n;
        areas[n] = contourArea(contours[n], false);
    }

    std::sort( sortidx.begin(), sortidx.end(), AreaCmp(areas));


    for( int n=0; n < (int)sortidx.size(); n++){
        int idx = sortidx[n];
        cv::cvtColor(img, img_color, cv::COLOR_GRAY2RGB);
        cv::drawContours(img_color, contours, idx, cv::Scalar(0,0,255), 2,8, hierarchy,
                         0);

        cout << "contour" << idx << ": area = " << areas[idx] << endl;
        cv::imshow("argv[0]", img_color);

        int k;
        if((k = cv::waitKey()&255) == 27)
            break;

    }


    cout << "finished" << endl;
    return 0;

}

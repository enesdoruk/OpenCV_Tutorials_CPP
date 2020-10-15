#include	<iostream>
#include	"opencv2/opencv.hpp"
int	main	()
{
                cv::Mat	h_img1	=	cv::imread("ev.jpg",0);
                cv::cuda::GpuMat	d_img1,d_result1;
                d_img1.upload(h_img1);
                cv::cuda::equalizeHist(d_img1,	d_result1);
                cv::Mat	h_result1;
                d_result1.download(h_result1);
                cv::imshow("Original	Image	",	h_img1);
                cv::imshow("Histogram	Equalized	Image",	h_result1);
                cv::waitKey();
                return	0;
}

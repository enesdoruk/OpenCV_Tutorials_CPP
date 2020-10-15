#include	<iostream>
#include	"opencv2/opencv.hpp"
int	main	()
{
                //Read	Two	Images
                cv::Mat	h_img1	=	cv::imread("araba.jpg");
                cv::Mat	h_img2	=	cv::imread("ev.jpg");
                //Create	Memory	for	storing	Images	on	device
                cv::cuda::GpuMat	d_result1,d_img1,	d_img2;
                cv::Mat	h_result1;
                //Upload	Images	to	device
                d_img1.upload(h_img1);
                d_img2.upload(h_img2);
                cv::cuda::add(d_img1,d_img2,	d_result1);
                //Download	Result	back	to	host
                d_result1.download(h_result1);
                cv::imshow("Image1	",	h_img1);
                cv::imshow("Image2	",	h_img2);
                cv::imshow("Result	addition	",	h_result1);
                cv::imwrite("images/result_add.png",	h_result1);
                cv::waitKey();
                return	0;
}

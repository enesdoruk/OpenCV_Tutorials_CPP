#include	<iostream>
#include	"opencv2/opencv.hpp"
using	namespace	cv;
using	namespace	std;
int	main()
{
                Mat	h_image	=	imread(	"ev.jpg",	0	);
                //Detect	the	key-points	using	FAST	Detector
                cv::Ptr<cv::cuda::FastFeatureDetector>	detector	=	cv::cuda::FastFeatureDetector::create(100,true,2);
                std::vector<cv::key	point>	key-points;
                cv::cuda::GpuMat	d_image;
                d_image.upload(h_image);
                detector->detect(d_image,	key-points);
                cv::drawkey-points(h_image,key-points,h_image);
                //Show	detected	key-points
                imshow("Final	Result",	h_image	);
                waitKey(0);
                return	0;
}

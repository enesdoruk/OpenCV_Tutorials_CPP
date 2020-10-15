#include	<stdio.h>
#include	<iostream>
#include	"opencv2/opencv.hpp"
#include	"opencv2/features2d.hpp"
#include	"opencv2/xfeatures2d.hpp"
#include	"opencv2/xfeatures2d/nonfree.hpp"
#include	"opencv2/xfeatures2d/cuda.hpp"
using	namespace	cv;
using	namespace	cv::xfeatures2d;
using	namespace	std;
int	main(	int	argc,	char**	argv	)
{
                Mat	h_object_image	=	imread(	"araba.jpg",	0	);
                Mat	h_scene_image	=	imread(	"ev.jpg",	0	);
                cuda::GpuMat	d_object_image;
                cuda::GpuMat	d_scene_image;
                cuda::GpuMat	d_key-points_scene,	d_key-points_object;
                vector<	key	point	>	h_key-points_scene,	h_key-points_object;
                cuda::GpuMat	d_descriptors_scene,	d_descriptors_object;
                d_object_image.upload(h_object_image);
                d_scene_image.upload(h_scene_image);
                cuda::SURF_CUDA	surf(150);
                surf(	d_object_image,	cuda::GpuMat(),	d_key-points_object,	d_descriptors_object	);
surf(	d_scene_image,	cuda::GpuMat(),	d_key-points_scene,	d_descriptors_scene	);
Ptr<	cuda::DescriptorMatcher	>	matcher	=	cuda::DescriptorMatcher::createBFMatcher();
vector<	vector<	DMatch>	>	d_matches;
matcher->knnMatch(d_descriptors_object,	d_descriptors_scene,	d_matches,	3);
surf.downloadkey-points(d_key-points_scene,	h_key-points_scene);
surf.downloadkey-points(d_key-points_object,	h_key-points_object);
std::vector<	DMatch	>	good_matches;
for	(int	k	=	0;	k	<	std::min(h_key-points_object.size()-1,	d_matches.size());	k++)
{
                if	(	(d_matches[k][0].distance	<	0.75*(d_matches[k][1].distance))	&&
                                                ((int)d_matches[k].size()	<=	2	&&	(int)d_matches[k].size()>0)	)
                {
                                good_matches.push_back(d_matches[k][0]);
                }
}
std::cout	<<	"size:"	<<good_matches.size();
Mat	h_image_result;
drawMatches(	h_object_image,	h_key-points_object,	h_scene_image,	h_key-points_scene,
                                                good_matches,	h_image_result,	Scalar::all(-1),	Scalar::all(-1),
                                                vector<char>(),	DrawMatchesFlags::DEFAULT	);
imshow("Good	Matches	&	Object	detection",	h_image_result);
waitKey(0);
return	0;
}

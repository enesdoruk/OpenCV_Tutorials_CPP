cmake_minimum_required(VERSION 2.8)
project( display_video )
find_package( OpenCV REQUIRED )
add_executable( display_video opencv.cpp )
target_link_libraries( display_video ${OpenCV_LIBS} )

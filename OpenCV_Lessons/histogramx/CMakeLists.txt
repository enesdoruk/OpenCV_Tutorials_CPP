cmake_minimum_required(VERSION 2.8)
project( histogramx )
find_package( OpenCV REQUIRED )
add_executable( histogramx histogramx.cpp )
target_link_libraries( histogramx ${OpenCV_LIBS} )

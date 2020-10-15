
cmake_minimum_required(VERSION 2.8)
project( ex21)
find_package( OpenCV REQUIRED )
add_executable( ex21 ex21.cpp )
target_link_libraries( ex21 ${OpenCV_LIBS} )

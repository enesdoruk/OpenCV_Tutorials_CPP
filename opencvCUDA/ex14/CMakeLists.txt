cmake_minimum_required(VERSION 2.8)
project( ex14)
find_package( OpenCV REQUIRED )
add_executable( ex14 ex14.cpp )
target_link_libraries( ex14 ${OpenCV_LIBS} )

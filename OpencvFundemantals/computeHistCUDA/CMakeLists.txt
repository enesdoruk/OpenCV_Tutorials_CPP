cmake_minimum_required(VERSION 2.8)
project( computeHistCUDA )
find_package( OpenCV REQUIRED )
add_executable( computeHistCUDA computeHistCUDA.cpp )
target_link_libraries( computeHistCUDA ${OpenCV_LIBS} )
set(CUDA_NVCC_FLAGS ${CUDA_NVCC_FLAGS} -arch compute_52 -code sm_52)


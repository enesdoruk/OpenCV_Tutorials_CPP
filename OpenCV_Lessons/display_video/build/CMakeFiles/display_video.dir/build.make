# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/enes/Desktop/OpenCV_Lessons/display_video

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/enes/Desktop/OpenCV_Lessons/display_video/build

# Include any dependencies generated for this target.
include CMakeFiles/display_video.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/display_video.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/display_video.dir/flags.make

CMakeFiles/display_video.dir/opencv.cpp.o: CMakeFiles/display_video.dir/flags.make
CMakeFiles/display_video.dir/opencv.cpp.o: ../opencv.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/enes/Desktop/OpenCV_Lessons/display_video/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/display_video.dir/opencv.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/display_video.dir/opencv.cpp.o -c /home/enes/Desktop/OpenCV_Lessons/display_video/opencv.cpp

CMakeFiles/display_video.dir/opencv.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/display_video.dir/opencv.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/enes/Desktop/OpenCV_Lessons/display_video/opencv.cpp > CMakeFiles/display_video.dir/opencv.cpp.i

CMakeFiles/display_video.dir/opencv.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/display_video.dir/opencv.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/enes/Desktop/OpenCV_Lessons/display_video/opencv.cpp -o CMakeFiles/display_video.dir/opencv.cpp.s

CMakeFiles/display_video.dir/opencv.cpp.o.requires:

.PHONY : CMakeFiles/display_video.dir/opencv.cpp.o.requires

CMakeFiles/display_video.dir/opencv.cpp.o.provides: CMakeFiles/display_video.dir/opencv.cpp.o.requires
	$(MAKE) -f CMakeFiles/display_video.dir/build.make CMakeFiles/display_video.dir/opencv.cpp.o.provides.build
.PHONY : CMakeFiles/display_video.dir/opencv.cpp.o.provides

CMakeFiles/display_video.dir/opencv.cpp.o.provides.build: CMakeFiles/display_video.dir/opencv.cpp.o


# Object files for target display_video
display_video_OBJECTS = \
"CMakeFiles/display_video.dir/opencv.cpp.o"

# External object files for target display_video
display_video_EXTERNAL_OBJECTS =

display_video: CMakeFiles/display_video.dir/opencv.cpp.o
display_video: CMakeFiles/display_video.dir/build.make
display_video: /usr/local/lib/libopencv_cudabgsegm.so.3.4.1
display_video: /usr/local/lib/libopencv_cudaobjdetect.so.3.4.1
display_video: /usr/local/lib/libopencv_cudastereo.so.3.4.1
display_video: /usr/local/lib/libopencv_stitching.so.3.4.1
display_video: /usr/local/lib/libopencv_superres.so.3.4.1
display_video: /usr/local/lib/libopencv_videostab.so.3.4.1
display_video: /usr/local/lib/libopencv_aruco.so.3.4.1
display_video: /usr/local/lib/libopencv_bgsegm.so.3.4.1
display_video: /usr/local/lib/libopencv_bioinspired.so.3.4.1
display_video: /usr/local/lib/libopencv_ccalib.so.3.4.1
display_video: /usr/local/lib/libopencv_dnn_objdetect.so.3.4.1
display_video: /usr/local/lib/libopencv_dpm.so.3.4.1
display_video: /usr/local/lib/libopencv_face.so.3.4.1
display_video: /usr/local/lib/libopencv_freetype.so.3.4.1
display_video: /usr/local/lib/libopencv_fuzzy.so.3.4.1
display_video: /usr/local/lib/libopencv_hfs.so.3.4.1
display_video: /usr/local/lib/libopencv_img_hash.so.3.4.1
display_video: /usr/local/lib/libopencv_line_descriptor.so.3.4.1
display_video: /usr/local/lib/libopencv_optflow.so.3.4.1
display_video: /usr/local/lib/libopencv_reg.so.3.4.1
display_video: /usr/local/lib/libopencv_rgbd.so.3.4.1
display_video: /usr/local/lib/libopencv_saliency.so.3.4.1
display_video: /usr/local/lib/libopencv_stereo.so.3.4.1
display_video: /usr/local/lib/libopencv_structured_light.so.3.4.1
display_video: /usr/local/lib/libopencv_surface_matching.so.3.4.1
display_video: /usr/local/lib/libopencv_tracking.so.3.4.1
display_video: /usr/local/lib/libopencv_xfeatures2d.so.3.4.1
display_video: /usr/local/lib/libopencv_ximgproc.so.3.4.1
display_video: /usr/local/lib/libopencv_xobjdetect.so.3.4.1
display_video: /usr/local/lib/libopencv_xphoto.so.3.4.1
display_video: /usr/local/lib/libopencv_cudafeatures2d.so.3.4.1
display_video: /usr/local/lib/libopencv_shape.so.3.4.1
display_video: /usr/local/lib/libopencv_cudacodec.so.3.4.1
display_video: /usr/local/lib/libopencv_cudaoptflow.so.3.4.1
display_video: /usr/local/lib/libopencv_cudalegacy.so.3.4.1
display_video: /usr/local/lib/libopencv_cudawarping.so.3.4.1
display_video: /usr/local/lib/libopencv_photo.so.3.4.1
display_video: /usr/local/lib/libopencv_cudaimgproc.so.3.4.1
display_video: /usr/local/lib/libopencv_cudafilters.so.3.4.1
display_video: /usr/local/lib/libopencv_cudaarithm.so.3.4.1
display_video: /usr/local/lib/libopencv_datasets.so.3.4.1
display_video: /usr/local/lib/libopencv_plot.so.3.4.1
display_video: /usr/local/lib/libopencv_text.so.3.4.1
display_video: /usr/local/lib/libopencv_dnn.so.3.4.1
display_video: /usr/local/lib/libopencv_ml.so.3.4.1
display_video: /usr/local/lib/libopencv_video.so.3.4.1
display_video: /usr/local/lib/libopencv_calib3d.so.3.4.1
display_video: /usr/local/lib/libopencv_features2d.so.3.4.1
display_video: /usr/local/lib/libopencv_highgui.so.3.4.1
display_video: /usr/local/lib/libopencv_videoio.so.3.4.1
display_video: /usr/local/lib/libopencv_phase_unwrapping.so.3.4.1
display_video: /usr/local/lib/libopencv_flann.so.3.4.1
display_video: /usr/local/lib/libopencv_imgcodecs.so.3.4.1
display_video: /usr/local/lib/libopencv_objdetect.so.3.4.1
display_video: /usr/local/lib/libopencv_imgproc.so.3.4.1
display_video: /usr/local/lib/libopencv_core.so.3.4.1
display_video: /usr/local/lib/libopencv_cudev.so.3.4.1
display_video: CMakeFiles/display_video.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/enes/Desktop/OpenCV_Lessons/display_video/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable display_video"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/display_video.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/display_video.dir/build: display_video

.PHONY : CMakeFiles/display_video.dir/build

CMakeFiles/display_video.dir/requires: CMakeFiles/display_video.dir/opencv.cpp.o.requires

.PHONY : CMakeFiles/display_video.dir/requires

CMakeFiles/display_video.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/display_video.dir/cmake_clean.cmake
.PHONY : CMakeFiles/display_video.dir/clean

CMakeFiles/display_video.dir/depend:
	cd /home/enes/Desktop/OpenCV_Lessons/display_video/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/enes/Desktop/OpenCV_Lessons/display_video /home/enes/Desktop/OpenCV_Lessons/display_video /home/enes/Desktop/OpenCV_Lessons/display_video/build /home/enes/Desktop/OpenCV_Lessons/display_video/build /home/enes/Desktop/OpenCV_Lessons/display_video/build/CMakeFiles/display_video.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/display_video.dir/depend


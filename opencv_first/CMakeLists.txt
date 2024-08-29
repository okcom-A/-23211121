cmake_minimum_required(VERSION 3.0)  
project(opencv_test_project)  
  
# 寻找OpenCV库  
find_package(OpenCV REQUIRED)  
  
# 添加头文件目录  
include_directories(${OpenCV_INCLUDE_DIRS})  
  
# 添加OpenCV库目录  
link_directories(${OpenCV_LIBRARY_DIRS})  
  
# 添加可执行文件  
add_executable(opencv_test_example opencv_first.cpp)  
  
# 链接OpenCV库到可执行文件  
target_link_libraries(opencv_test_example ${OpenCV_LIBS})

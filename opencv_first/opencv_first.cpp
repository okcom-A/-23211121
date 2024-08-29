
#include <opencv2/opencv.hpp>  
#include <iostream>  
  
int main() {  
    // 读取一张图片  
    cv::Mat image = cv::imread("2.jpg");  
  
    // 检查图片是否正确读取  
    if (image.empty()) {  
        std::cout << "Could not read the image." << std::endl;  
        return 1;  
    }  
  
    // 显示图片  
    cv::imshow("Display window", image);  
    int k = cv::waitKey(0); // 等待按键  
  
    return 0;  
}
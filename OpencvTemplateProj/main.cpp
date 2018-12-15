#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

int main(int argc, char** argv)
{
	// read image
	cv::Mat img = cv::imread("../images/truck.png");

	// change to hsv
	cv::Mat hsv;
	cv::cvtColor(img, hsv, cv::COLOR_BGR2HSV);

	// change to gray
	cv::Mat gray;
	cv::cvtColor(img, gray, cv::COLOR_BGR2GRAY);

	// canny edge
	cv::Mat edge;
	cv::Canny(gray, edge, 60, 200);

	// show image
	cv::imshow("Image", img);
	cv::imshow("Gray", gray);
	cv::imshow("Edge", edge);
	cv::imshow("hsv", hsv);
	cv::waitKey(0);

	//cv::Mat mat= cv::Mat::zeros(3, 3, CV_8UC1);
	//std::cout << "mat is:\n" << mat;


}
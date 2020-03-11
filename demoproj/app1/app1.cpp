// demoproj.cpp : Defines the entry point for the application.
//

#include "app1.h"
#include <lib1.h>
#include <opencv2/core.hpp>
#include <pcl/io/pcd_io.h>
#include <config.h>

using namespace std;

int main()
{
	cout << "Hello CMake." << endl;
	cout << "8+5= " << add(8, 5) << "\n";

	cv::Mat mat = cv::Mat::eye(2, 2, CV_8UC1);
	cout << "mat= " << mat << "\n";

	cout << "Version= " << VERSIONSTR << "\n";

	return 0;
}

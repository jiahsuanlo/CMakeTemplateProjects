#include <iostream>
#include <pcl/io/pcd_io.h>

int main(int argc, char** argv)
{
	Eigen::Matrix4f mat;
	mat = Eigen::Matrix4f::Identity();

	std::cout << mat << "\n";

	system("pause");
	return 0;
}
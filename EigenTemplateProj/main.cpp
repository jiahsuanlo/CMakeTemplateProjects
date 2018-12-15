#include <iostream>
#include <Eigen/Dense>

int main(int argc, char** argv)
{
	Eigen::Matrix4d mat;
	mat << 1, 2, 3, 4,
		5, 6, 7, 8,
		9, 10, 11, 12,
		1, 1, 1, 1;
	Eigen::Vector4d vec;
	vec << 1, 2, 3, 4;

	std::cout << "The mat is:\n" << mat << "\n";
	std::cout << "mat times vec is:\n" << mat * vec << "\n";

	return 0;
}
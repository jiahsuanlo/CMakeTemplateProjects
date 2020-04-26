#include <iostream>
#include <omp.h>



int main(int argc, char** argv)
{
	std::cout << "This is a test openmp program\n";

#pragma omp parallel
	{
		int id = omp_get_thread_num();
#pragma omp critical
		std::cout << "hello world from thread " << id << "\n";
	}
	return 0;
}
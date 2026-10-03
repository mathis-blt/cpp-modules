#include "PmergeMe.hpp"

int main(int argc, char** argv)
{
	PmergeMe sort;

	try
	{
		sort.parseInput(argc, argv);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << '\n';
		return 1;
	}

	sort.launch();
	
	return 0;
}

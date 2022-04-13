#include "../../../includes/main.hpp"

void	testAnything::anything__tests() {
	std::cout << "Test Anything:" << std::endl << std::endl;

	// Vector Speed Test

	ft::vector<int> vectorA(1000000, 1);
	ft::vector<int>::iterator vector_itA = vectorA.begin();

	for (; vector_itA != vectorA.end(); vector_itA++) {
		std::cout << "[ " << *vector_itA << " ]" << std::endl;
	}

	ft::vector<int> vectorB;
	vectorB = vectorA;

	// These ones messes the check_diff test;
	std::cout << &vectorA << std::endl;
	std::cout << &vectorB << std::endl;

	vectorA.pop_back();
	vectorA.pop_back();
	vectorA.pop_back();

	std::cout << vectorA.size() << std::endl;
	std::cout << vectorB.size() << std::endl;

	// Map Speed Test

	ft::map<int, int> mapA;

	for (int i = 0; i < 1000000; i++)
	{
		mapA.insert(ft::make_pair(rand(), rand()));
	}

	for (int i = 0; i < 1000000; i++)
	{
		mapA.erase(i);
	}

	ft::map<int, int>::iterator map_itA = mapA.begin();

	for (; map_itA != mapA.end(); map_itA++) {
		std::cout << "[ " << map_itA->first << " " << map_itA->second << " ]" << std::endl;
	}

}

#include "../../../includes/main.hpp"

void	testAnything::anything__tests() {
	std::cout << "Test Anything:" << std::endl << std::endl;

	ft::map<int, int> mapA;

	mapA.insert(ft::pair<int, int>(1, 1));
	mapA.insert(ft::pair<int, int>(1, 1));
	mapA.insert(ft::pair<int, int>(2, 1));
	mapA.insert(ft::pair<int, int>(3, 1));

	ft::map<int, int>::iterator it = mapA.begin();

	for (; it != mapA.end(); it++)
	{
		std::cout << it->first << " " << it->second << std::endl;
	}


	it--;

	mapA.erase(it);


	it = mapA.begin();

	mapA.erase(it);

	it = mapA.begin();

	for (; it != mapA.end(); it++)
	{
		std::cout << it->first << " " << it->second << std::endl;
	}
}

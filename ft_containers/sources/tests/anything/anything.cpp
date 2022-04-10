#include "../../../includes/main.hpp"

void	testAnything::anything__tests() {
	std::cout << "Test Anything:" << std::endl << std::endl;

	ft::map<int, int> mapA;

	mapA.insert(ft::pair<int, int>(1, 1));

	ft::map<int, int>::iterator it = mapA.begin();

	mapA.insert(it, ft::pair<int, int>(2, 2));


}

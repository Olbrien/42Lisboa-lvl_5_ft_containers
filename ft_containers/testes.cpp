#include <iostream>
#include <vector>
#include <map>

int main() {
	std::vector<int> vectorA;

	for (int i = 5; i < 40; i += 5) {
		vectorA.push_back(i);
	}

	for (auto i : vectorA) {
		std::cout << i << std::endl;
	}

	std::vector<int>::iterator iterA = vectorA.begin();
	std::vector<int>::const_iterator iterB = vectorA.begin();



}

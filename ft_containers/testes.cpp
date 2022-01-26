#include <iostream>
#include <vector>

int main(void)
{
	std::vector<int> vectorA;
	vectorA.push_back(1);
	vectorA.push_back(2);
	vectorA.push_back(3);
	vectorA.push_back(4);
	std::vector<int> vectorB(vectorA.rbegin(), vectorA.rend());

	for (auto it : vectorB) {
		std::cout << it << " ";
	}
	std::cout << std::endl;
}

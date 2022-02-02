#include <iostream>
#include <vector>


int main(void)
{
	std::allocator<int> myAllocator;

	int *arr = myAllocator.allocate(4);
	myAllocator.construct(arr, 5);
	myAllocator.construct(arr + 1, 2);
	myAllocator.construct(arr + 2, 3);

	std::cout << arr[0] << std::endl;
	std::cout << arr[1] << std::endl;
	std::cout << arr[2] << std::endl;
	std::cout << arr[3] << std::endl;

	myAllocator.destroy(arr);
	myAllocator.destroy(arr + 1);
	myAllocator.destroy(arr + 2);
	myAllocator.destroy(arr + 3);

	myAllocator.deallocate(arr, 3);
}

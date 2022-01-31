#include <iostream>
#include <vector>


int main(void)
{
	std::allocator<int> myAllocator;

	int *arr = myAllocator.allocate(3);
	myAllocator.construct(arr, 5);
	myAllocator.construct(arr + 1, 2);
	myAllocator.construct(arr + 2, 3);

	std::cout << arr[2] << std::endl;

	myAllocator.destroy(arr + 2);
	std::cout << arr[2] << std::endl;

	myAllocator.destroy(arr + 2);
	myAllocator.destroy(arr + 2);
	std::cout << arr[2] << std::endl;

	myAllocator.destroy(arr + 2);

	myAllocator.deallocate(arr, 3);

	myAllocator.destroy(arr + 2);



}

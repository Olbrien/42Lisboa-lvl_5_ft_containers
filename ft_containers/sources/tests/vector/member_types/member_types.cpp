#include "../../../../includes/main.hpp"

void	testVector::member_types__value_type() {
	std::cout << "Value Type: " << std::endl;

	ft::vector<int>::value_type _value_type(5);
	ft::vector<double>::value_type _value_type2(5);

	std::cout << "  <int> type = " << typeid(_value_type).name() << std::endl;
	std::cout << "  <double> type = " << typeid(_value_type2).name() << std::endl;

	std::cout << std::endl;
}
void	testVector::member_types__allocator_type() {
	std::cout << "Allocator Type: " << std::endl;

	ft::vector<int>::allocator_type _allocator_type;

	int *arr = _allocator_type.allocate(3);
	_allocator_type.construct(arr, 3);
	_allocator_type.construct(arr + 1, 1);
	_allocator_type.construct(arr + 2, 2);

	std::cout << "  allocated = {" << arr[0] << " " << arr[1] << " " << arr[2] << "}" << std::endl;

	_allocator_type.destroy(arr);
	_allocator_type.destroy(arr + 1);
	_allocator_type.destroy(arr + 2);

	_allocator_type.deallocate(arr, 2);

	std::cout << std::endl;
}
void	testVector::member_types__reference() {
	std::cout << "Reference: " << std::endl;

	ft::vector<int>::value_type _value_type(3);
	ft::vector<int>::reference _reference(_value_type);

	std::cout << "  reference = " << _reference << std::endl;
	std::cout << "  value_type = " << _value_type << std::endl;
	_reference = 5;
	std::cout << "    changed reference using \"_reference = 5\"" << std::endl;
	std::cout << "  reference = " << _reference << std::endl;
	std::cout << "  value_type = " << _value_type << std::endl;

	std::cout << std::endl;
}
void	testVector::member_types__const_reference() {
	std::cout << "Const Reference: " << std::endl;

	ft::vector<int>::value_type _value_type(3);
	ft::vector<int>::const_reference _const_reference(_value_type);

	std::cout << "  const reference = " << _const_reference << std::endl;
	std::cout << "  value_type = " << _value_type << std::endl;
	std::cout << "    can't change value because it's constant" << std::endl;

	std::cout << std::endl;
}
void	testVector::member_types__pointer() {
	std::cout << "Pointer: " << std::endl;

	ft::vector<int>::value_type _value_type(3);
	ft::vector<int>::pointer _pointer(&_value_type);

	std::cout << "  pointer = " << _pointer << std::endl;
	std::cout << "  *pointer = " << *_pointer << std::endl;
	std::cout << "  value_type = " << _value_type << std::endl;
	*_pointer = 5;
	std::cout << "    changed pointer using \"*_pointer = 5\"" << std::endl;
	std::cout << "  pointer = " << _pointer << std::endl;
	std::cout << "  *pointer = " << *_pointer << std::endl;
	std::cout << "  value_type = " << _value_type << std::endl;

	std::cout << std::endl;
}
void	testVector::member_types__const_pointer() {
	std::cout << "Const Pointer: " << std::endl;

	ft::vector<int>::value_type _value_type(3);
	ft::vector<int>::const_pointer const_pointer(&_value_type);

	std::cout << "  const_pointer = " << const_pointer << std::endl;
	std::cout << "  *const_pointer = " << *const_pointer << std::endl;
	std::cout << "  value_type = " << _value_type << std::endl;

	std::cout << std::endl;
}
void	testVector::member_types__difference_type() {
	std::cout << "Difference Type: " << std::endl;

	ft::vector<char>::difference_type _difference_type;

	_difference_type = 2;
	std::cout << "  difference_type = " << _difference_type << std::endl;
	_difference_type = -2;
	std::cout << "  difference_type = " << _difference_type << std::endl;

	std::cout << std::endl;
}
void	testVector::member_types__size_type() {
	std::cout << "Size Type: " << std::endl;

	ft::vector<char>::size_type _size_type;

	_size_type = 2;
	std::cout << "  size_type = " << _size_type << std::endl;
	_size_type = -2;
	std::cout << "  size_type = " << _size_type << std::endl;

	std::cout << std::endl;
}

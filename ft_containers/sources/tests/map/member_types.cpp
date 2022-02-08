#include "../../../includes/main.hpp"

// void	testVector::member_types__value_type() {
// 			std::cout << "Value Type: " << std::endl << std::endl;

// 	ft::vector<int>::value_type vt(5);
// 	ft::vector<double>::value_type vt2(5);
// 	ft::vector<char>::value_type vt3('X');

// 			std::cout << "  vector<int>::value_type       vt(5);" << std::endl;
// 			std::cout << "  vector<double>::value_type    vt2(5);" << std::endl;
// 			std::cout << "  vector<char>::value_type      vt3('X');" << std::endl;

// 			std::cout << std::endl;

// 			std::cout << "      typeid(vt).name()  is	" << typeid(vt).name() << std::endl;
// 			std::cout << "      typeid(vt2).name() is	" << typeid(vt2).name() << std::endl;
// 			std::cout << "      typeid(vt3).name() is	" << typeid(vt3).name() << std::endl;
// 			std::cout << std::endl;
// }
// void	testVector::member_types__allocator_type() {
// 			std::cout << "Allocator Type: " << std::endl << std::endl;

// 	ft::vector<int>::allocator_type alloc;

// 			std::cout << "  vector<int>::allocator_type      alloc;" << std::endl;

// 	int *arr = alloc.allocate(3);
// 	alloc.construct(arr, 3);
// 	alloc.construct(arr + 1, 1);
// 	alloc.construct(arr + 2, 2);

// 			std::cout << "  int *arr = alloc.allocate(3);" << std::endl << std::endl;
// 			std::cout << "  alloc.construct(arr, 3);" << std::endl;
// 			std::cout << "  alloc.construct(arr + 1, 1);" << std::endl;
// 			std::cout << "  alloc.construct(arr + 2, 2);" << std::endl << std::endl;

// 			std::cout << "      alloc is { " << arr[0] << ", " << arr[1] << ", " << arr[2]
// 					  << " }" << std::endl << std::endl;

// 	alloc.destroy(arr);
// 	alloc.destroy(arr + 1);
// 	alloc.destroy(arr + 2);
// 	alloc.deallocate(arr, 3);

// 			std::cout << "  alloc.destroy(arr);" << std::endl;
// 			std::cout << "  alloc.destroy(arr + 1);" << std::endl;
// 			std::cout << "  alloc.destroy(arr + 2);" << std::endl;
// 			std::cout << "  alloc.deallocate(arr, 3);" << std::endl;
// 			std::cout << std::endl;
// }
// void	testVector::member_types__reference() {
// 			std::cout << "Reference: " << std::endl << std::endl;

// 	ft::vector<int>::value_type 	vt(3);
// 	ft::vector<int>::reference 		ref(vt);

// 			std::cout << "  vector<int>::value_type	vt(3);" << std::endl;
// 			std::cout << "  vector<int>::reference	ref(vt);" << std::endl << std::endl;

// 	ref = 5;

// 			std::cout << "  ref = 5;" << std::endl << std::endl;
// 			std::cout << "      reference is	" << ref << std::endl;
// 			std::cout << "      value_type is	" << vt << std::endl;
// 			std::cout << std::endl;
// }
// void	testVector::member_types__const_reference() {
// 			std::cout << "Const Reference: " << std::endl << std::endl;

// 	ft::vector<int>::value_type vt(3);
// 	ft::vector<int>::const_reference const_ref(vt);

// 			std::cout << "  vector<int>::value_type	vt(3);" << std::endl;
// 			std::cout << "  vector<int>::const_reference	const_ref(vt);" << std::endl << std::endl;

// 			std::cout << "      const_reference is	" << const_ref << std::endl;
// 			std::cout << "      value_type is		" << vt << std::endl << std::endl;
// 			std::cout << "      Can't change value because it's constant." << std::endl;
// 			std::cout << std::endl;
// }
// void	testVector::member_types__pointer() {
// 			std::cout << "Pointer: " << std::endl << std::endl;

// 	ft::vector<int>::value_type vt(3);
// 	ft::vector<int>::pointer ptr(&vt);

// 			std::cout << "  vector<int>::value_type	vt(3);" << std::endl;
// 			std::cout << "  vector<int>::pointer		ptr(&vt);" << std::endl << std::endl;

// 			std::cout << "      ptr is			" << ptr << std::endl;
// 			std::cout << "      *ptr is			" << *ptr << std::endl;
// 			std::cout << "      value_type is		" << vt << std::endl << std::endl;

// 	*ptr = 5;

// 			std::cout << "  *ptr = 5;" << std::endl << std::endl;

// 			std::cout << "      ptr is			" << ptr << std::endl;
// 			std::cout << "      *ptr is			" << *ptr << std::endl;
// 			std::cout << "      value_type is		" << vt << std::endl;
// 			std::cout << std::endl;
// }
// void	testVector::member_types__const_pointer() {
// 			std::cout << "Const Pointer: " << std::endl << std::endl;

// 	ft::vector<int>::value_type vt(3);
// 	ft::vector<int>::const_pointer const_ptr(&vt);

// 			std::cout << "  vector<int>::value_type	vt(3);" << std::endl;
// 			std::cout << "  vector<int>::const_pointer	const_ptr(&vt);" << std::endl << std::endl;

// 			std::cout << "      const_ptr is		" << const_ptr << std::endl;
// 			std::cout << "      *const_ptr is		" << *const_ptr << std::endl;
// 			std::cout << "      value_type is		" << vt << std::endl;
// 			std::cout << std::endl;
// }
// void	testVector::member_types__difference_type() {
// 			std::cout << "Difference Type: " << std::endl << std::endl;

// 	ft::vector<char>::difference_type diff;

// 			std::cout << "  vector<char>::difference_type	diff;" << std::endl << std::endl;

// 	diff = 2;

// 			std::cout << "  diff = 2;" << std::endl << std::endl;
// 			std::cout << "      diff is			" << diff << std::endl << std::endl;

// 	diff = -2;

// 			std::cout << "  diff = -2;" << std::endl << std::endl;
// 			std::cout << "      diff is			" << diff << std::endl;
// 			std::cout << std::endl;
// }
// void	testVector::member_types__size_type() {
// 			std::cout << "Size Type: " << std::endl << std::endl;

// 	ft::vector<char>::size_type size;

// 			std::cout << "  vector<char>::size_type	size;" << std::endl << std::endl;

// 	size = 2;

// 			std::cout << "  size = 2;" << std::endl << std::endl;
// 			std::cout << "      size is			" << size << std::endl << std::endl;

// 	size = -2;

// 			std::cout << "  size = -2;" << std::endl << std::endl;
// 			std::cout << "      size is			" << size << std::endl;
// 			std::cout << std::endl;
// }

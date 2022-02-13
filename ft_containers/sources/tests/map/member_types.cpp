#include "../../../includes/main.hpp"

void	testMap::member_types__key_type() {
			std::cout << "Key Type: " << std::endl << std::endl;

	ft::map<int, int>::key_type kt1;
	ft::map<std::string, double>::key_type kt2;
	ft::map<int, char *>::key_type kt3;
	ft::map<char *, int>::key_type kt4;
	ft::map<double, int>::key_type kt5;

			std::cout << "  ft::map<int, int>::key_type			kt1;" << std::endl;
			std::cout << "  ft::map<std::string, double>::key_type	kt2;" << std::endl;
			std::cout << "  ft::map<int, char *>::key_type		kt3;" << std::endl;
			std::cout << "  ft::map<char *, int>::key_type		kt4;" << std::endl;
			std::cout << "  ft::map<double, int>::key_type		kt5;" << std::endl;

			std::cout << std::endl;

			std::cout << "      typeid(kt1).name() is	" << typeid(kt1).name() << std::endl;
			std::cout << "      typeid(kt2).name() is	" << typeid(kt2).name() << std::endl;
			std::cout << "      typeid(kt3).name() is	" << typeid(kt3).name() << std::endl;
			std::cout << "      typeid(kt4).name() is	" << typeid(kt4).name() << std::endl;
			std::cout << "      typeid(kt5).name() is	" << typeid(kt5).name() << std::endl;
			std::cout << std::endl;
}
void	testMap::member_types__mapped_type() {
			std::cout << "Mapped Type: " << std::endl << std::endl;

	ft::map<int, int>::mapped_type mt1;
	ft::map<std::string, double>::mapped_type mt2;
	ft::map<int, char *>::mapped_type mt3;
	ft::map<char *, int>::mapped_type mt4;
	ft::map<double, int>::mapped_type mt5;

			std::cout << "  ft::map<int, int>::mapped_type		mt1;" << std::endl;
			std::cout << "  ft::map<std::string, double>::mapped_type	mt2;" << std::endl;
			std::cout << "  ft::map<int, char *>::mapped_type		mt3;" << std::endl;
			std::cout << "  ft::map<char *, int>::mapped_type		mt4;" << std::endl;
			std::cout << "  ft::map<double, int>::mapped_type		mt5;" << std::endl;

			std::cout << std::endl;

			std::cout << "      typeid(mt1).name() is	" << typeid(mt1).name() << std::endl;
			std::cout << "      typeid(mt2).name() is	" << typeid(mt2).name() << std::endl;
			std::cout << "      typeid(mt3).name() is	" << typeid(mt3).name() << std::endl;
			std::cout << "      typeid(mt4).name() is	" << typeid(mt4).name() << std::endl;
			std::cout << "      typeid(mt5).name() is	" << typeid(mt5).name() << std::endl;
			std::cout << std::endl;
}
void	testMap::member_types__value_type() {
			std::cout << "Value Type: " << std::endl << std::endl;

	ft::map<int, int>::value_type vt1;
	ft::map<std::string, double>::value_type vt2;
	ft::map<int, char *>::value_type vt3;
	ft::map<char *, int>::value_type vt4;
	ft::map<double, int>::value_type vt5;

			std::cout << "  ft::map<int, int>::value_type			vt1;" << std::endl;
			std::cout << "  ft::map<std::string, double>::value_type	vt2;" << std::endl;
			std::cout << "  ft::map<int, char *>::value_type		vt3;" << std::endl;
			std::cout << "  ft::map<char *, int>::value_type		vt4;" << std::endl;
			std::cout << "  ft::map<double, int>::value_type		vt5;" << std::endl;

			std::cout << std::endl;

			std::cout << "      typeid(vt1.first).name() is	" << typeid(vt1.first).name() << std::endl;
			std::cout << "      typeid(vt1.second).name() is	" << typeid(vt1.second).name() << std::endl << std::endl;

			std::cout << "      typeid(vt2.first).name() is	" << typeid(vt2.first).name() << std::endl;
			std::cout << "      typeid(vt2.second).name() is	" << typeid(vt2.second).name() << std::endl << std::endl;

			std::cout << "      typeid(vt3.first).name() is	" << typeid(vt3.first).name() << std::endl;
			std::cout << "      typeid(vt3.second).name() is	" << typeid(vt3.second).name() << std::endl << std::endl;

			std::cout << "      typeid(vt4.first).name() is	" << typeid(vt4.first).name() << std::endl;
			std::cout << "      typeid(vt4.second).name() is	" << typeid(vt4.second).name() << std::endl << std::endl;

			std::cout << "      typeid(vt5.first).name() is	" << typeid(vt5.first).name() << std::endl;
			std::cout << "      typeid(vt5.second).name() is	" << typeid(vt5.second).name() << std::endl << std::endl;
			std::cout << std::endl;
}
void	testMap::member_types__value_compare() {
			std::cout << "Value Compare: " << std::endl << std::endl;

	std::cout << "CANNOT BE DONE YET" << std::endl;
}
void	testMap::member_types__allocator_type() {
			std::cout << "Allocator Type: " << std::endl << std::endl;

	ft::map<int, int>::allocator_type alloc;

	std::cout << "CANNOT BE DONE YET" << std::endl;
}
void	testMap::member_types__reference() {
			std::cout << "Reference: " << std::endl << std::endl;

	ft::map<int, int>::reference 	ref(ft::pair<int, int>);

			std::cout << "  map<int, int>::reference 	ref(ft::pair<int, int>);" << std::endl << std::endl;

			std::cout << "      reference is	" << &ref << std::endl;
			std::cout << std::endl;
}
void	testMap::member_types__const_reference() {
			std::cout << "Const Reference: " << std::endl << std::endl;

	ft::map<int, int>::const_reference		const_ref(ft::pair<int, int>);

			std::cout << "  map<int, int>::const_reference		const_ref(ft::pair<int, int>);" << std::endl << std::endl;

			std::cout << "      const_reference is	" << &const_ref << std::endl;
			std::cout << std::endl;
}
void	testMap::member_types__pointer() {
			std::cout << "Pointer: " << std::endl << std::endl;

	ft::map<int, int>::pointer		ptr(int, int);

			std::cout << "  map<int, int>::pointer		ptr(int, int);" << std::endl << std::endl;

			std::cout << "      &ptr is			" << &ptr << std::endl;
			std::cout << "      *ptr is			" << *ptr << std::endl;
			std::cout << std::endl;
}
void	testMap::member_types__const_pointer() {
			std::cout << "Const Pointer: " << std::endl << std::endl;

	ft::map<int, int>::const_pointer		const_ptr(int, int);

			std::cout << "  map<int, int>::const_pointer		const_ptr(int, int);" << std::endl << std::endl;

			std::cout << "      &const_ptr is			" << &const_ptr << std::endl;
			std::cout << "      *const_ptr is			" << *const_ptr << std::endl;
			std::cout << std::endl;
}
void	testMap::member_types__difference_type() {
			std::cout << "Difference Type: " << std::endl << std::endl;

	ft::map<char, char>::difference_type diff;

			std::cout << "  vector<char>::difference_type	diff;" << std::endl << std::endl;

	diff = 2;

			std::cout << "  diff = 2;" << std::endl << std::endl;
			std::cout << "      diff is			" << diff << std::endl << std::endl;

	diff = -2;

			std::cout << "  diff = -2;" << std::endl << std::endl;
			std::cout << "      diff is			" << diff << std::endl;
			std::cout << std::endl;
}
void	testMap::member_types__size_type() {
			std::cout << "Size Type: " << std::endl << std::endl;

	ft::map<char, char>::size_type size;

			std::cout << "  vector<char>::size_type	size;" << std::endl << std::endl;

	size = 2;

			std::cout << "  size = 2;" << std::endl << std::endl;
			std::cout << "      size is			" << size << std::endl << std::endl;

	size = -2;

			std::cout << "  size = -2;" << std::endl << std::endl;
			std::cout << "      size is			" << size << std::endl;
			std::cout << std::endl;
}

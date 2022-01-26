#include "../../../includes/main.hpp"
#include "extras.hpp"

void	testExtras::extras__iterator_traits() {
			std::cout << "Iterator Traits:" << std::endl << std::endl;

			std::cout << "  typeid(iterator_traits<int *>::iterator_category).name();" << std::endl;
			std::cout << "  typeid(iterator_traits<const int *>::iterator_category).name();" << std::endl;
			std::cout << "  typeid(iterator_traits<char *>::pointer).name();" << std::endl;
			std::cout << "  typeid(iterator_traits<const char *>::pointer).name();" << std::endl;
			std::cout << "  typeid(iterator_traits<float *>::reference).name();" << std::endl;
			std::cout << "  typeid(iterator_traits<const float *>::reference).name();" << std::endl;
			std::cout << "  typeid(iterator_traits<char **>::difference_type).name();" << std::endl;
			std::cout << "  typeid(iterator_traits<const char **>::difference_type).name();" << std::endl;
			std::cout << std::endl;

			std::cout << "      " << typeid(ft::iterator_traits<int *>::iterator_category).name() << std::endl;
			std::cout << "      " << typeid(ft::iterator_traits<const int *>::iterator_category).name() << std::endl;
			std::cout << "      " << typeid(ft::iterator_traits<char *>::pointer).name() << std::endl;
			std::cout << "      " << typeid(ft::iterator_traits<const char *>::pointer).name() << std::endl;
			std::cout << "      " << typeid(ft::iterator_traits<float *>::reference).name() << std::endl;
			std::cout << "      " << typeid(ft::iterator_traits<const float *>::reference).name() << std::endl;
			std::cout << "      " << typeid(ft::iterator_traits<char **>::difference_type).name() << std::endl;
			std::cout << "      " << typeid(ft::iterator_traits<const char **>::difference_type).name() << std::endl;
			std::cout << std::endl;
}
void	testExtras::extras__enable_if() {
			std::cout << "Enable If:" << std::endl << std::endl;

			std::cout << "  template <class T>" << std::endl;
			std::cout << "  void isClass (T, typename enable_if<!is_class<T>::value>::type* = 0) {" << std::endl;
			std::cout << "  	std::cout << \"False\" << std::endl;" << std::endl;
			std::cout << "  }" << std::endl << std::endl;

			std::cout << "  template <class T>" << std::endl;
			std::cout << "  void isClass (T, typename enable_if<is_class<T>::value>::type* = 0) {" << std::endl;
			std::cout << "  	std::cout << \"True\" << std::endl;" << std::endl;
			std::cout << "  }" << std::endl << std::endl;

			std::cout << "  template <class T>" << std::endl;
			std::cout << "  void isEnum (T, typename enable_if<!is_enum<T>::value>::type* = 0) {" << std::endl;
			std::cout << "  	std::cout << \"False\" << std::endl;" << std::endl;
			std::cout << "  }" << std::endl << std::endl;

			std::cout << "  template <class T>" << std::endl;
			std::cout << "  void isEnum (T, typename enable_if<is_enum<T>::value>::type* = 0) {" << std::endl;
			std::cout << "  	std::cout << \"True\" << std::endl;" << std::endl;
			std::cout << "  }" << std::endl << std::endl;

			std::cout << "  enum color { red, green, blue };" << std::endl;
			std::cout << "  color r = red;" << std::endl;
			std::cout << "  std::string str = \"String is a class\";" << std::endl;
			std::cout << "  int i = 5;" << std::endl << std::endl;

			std::cout << "  testExtras::isClass(testExtras::str)" ;
			std::cout << "   is ";  testExtras::isClass(testExtras::str);
			std::cout << "  testExtras::isClass(testExtras::r)" ;
			std::cout << "     is ";  testExtras::isClass(testExtras::r);
			std::cout << "  testExtras::isClass(testExtras::i)" ;
			std::cout << "     is ";  testExtras::isClass(testExtras::i);
			std::cout << std::endl;

			std::cout << "  testExtras::isEnum(testExtras::str)" ;
			std::cout << "    is ";  testExtras::isEnum(testExtras::str);
			std::cout << "  testExtras::isEnum(testExtras::r)" ;
			std::cout << "      is ";  testExtras::isEnum(testExtras::r);
			std::cout << "  testExtras::isEnum(testExtras::i)" ;
			std::cout << "      is ";  testExtras::isEnum(testExtras::i);
			std::cout << std::endl;
}
void	testExtras::extras__is_integral() {

}

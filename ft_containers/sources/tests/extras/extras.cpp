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
			std::cout << "  color _enum = red;" << std::endl;
			std::cout << "  std::string _str = \"String is a class\";" << std::endl;
			std::cout << "  int _int = 5;" << std::endl << std::endl;

			std::cout << "  isClass(_str)" ;
			std::cout << "      is ";  testExtras::isClass(testExtras::_str);
			std::cout << "  isClass(_enum)" ;
			std::cout << "     is ";  testExtras::isClass(testExtras::_enum);
			std::cout << "  isClass(_int)" ;
			std::cout << "      is ";  testExtras::isClass(testExtras::_int);
			std::cout << std::endl;

			std::cout << "  isEnum(_str)" ;
			std::cout << "       is ";  testExtras::isEnum(testExtras::_str);
			std::cout << "  isEnum(_enum)" ;
			std::cout << "      is ";  testExtras::isEnum(testExtras::_enum);
			std::cout << "  isEnum(_int)" ;
			std::cout << "       is ";  testExtras::isEnum(testExtras::_int);
			std::cout << std::endl;
}
void	testExtras::extras__is_integral() {
			std::cout << "Is Integral:" << std::endl << std::endl;

			std::cout << "  template <class T>" << std::endl;
			std::cout << "  void isIntegral (T, " << std::endl
					  << "                   typename enable_if<!is_integral<T>::value>::type*= 0)" << std::endl;
			std::cout << "  {" << std::endl;
			std::cout << "  	std::cout << \"False\" << std::endl;" << std::endl;
			std::cout << "  }" << std::endl << std::endl;

			std::cout << "  template <class T>" << std::endl;
			std::cout << "  void isIntegral (T, " << std::endl
					  << "                   typename enable_if<is_integral<T>::value>::type*= 0)" << std::endl;
			std::cout << "  {" << std::endl;
			std::cout << "  	std::cout << \"True\" << std::endl;" << std::endl;
			std::cout << "  }" << std::endl << std::endl;

			std::cout << "  enum color { red, green, blue };" << std::endl;
			std::cout << "  color _enum = red;" << std::endl;
			std::cout << "  std::string _str = \"String is a class\";" << std::endl;
			std::cout << "  int _int = 5;" << std::endl;
			std::cout << "  long int _long_int = 2;" << std::endl;
			std::cout << "  char _char = 'b';" << std::endl;
			std::cout << "  double _double = 2.2;" << std::endl;
			std::cout << "  float _float = 2.2f;" << std::endl << std::endl;

			std::cout << "  isIntegral(_enum)" ;
			std::cout << "        is ";  testExtras::isIntegral(testExtras::_enum);
			std::cout << "  isIntegral(_str)" ;
			std::cout << "         is ";  testExtras::isIntegral(testExtras::_str);
			std::cout << "  isIntegral(_int)" ;
			std::cout << "         is ";  testExtras::isIntegral(testExtras::_int);
			std::cout << "  isIntegral(_long_int)" ;
			std::cout << "    is ";  testExtras::isIntegral(testExtras::_long_int);
			std::cout << "  isIntegral(_char)" ;
			std::cout << "        is ";  testExtras::isIntegral(testExtras::_char);
			std::cout << "  isIntegral(_double)" ;
			std::cout << "      is ";  testExtras::isIntegral(testExtras::_double);
			std::cout << "  isIntegral(_float)" ;
			std::cout << "       is ";  testExtras::isIntegral(testExtras::_float);
			std::cout << std::endl;
}

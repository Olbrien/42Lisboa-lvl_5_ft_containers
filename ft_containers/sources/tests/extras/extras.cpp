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
			std::cout << "enable_if():" << std::endl << std::endl;

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
			std::cout << "is_integral():" << std::endl << std::endl;

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
void	testExtras::extras__equal() {
			std::cout << "equal():" << std::endl << std::endl;

			std::cout << "       bool isGreaterOrEqual(int first, int second) {" << std::endl <<
						 "          return first >= second;" << std::endl <<
						 "       }" << std::endl << std::endl;

	ft::vector<int> vectorA(2, 2);
	ft::vector<int> vectorB(3, 3);
	ft::vector<int> vectorH(3, 3);

			std::cout << "  vector<int> vectorA(2, 2);" << std::endl;
			std::cout << "  vector<int> vectorB(3, 3);" << std::endl;
			std::cout << "  vector<int> vectorH(3, 3);" << std::endl << std::endl;

			std::cout << std::boolalpha;

			std::cout << "  equal(vectorA.begin(), vectorA.end(), vectorB.begin());" << std::endl;
			std::cout << "  equal(vectorB.begin(), vectorB.end(), vectorH.begin());" << std::endl << std::endl;

			std::cout << "  equal(vectorA.begin(), vectorA.end(), vectorB.begin(), isGreaterOrEqual;" << std::endl;
			std::cout << "  equal(vectorB.begin(), vectorB.end(), vectorH.begin(), isGreaterOrEqual;" << std::endl << std::endl;

			std::cout << "       " << ft::equal(vectorA.begin(), vectorA.end(), vectorB.begin()) << std::endl;
			std::cout << "       " << ft::equal(vectorB.begin(), vectorB.end(), vectorH.begin()) << std::endl << std::endl;

			std::cout << "       " << ft::equal(vectorA.begin(), vectorA.end(), vectorB.begin(), testExtras::isGreaterOrEqual) << std::endl;
			std::cout << "       " << ft::equal(vectorB.begin(), vectorB.end(), vectorH.begin(), testExtras::isGreaterOrEqual) << std::endl << std::endl;
}
void	testExtras::extras__lexicographical_compare() {
			std::cout << "lexicographical_compare():" << std::endl << std::endl;

			std::cout << "       bool isGreaterOrEqual(int first, int second) {" << std::endl <<
						 "          return first >= second;" << std::endl <<
						 "       }" << std::endl << std::endl;

	ft::vector<int> vectorA(5, 5);
	ft::vector<int> vectorB(5, 4);

			std::cout << "  vector<int>		vectorA(5, 5);" << std::endl;
			std::cout << "  vector<int>		vectorB(5, 4);" << std::endl << std::endl;

			std::cout << std::boolalpha;

			std::cout << "  lexicographical_compare(vectorA.begin(), vectorA.end(), vectorB.begin(), vectorB.end());" << std::endl;
			std::cout << "  lexicographical_compare(vectorB.begin(), vectorB.end(), vectorA.begin(), vectorA.end());" << std::endl << std::endl;

			std::cout << "  lexicographical_compare(vectorA.begin(), vectorA.end(), vectorB.begin(), vectorB.end(), isGreaterOrEqual);" << std::endl;
			std::cout << "  lexicographical_compare(vectorB.begin(), vectorB.end(), vectorA.begin(), vectorA.end(), isGreaterOrEqual);" << std::endl << std::endl;

			std::cout << "       " << ft::lexicographical_compare(vectorA.begin(), vectorA.end(), vectorB.begin(), vectorB.end()) << std::endl;
			std::cout << "       " << ft::lexicographical_compare(vectorB.begin(), vectorB.end(), vectorA.begin(), vectorA.end()) << std::endl << std::endl;

			std::cout << "       " << ft::lexicographical_compare(vectorA.begin(), vectorA.end(), vectorB.begin(), vectorB.end(), testExtras::isGreaterOrEqual) << std::endl;
			std::cout << "       " << ft::lexicographical_compare(vectorB.begin(), vectorB.end(), vectorA.begin(), vectorA.end(), testExtras::isGreaterOrEqual) << std::endl;




	//ft::lexicographical_compare(lhs.begin(), lhs.end(), rhs.begin(), rhs.end())
}
void	testExtras::extras__pair() {
			std::cout << "pair():" << std::endl << std::endl;
			std::cout << "Constructors:" << std::endl << std::endl;

	ft::pair<int, int> obj1(5, 10);
	ft::pair<std::string, int> obj2("Save Yourself", 10);
	ft::pair<int, int> obj3(obj1);
	ft::pair<int, int> obj4(12, 9);
	ft::pair<int, int> obj5;

			std::cout << "  pair<int, int> obj1(5, 10);" << std::endl;
			std::cout << "  pair<std::string, int> obj2(\"Save Yourself\", 10);" << std::endl;
			std::cout << "  pair<int, int> obj3(obj1);" << std::endl;
			std::cout << "  pair<int, int> obj4;" << std::endl << std::endl;

			std::cout << "       obj1.first is	" << obj1.first << std::endl;
			std::cout << "       obj1.second is	" << obj1.second << std::endl;
			std::cout << "       &obj1.first is	" << &obj1.first << std::endl;
			std::cout << "       &obj1.second is	" << &obj1.second << std::endl << std::endl;

			std::cout << "       obj2.first is	" << obj2.first << std::endl;
			std::cout << "       obj2.second is	" << obj2.second << std::endl;
			std::cout << "       &obj2.first is	" << &obj2.first << std::endl;
			std::cout << "       &obj2.second is	" << &obj2.second << std::endl << std::endl;

			std::cout << "       obj3.first is	" << obj3.first << std::endl;
			std::cout << "       obj3.second is	" << obj3.second << std::endl;
			std::cout << "       &obj3.first is	" << &obj3.first << std::endl;
			std::cout << "       &obj3.second is	" << &obj3.second << std::endl << std::endl;

			std::cout << "       obj4.first is	" << obj4.first << std::endl;
			std::cout << "       obj4.second is	" << obj4.second << std::endl;
			std::cout << "       &obj4.first is	" << &obj4.first << std::endl;
			std::cout << "       &obj4.second is	" << &obj4.second << std::endl << std::endl;


			std::cout << "Assignment Operator=:" << std::endl << std::endl;

	obj5 = obj3;

			std::cout << "  obj5 = obj3;" << std::endl << std::endl;

			std::cout << "       obj5.first is	" << obj5.first << std::endl;
			std::cout << "       obj5.second is	" << obj5.second << std::endl;
			std::cout << "       &obj5.first is	" << &obj5.first << std::endl;
			std::cout << "       &obj5.second is	" << &obj5.second << std::endl << std::endl;


			std::cout << "Relational Operators:" << std::endl << std::endl;

			std::cout << std::boolalpha;

			std::cout << "       (obj5.first == obj3.first) is	" << (obj5.first == obj3.first) << std::endl;
			std::cout << "       (obj5.second == obj3.second is	" << (obj5.second == obj3.second) << std::endl;
			std::cout << "       (obj5.first == obj3.second is	" << (obj5.first == obj3.second) << std::endl << std::endl;

			std::cout << "       (obj4.first == obj4.first) is	" << (obj4.first == obj1.first) << std::endl;
			std::cout << "       (obj4.second == obj4.second is	" << (obj4.second == obj1.second) << std::endl;
			std::cout << "       (obj4.first == obj4.second is	" << (obj4.first == obj1.second) << std::endl << std::endl;

			std::cout << "       (obj5.first != obj3.first) is	" << (obj5.first != obj3.first) << std::endl;
			std::cout << "       (obj5.second != obj3.second is	" << (obj5.second != obj3.second) << std::endl;
			std::cout << "       (obj5.first != obj3.second is	" << (obj5.first != obj3.second) << std::endl << std::endl;

			std::cout << "       (obj4.first != obj4.first) is	" << (obj4.first != obj1.first) << std::endl;
			std::cout << "       (obj4.second != obj4.second is	" << (obj4.second != obj1.second) << std::endl;
			std::cout << "       (obj4.first != obj4.second is	" << (obj4.first != obj1.second) << std::endl << std::endl;

			std::cout << "       (obj5.first < obj3.first) is	" << (obj5.first < obj3.first) << std::endl;
			std::cout << "       (obj5.second < obj3.second is	" << (obj5.second < obj3.second) << std::endl;
			std::cout << "       (obj5.first < obj3.second is	" << (obj5.first < obj3.second) << std::endl << std::endl;

			std::cout << "       (obj4.first < obj4.first) is	" << (obj4.first < obj1.first) << std::endl;
			std::cout << "       (obj4.second < obj4.second is	" << (obj4.second < obj1.second) << std::endl;
			std::cout << "       (obj4.first < obj4.second is	" << (obj4.first < obj1.second) << std::endl << std::endl;

			std::cout << "       (obj5.first <= obj3.first) is	" << (obj5.first <= obj3.first) << std::endl;
			std::cout << "       (obj5.second <= obj3.second is	" << (obj5.second <= obj3.second) << std::endl;
			std::cout << "       (obj5.first <= obj3.second is	" << (obj5.first <= obj3.second) << std::endl << std::endl;

			std::cout << "       (obj4.first <= obj4.first) is	" << (obj4.first <= obj1.first) << std::endl;
			std::cout << "       (obj4.second <= obj4.second is	" << (obj4.second <= obj1.second) << std::endl;
			std::cout << "       (obj4.first <= obj4.second is	" << (obj4.first <= obj1.second) << std::endl << std::endl;

			std::cout << "       (obj5.first > obj3.first) is	" << (obj5.first > obj3.first) << std::endl;
			std::cout << "       (obj5.second > obj3.second is	" << (obj5.second > obj3.second) << std::endl;
			std::cout << "       (obj5.first > obj3.second is	" << (obj5.first > obj3.second) << std::endl << std::endl;

			std::cout << "       (obj4.first > obj4.first) is	" << (obj4.first > obj1.first) << std::endl;
			std::cout << "       (obj4.second > obj4.second is	" << (obj4.second > obj1.second) << std::endl;
			std::cout << "       (obj4.first > obj4.second is	" << (obj4.first > obj1.second) << std::endl << std::endl;

			std::cout << "       (obj5.first >= obj3.first) is	" << (obj5.first >= obj3.first) << std::endl;
			std::cout << "       (obj5.second >= obj3.second is	" << (obj5.second >= obj3.second) << std::endl;
			std::cout << "       (obj5.first >= obj3.second is	" << (obj5.first >= obj3.second) << std::endl << std::endl;

			std::cout << "       (obj4.first >= obj4.first) is	" << (obj4.first >= obj1.first) << std::endl;
			std::cout << "       (obj4.second >= obj4.second is	" << (obj4.second >= obj1.second) << std::endl;
			std::cout << "       (obj4.first >= obj4.second is	" << (obj4.first >= obj1.second) << std::endl << std::endl;


}
void	testExtras::extras__make_pair() {
			std::cout << "make_pair():" << std::endl << std::endl;

	ft::pair<std::string, int> obj1;
	ft::pair<int, int> obj2(12, 9);
	ft::pair<double, float> obj3 = ft::make_pair(25.5, 25.5);

			std::cout << "  pair<std::string, int> obj1;" << std::endl;
			std::cout << "  pair<int, int> obj2(12, 9);" << std::endl;
			std::cout << "  pair<double, float> obj3 = make_pair(25.5, 25.5);" << std::endl << std::endl;

	obj1 = ft::make_pair("Die Young and Save Yourself", 4);
	obj2 = ft::make_pair(2, 4);

			std::cout << "  obj1 = ft::make_pair(\"Die Young and Save Yourself\", 4);" << std::endl;
			std::cout << "  obj2 = ft::make_pair(2, 4);" << std::endl << std::endl;


			std::cout << "       obj1.first is	" << obj1.first << std::endl;
			std::cout << "       obj1.second is	" << obj1.second << std::endl;
			std::cout << "       &obj1.first is	" << &obj1.first << std::endl;
			std::cout << "       &obj1.second is	" << &obj1.second << std::endl << std::endl;

			std::cout << "       obj2.first is	" << obj2.first << std::endl;
			std::cout << "       obj2.second is	" << obj2.second << std::endl;
			std::cout << "       &obj2.first is	" << &obj2.first << std::endl;
			std::cout << "       &obj2.second is	" << &obj2.second << std::endl << std::endl;

			std::cout << "       obj3.first is	" << obj3.first << std::endl;
			std::cout << "       obj3.second is	" << obj3.second << std::endl;
			std::cout << "       &obj3.first is	" << &obj3.first << std::endl;
			std::cout << "       &obj3.second is	" << &obj3.second << std::endl << std::endl;

}

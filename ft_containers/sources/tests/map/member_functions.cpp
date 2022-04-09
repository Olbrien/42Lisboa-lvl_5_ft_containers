#include "../../../includes/main.hpp"

void	testMap::member_functions__empty_constructor() {
		std::cout << "Empty Constructor:" << std::endl << std::endl;

	ft::vector<int> vectorA;
	ft::vector<int> vectorB;

			std::cout << "  vector<int> vectorA;" << std::endl;
			std::cout << "  vector<int> vectorA;" << std::endl << std::endl;

			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
			std::cout << std::endl;
}
void	testMap::member_functions__range_constructor() {
			std::cout << "Range Constructor:" << std::endl << std::endl;

	ft::map<int, int> mapA;
	ft::map<int, int> mapB;
	ft::map<int, int> mapC;
	ft::map<int, int> mapD;

			std::cout << "  map<int, int> mapA;" << std::endl;
			std::cout << "  map<int, int> mapB;" << std::endl;
			std::cout << "  map<int, int> mapC;" << std::endl;
			std::cout << "  map<int, int> mapD;" << std::endl << std::endl;

	mapA.insert(ft::pair<int, int>(1, 1));
	mapA.insert(ft::pair<int, int>(2, 2));
	mapA.insert(ft::pair<int, int>(3, 3));
	mapA.insert(ft::pair<int, int>(4, 4));

	mapB.insert(ft::pair<int, int>(5, 5));
	mapB.insert(ft::pair<int, int>(6, 6));

	mapC.insert(ft::pair<int, int>(-10, -10));
	mapC.insert(ft::pair<int, int>(-9, -9));
	mapC.insert(ft::pair<int, int>(-8, -8));
	mapC.insert(ft::pair<int, int>(-7, -7));
	mapC.insert(ft::pair<int, int>(-6, -6));
	mapC.insert(ft::pair<int, int>(-5, -5));
	mapC.insert(ft::pair<int, int>(-4, -4));

			std::cout << "  mapA.insert(ft::pair<int, int>(1, 1));" << std::endl;
			std::cout << "  mapA.insert(ft::pair<int, int>(2, 2));" << std::endl;
			std::cout << "  mapA.insert(ft::pair<int, int>(3, 3));" << std::endl;
			std::cout << "  mapA.insert(ft::pair<int, int>(4, 4));" << std::endl << std::endl;

			std::cout << "  mapB.insert(ft::pair<int, int>(5, 5));" << std::endl;
			std::cout << "  mapB.insert(ft::pair<int, int>(6, 6));" << std::endl  << std::endl;

			std::cout << "  mapC.insert(ft::pair<int, int>(-10, -10));" << std::endl;
			std::cout << "  mapC.insert(ft::pair<int, int>(-9, -9));" << std::endl;
			std::cout << "  mapC.insert(ft::pair<int, int>(-8, -8));" << std::endl;
			std::cout << "  mapC.insert(ft::pair<int, int>(-7, -7));" << std::endl;
			std::cout << "  mapC.insert(ft::pair<int, int>(-6, -6));" << std::endl;
			std::cout << "  mapC.insert(ft::pair<int, int>(-5, -5));" << std::endl;
			std::cout << "  mapC.insert(ft::pair<int, int>(-4, -4));" << std::endl << std::endl;


			std::cout << "      mapA is		" ;
			for ( struct { int i; ft::map<int, int>::iterator itA; } s = {0, mapA.begin()}; s.itA != mapA.end(); s.itA++) {
				if (s.i == 0)
					std::cout << "[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				else
					std::cout << "      			[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				s.i = 1;
			}
			std::cout << "      mapA.size() is	" << mapA.size() << std::endl;
			std::cout << std::endl;


			std::cout << "      mapB is		" ;
			for ( struct { int i; ft::map<int, int>::iterator itA; } s = {0, mapB.begin()}; s.itA != mapB.end(); s.itA++) {
				if (s.i == 0)
					std::cout << "[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				else
					std::cout << "      			[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				s.i = 1;
			}
			std::cout << "      mapB.size() is	" << mapB.size() << std::endl;
			std::cout << std::endl;


			std::cout << "      mapC is		" ;
			for ( struct { int i; ft::map<int, int>::iterator itA; } s = {0, mapC.begin()}; s.itA != mapC.end(); s.itA++) {
				if (s.i == 0)
					std::cout << "[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				else
					std::cout << "      			[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				s.i = 1;
			}
			std::cout << "      mapC.size() is	" << mapC.size() << std::endl;
			std::cout << std::endl;


			std::cout << "      mapD is		\n" ;
			for ( struct { int i; ft::map<int, int>::iterator itA; } s = {0, mapD.begin()}; s.itA != mapD.end(); s.itA++) {
				if (s.i == 0)
					std::cout << "[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				else
					std::cout << "      			[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				s.i = 1;
			}
			std::cout << "      mapD.size() is	" << mapD.size() << std::endl;
			std::cout << std::endl;


	ft::map<int, int> mapE(mapA.begin(), mapA.end());
	ft::map<int, int> mapF(mapB.begin(), mapB.end());
	ft::map<int, int> mapG(mapC.begin(), mapC.end());
	ft::map<int, int> mapH(mapD.begin(), mapD.end());

			std::cout << "  map<int, int> mapE(mapA.begin(), mapA.end());" << std::endl;
			std::cout << "  map<int, int> mapF(mapB.begin(), mapB.end());" << std::endl;
			std::cout << "  map<int, int> mapG(mapC.begin(), mapC.end());" << std::endl;
			std::cout << "  map<int, int> mapH(mapD.begin(), mapD.end());" << std::endl << std::endl;


			std::cout << "      mapE is		" ;
			for ( struct { int i; ft::map<int, int>::iterator itA; } s = {0, mapE.begin()}; s.itA != mapE.end(); s.itA++) {
				if (s.i == 0)
					std::cout << "[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				else
					std::cout << "      			[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				s.i = 1;
			}
			std::cout << "      mapE.size() is	" << mapE.size() << std::endl;
			std::cout << std::endl;


			std::cout << "      mapF is		" ;
			for ( struct { int i; ft::map<int, int>::iterator itA; } s = {0, mapF.begin()}; s.itA != mapF.end(); s.itA++) {
				if (s.i == 0)
					std::cout << "[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				else
					std::cout << "      			[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				s.i = 1;
			}
			std::cout << "      mapF.size() is	" << mapF.size() << std::endl;
			std::cout << std::endl;


			std::cout << "      mapG is		" ;
			for ( struct { int i; ft::map<int, int>::iterator itA; } s = {0, mapG.begin()}; s.itA != mapG.end(); s.itA++) {
				if (s.i == 0)
					std::cout << "[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				else
					std::cout << "      			[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				s.i = 1;
			}
			std::cout << "      mapG.size() is	" << mapG.size() << std::endl;
			std::cout << std::endl;


			std::cout << "      mapH is		\n" ;
			for ( struct { int i; ft::map<int, int>::iterator itA; } s = {0, mapH.begin()}; s.itA != mapH.end(); s.itA++) {
				if (s.i == 0)
					std::cout << "[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				else
					std::cout << "      			[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				s.i = 1;
			}
			std::cout << "      mapH.size() is	" << mapH.size() << std::endl;
			std::cout << std::endl;

	ft::map<int, int> mapI(mapA.rbegin(), mapA.rend());
	ft::map<int, int> mapJ(mapB.rbegin(), mapB.rend());
	ft::map<int, int> mapK(mapC.rbegin(), mapC.rend());
	ft::map<int, int> mapL(mapD.rbegin(), mapD.rend());

			std::cout << "  map<int, int> mapI(mapA.rbegin(), mapA.rend());" << std::endl;
			std::cout << "  map<int, int> mapJ(mapB.rbegin(), mapB.rend());" << std::endl;
			std::cout << "  map<int, int> mapK(mapC.rbegin(), mapC.rend());" << std::endl;
			std::cout << "  map<int, int> mapL(mapD.rbegin(), mapD.rend());" << std::endl << std::endl;


			std::cout << "      mapI is		" ;
			for ( struct { int i; ft::map<int, int>::iterator itA; } s = {0, mapI.begin()}; s.itA != mapI.end(); s.itA++) {
				if (s.i == 0)
					std::cout << "[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				else
					std::cout << "      			[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				s.i = 1;
			}
			std::cout << "      mapI.size() is	" << mapI.size() << std::endl;
			std::cout << std::endl;


			std::cout << "      mapJ is		" ;
			for ( struct { int i; ft::map<int, int>::iterator itA; } s = {0, mapJ.begin()}; s.itA != mapJ.end(); s.itA++) {
				if (s.i == 0)
					std::cout << "[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				else
					std::cout << "      			[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				s.i = 1;
			}
			std::cout << "      mapJ.size() is	" << mapJ.size() << std::endl;
			std::cout << std::endl;


			std::cout << "      mapK is		" ;
			for ( struct { int i; ft::map<int, int>::iterator itA; } s = {0, mapK.begin()}; s.itA != mapK.end(); s.itA++) {
				if (s.i == 0)
					std::cout << "[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				else
					std::cout << "      			[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				s.i = 1;
			}
			std::cout << "      mapK.size() is	" << mapK.size() << std::endl;
			std::cout << std::endl;


			std::cout << "      mapL is		\n" ;
			for ( struct { int i; ft::map<int, int>::iterator itA; } s = {0, mapL.begin()}; s.itA != mapL.end(); s.itA++) {
				if (s.i == 0)
					std::cout << "[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				else
					std::cout << "      			[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				s.i = 1;
			}
			std::cout << "      mapL.size() is	" << mapL.size() << std::endl;
			std::cout << std::endl;

}
void	testMap::member_functions__copy_constructor() {
			std::cout << "Copy Constructor:" << std::endl << std::endl;

	ft::map<int, int> mapA;
	ft::map<int, int> mapB;
	ft::map<int, int> mapC;

			std::cout << "  map<int, int> mapA;" << std::endl;
			std::cout << "  map<int, int> mapB;" << std::endl;
			std::cout << "  map<int, int> mapC;" << std::endl << std::endl;

	mapA.insert(ft::pair<int, int>(1, 1));
	mapA.insert(ft::pair<int, int>(2, 1));
	mapA.insert(ft::pair<int, int>(3, 1));
	mapA.insert(ft::pair<int, int>(4, 1));

	mapB.insert(ft::pair<int, int>(4, 1));
	mapB.insert(ft::pair<int, int>(5, 1));
	mapB.insert(ft::pair<int, int>(6, 1));
	mapB.insert(ft::pair<int, int>(6, 1));
	mapB.insert(ft::pair<int, int>(7, 1));
	mapB.insert(ft::pair<int, int>(8, 1));

			std::cout << "  mapA.insert(ft::pair<int, int>(1, 1));" << std::endl;
			std::cout << "  mapA.insert(ft::pair<int, int>(2, 1));" << std::endl;
			std::cout << "  mapA.insert(ft::pair<int, int>(3, 1));" << std::endl;
			std::cout << "  mapA.insert(ft::pair<int, int>(4, 1));" << std::endl << std::endl;

			std::cout << "  mapB.insert(ft::pair<int, int>(4, 1));" << std::endl;
			std::cout << "  mapB.insert(ft::pair<int, int>(5, 1));" << std::endl;
			std::cout << "  mapB.insert(ft::pair<int, int>(6, 1));" << std::endl;
			std::cout << "  mapB.insert(ft::pair<int, int>(6, 1));" << std::endl;
			std::cout << "  mapB.insert(ft::pair<int, int>(7, 1));" << std::endl;
			std::cout << "  mapB.insert(ft::pair<int, int>(8, 1));" << std::endl << std::endl;

	ft::map<int, int> mapD = mapA;
	ft::map<int, int> mapE = mapD;
	ft::map<int, int> mapF = mapB;
	ft::map<int, int> mapG = mapC;

			std::cout << "  map<int, int> mapD = mapA;" << std::endl;
			std::cout << "  map<int, int> mapE = mapD;" << std::endl;
			std::cout << "  map<int, int> mapF = mapB;" << std::endl;
			std::cout << "  map<int, int> mapG = mapC;" << std::endl << std::endl;

	mapD.insert(ft::pair<int, int>(-6, 1));
	mapD.insert(ft::pair<int, int>(-7, 1));
	mapD.insert(ft::pair<int, int>(-8, 1));

			std::cout << "  mapD.insert(ft::pair<int, int>(-6, 1));" << std::endl;
			std::cout << "  mapD.insert(ft::pair<int, int>(-7, 1));" << std::endl;
			std::cout << "  mapD.insert(ft::pair<int, int>(-8, 1));" << std::endl << std::endl;


			std::cout << "      mapA is		" ;
			for ( struct { int i; ft::map<int, int>::iterator itA; } s = {0, mapA.begin()}; s.itA != mapA.end(); s.itA++) {
				if (s.i == 0)
					std::cout << "[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				else
					std::cout << "      			[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				s.i = 1;
			}
			std::cout << "      mapA.size() is	" << mapA.size() << std::endl;
			std::cout << std::endl;


			std::cout << "      mapB is		" ;
			for ( struct { int i; ft::map<int, int>::iterator itA; } s = {0, mapB.begin()}; s.itA != mapB.end(); s.itA++) {
				if (s.i == 0)
					std::cout << "[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				else
					std::cout << "      			[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				s.i = 1;
			}
			std::cout << "      mapB.size() is	" << mapB.size() << std::endl;
			std::cout << std::endl;


			std::cout << "      mapC is		\n" ;
			for ( struct { int i; ft::map<int, int>::iterator itA; } s = {0, mapC.begin()}; s.itA != mapC.end(); s.itA++) {
				if (s.i == 0)
					std::cout << "[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				else
					std::cout << "      			[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				s.i = 1;
			}
			std::cout << "      mapC.size() is	" << mapC.size() << std::endl;
			std::cout << std::endl;


			std::cout << "      mapD is		" ;
			for ( struct { int i; ft::map<int, int>::iterator itA; } s = {0, mapD.begin()}; s.itA != mapD.end(); s.itA++) {
				if (s.i == 0)
					std::cout << "[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				else
					std::cout << "      			[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				s.i = 1;
			}
			std::cout << "      mapD.size() is	" << mapD.size() << std::endl;
			std::cout << std::endl;


			std::cout << "      mapE is		" ;
			for ( struct { int i; ft::map<int, int>::iterator itA; } s = {0, mapE.begin()}; s.itA != mapE.end(); s.itA++) {
				if (s.i == 0)
					std::cout << "[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				else
					std::cout << "      			[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				s.i = 1;
			}
			std::cout << "      mapE.size() is	" << mapE.size() << std::endl;
			std::cout << std::endl;


			std::cout << "      mapF is		" ;
			for ( struct { int i; ft::map<int, int>::iterator itA; } s = {0, mapF.begin()}; s.itA != mapF.end(); s.itA++) {
				if (s.i == 0)
					std::cout << "[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				else
					std::cout << "      			[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				s.i = 1;
			}
			std::cout << "      mapF.size() is	" << mapF.size() << std::endl;
			std::cout << std::endl;


			std::cout << "      mapG is		\n" ;
			for ( struct { int i; ft::map<int, int>::iterator itA; } s = {0, mapG.begin()}; s.itA != mapG.end(); s.itA++) {
				if (s.i == 0)
					std::cout << "[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				else
					std::cout << "      			[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				s.i = 1;
			}
			std::cout << "      mapG.size() is	" << mapG.size() << std::endl;
			std::cout << std::endl;
}
void	testMap::member_functions__destructor() {
			std::cout << "Destructor:" << std::endl << std::endl;

	ft::map<int, int> mapA;
	ft::map<int, int> mapB;
	ft::map<int, int> mapC;
	ft::map<int, int> mapD;
	ft::map<int, int> mapE;
	ft::map<int, int> mapF;
	ft::map<int, int> mapG;
	ft::map<int, int> mapH;

			std::cout << "  map<int, int> mapA;" << std::endl;
			std::cout << "  map<int, int> mapB;" << std::endl;
			std::cout << "  map<int, int> mapC;" << std::endl;
			std::cout << "  map<int, int> mapD;" << std::endl;
			std::cout << "  map<int, int> mapE;" << std::endl;
			std::cout << "  map<int, int> mapF;" << std::endl;
			std::cout << "  map<int, int> mapG;" << std::endl;
			std::cout << "  map<int, int> mapH;" << std::endl << std::endl;

	mapA.insert(ft::pair<int, int>(1, 1));
	mapA.insert(ft::pair<int, int>(2, 1));
	mapA.insert(ft::pair<int, int>(3, 1));
	mapA.insert(ft::pair<int, int>(4, 1));

	mapB.insert(ft::pair<int, int>(4, 1));
	mapB.insert(ft::pair<int, int>(5, 1));
	mapB.insert(ft::pair<int, int>(6, 1));
	mapB.insert(ft::pair<int, int>(6, 1));
	mapB.insert(ft::pair<int, int>(7, 1));
	mapB.insert(ft::pair<int, int>(8, 1));

	mapF.insert(ft::pair<int, int>(0, 0));

	mapG.insert(ft::pair<int, int>(4, 1));

	mapH.insert(ft::pair<int, int>(411, 1));
	mapH.insert(ft::pair<int, int>(412, 1));

			std::cout << "  mapA.insert(ft::pair<int, int>(1, 1));" << std::endl;
			std::cout << "  mapA.insert(ft::pair<int, int>(2, 1));" << std::endl;
			std::cout << "  mapA.insert(ft::pair<int, int>(3, 1));" << std::endl;
			std::cout << "  mapA.insert(ft::pair<int, int>(4, 1));" << std::endl << std::endl;

			std::cout << "  mapB.insert(ft::pair<int, int>(4, 1));" << std::endl;
			std::cout << "  mapB.insert(ft::pair<int, int>(5, 1));" << std::endl;
			std::cout << "  mapB.insert(ft::pair<int, int>(6, 1));" << std::endl;
			std::cout << "  mapB.insert(ft::pair<int, int>(6, 1));" << std::endl;
			std::cout << "  mapB.insert(ft::pair<int, int>(7, 1));" << std::endl;
			std::cout << "  mapB.insert(ft::pair<int, int>(8, 1));" << std::endl << std::endl;

			std::cout << "  mapF.insert(ft::pair<int, int>(0, 0));" << std::endl << std::endl;

			std::cout << "  mapG.insert(ft::pair<int, int>(4, 1));" << std::endl << std::endl;

			std::cout << "  mapH.insert(ft::pair<int, int>(411, 1));" << std::endl;
			std::cout << "  mapH.insert(ft::pair<int, int>(412, 1));" << std::endl << std::endl;
}
void	testMap::member_functions__operator_equal() {
			std::cout << "Operator =:" << std::endl << std::endl;

	ft::map<int, int> mapA;
	ft::map<int, int> mapB;
	ft::map<int, int> mapC;
	ft::map<int, int> mapD;
	ft::map<int, int> mapE;
	ft::map<int, int> mapF;
	ft::map<int, int> mapG;
	ft::map<int, int> mapH;

			std::cout << "  map<int, int> mapA;" << std::endl;
			std::cout << "  map<int, int> mapB;" << std::endl;
			std::cout << "  map<int, int> mapC;" << std::endl;
			std::cout << "  map<int, int> mapD;" << std::endl;
			std::cout << "  map<int, int> mapE;" << std::endl;
			std::cout << "  map<int, int> mapF;" << std::endl;
			std::cout << "  map<int, int> mapG;" << std::endl;
			std::cout << "  map<int, int> mapH;" << std::endl << std::endl;

	mapA.insert(ft::pair<int, int>(1, 1));
	mapA.insert(ft::pair<int, int>(2, 1));
	mapA.insert(ft::pair<int, int>(3, 1));
	mapA.insert(ft::pair<int, int>(4, 1));

	mapB.insert(ft::pair<int, int>(4, 1));
	mapB.insert(ft::pair<int, int>(5, 1));
	mapB.insert(ft::pair<int, int>(6, 1));
	mapB.insert(ft::pair<int, int>(6, 1));
	mapB.insert(ft::pair<int, int>(7, 1));
	mapB.insert(ft::pair<int, int>(8, 1));

	mapF.insert(ft::pair<int, int>(0, 0));

	mapG.insert(ft::pair<int, int>(4, 1));

	mapH.insert(ft::pair<int, int>(411, 1));
	mapH.insert(ft::pair<int, int>(412, 1));

			std::cout << "  mapA.insert(ft::pair<int, int>(1, 1));" << std::endl;
			std::cout << "  mapA.insert(ft::pair<int, int>(2, 1));" << std::endl;
			std::cout << "  mapA.insert(ft::pair<int, int>(3, 1));" << std::endl;
			std::cout << "  mapA.insert(ft::pair<int, int>(4, 1));" << std::endl << std::endl;

			std::cout << "  mapB.insert(ft::pair<int, int>(4, 1));" << std::endl;
			std::cout << "  mapB.insert(ft::pair<int, int>(5, 1));" << std::endl;
			std::cout << "  mapB.insert(ft::pair<int, int>(6, 1));" << std::endl;
			std::cout << "  mapB.insert(ft::pair<int, int>(6, 1));" << std::endl;
			std::cout << "  mapB.insert(ft::pair<int, int>(7, 1));" << std::endl;
			std::cout << "  mapB.insert(ft::pair<int, int>(8, 1));" << std::endl << std::endl;

			std::cout << "  mapF.insert(ft::pair<int, int>(0, 0));" << std::endl << std::endl;

			std::cout << "  mapG.insert(ft::pair<int, int>(4, 1));" << std::endl << std::endl;

			std::cout << "  mapH.insert(ft::pair<int, int>(411, 1));" << std::endl;
			std::cout << "  mapH.insert(ft::pair<int, int>(412, 1));" << std::endl << std::endl;


			std::cout << "      mapA is		" ;
			for ( struct { int i; ft::map<int, int>::iterator itA; } s = {0, mapA.begin()}; s.itA != mapA.end(); s.itA++) {
				if (s.i == 0)
					std::cout << "[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				else
					std::cout << "      			[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				s.i = 1;
			}
			std::cout << "      mapA.size() is	" << mapA.size() << std::endl;
			std::cout << std::endl;


			std::cout << "      mapB is		" ;
			for ( struct { int i; ft::map<int, int>::iterator itA; } s = {0, mapB.begin()}; s.itA != mapB.end(); s.itA++) {
				if (s.i == 0)
					std::cout << "[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				else
					std::cout << "      			[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				s.i = 1;
			}
			std::cout << "      mapB.size() is	" << mapB.size() << std::endl;
			std::cout << std::endl;


			std::cout << "      mapC is		\n" ;
			for ( struct { int i; ft::map<int, int>::iterator itA; } s = {0, mapC.begin()}; s.itA != mapC.end(); s.itA++) {
				if (s.i == 0)
					std::cout << "[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				else
					std::cout << "      			[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				s.i = 1;
			}
			std::cout << "      mapC.size() is	" << mapC.size() << std::endl;
			std::cout << std::endl;


			std::cout << "      mapD is		\n" ;
			for ( struct { int i; ft::map<int, int>::iterator itA; } s = {0, mapD.begin()}; s.itA != mapD.end(); s.itA++) {
				if (s.i == 0)
					std::cout << "[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				else
					std::cout << "      			[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				s.i = 1;
			}
			std::cout << "      mapD.size() is	" << mapD.size() << std::endl;
			std::cout << std::endl;


			std::cout << "      mapE is		\n" ;
			for ( struct { int i; ft::map<int, int>::iterator itA; } s = {0, mapE.begin()}; s.itA != mapE.end(); s.itA++) {
				if (s.i == 0)
					std::cout << "[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				else
					std::cout << "      			[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				s.i = 1;
			}
			std::cout << "      mapE.size() is	" << mapE.size() << std::endl;
			std::cout << std::endl;


			std::cout << "      mapF is		" ;
			for ( struct { int i; ft::map<int, int>::iterator itA; } s = {0, mapF.begin()}; s.itA != mapF.end(); s.itA++) {
				if (s.i == 0)
					std::cout << "[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				else
					std::cout << "      			[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				s.i = 1;
			}
			std::cout << "      mapF.size() is	" << mapF.size() << std::endl;
			std::cout << std::endl;


			std::cout << "      mapG is		" ;
			for ( struct { int i; ft::map<int, int>::iterator itA; } s = {0, mapG.begin()}; s.itA != mapG.end(); s.itA++) {
				if (s.i == 0)
					std::cout << "[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				else
					std::cout << "      			[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				s.i = 1;
			}
			std::cout << "      mapG.size() is	" << mapG.size() << std::endl;
			std::cout << std::endl;


			std::cout << "      mapH is		" ;
			for ( struct { int i; ft::map<int, int>::iterator itA; } s = {0, mapH.begin()}; s.itA != mapH.end(); s.itA++) {
				if (s.i == 0)
					std::cout << "[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				else
					std::cout << "      			[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				s.i = 1;
			}
			std::cout << "      mapH.size() is	" << mapH.size() << std::endl;
			std::cout << std::endl;


	mapA = mapD;
	mapE = mapB;
	mapC = mapE;
	mapD = mapA;
	mapH = mapF;
	mapF = mapG;

			std::cout << "  mapA = mapD;" << std::endl;
			std::cout << "  mapE = mapB;" << std::endl;
			std::cout << "  mapC = mapE;" << std::endl;
			std::cout << "  mapD = mapA;" << std::endl;
			std::cout << "  mapH = mapF;" << std::endl;
			std::cout << "  mapF = mapG;" << std::endl << std::endl;


			std::cout << "      mapA is		\n" ;
			for ( struct { int i; ft::map<int, int>::iterator itA; } s = {0, mapA.begin()}; s.itA != mapA.end(); s.itA++) {
				if (s.i == 0)
					std::cout << "[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				else
					std::cout << "      			[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				s.i = 1;
			}
			std::cout << "      mapA.size() is	" << mapA.size() << std::endl;
			std::cout << std::endl;


			std::cout << "      mapB is		" ;
			for ( struct { int i; ft::map<int, int>::iterator itA; } s = {0, mapB.begin()}; s.itA != mapB.end(); s.itA++) {
				if (s.i == 0)
					std::cout << "[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				else
					std::cout << "      			[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				s.i = 1;
			}
			std::cout << "      mapB.size() is	" << mapB.size() << std::endl;
			std::cout << std::endl;


			std::cout << "      mapC is		" ;
			for ( struct { int i; ft::map<int, int>::iterator itA; } s = {0, mapC.begin()}; s.itA != mapC.end(); s.itA++) {
				if (s.i == 0)
					std::cout << "[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				else
					std::cout << "      			[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				s.i = 1;
			}
			std::cout << "      mapC.size() is	" << mapC.size() << std::endl;
			std::cout << std::endl;


			std::cout << "      mapD is		\n" ;
			for ( struct { int i; ft::map<int, int>::iterator itA; } s = {0, mapD.begin()}; s.itA != mapD.end(); s.itA++) {
				if (s.i == 0)
					std::cout << "[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				else
					std::cout << "      			[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				s.i = 1;
			}
			std::cout << "      mapD.size() is	" << mapD.size() << std::endl;
			std::cout << std::endl;


			std::cout << "      mapE is		" ;
			for ( struct { int i; ft::map<int, int>::iterator itA; } s = {0, mapE.begin()}; s.itA != mapE.end(); s.itA++) {
				if (s.i == 0)
					std::cout << "[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				else
					std::cout << "      			[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				s.i = 1;
			}
			std::cout << "      mapE.size() is	" << mapE.size() << std::endl;
			std::cout << std::endl;


			std::cout << "      mapF is		" ;
			for ( struct { int i; ft::map<int, int>::iterator itA; } s = {0, mapF.begin()}; s.itA != mapF.end(); s.itA++) {
				if (s.i == 0)
					std::cout << "[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				else
					std::cout << "      			[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				s.i = 1;
			}
			std::cout << "      mapF.size() is	" << mapF.size() << std::endl;
			std::cout << std::endl;


			std::cout << "      mapG is		" ;
			for ( struct { int i; ft::map<int, int>::iterator itA; } s = {0, mapG.begin()}; s.itA != mapG.end(); s.itA++) {
				if (s.i == 0)
					std::cout << "[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				else
					std::cout << "      			[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				s.i = 1;
			}
			std::cout << "      mapG.size() is	" << mapG.size() << std::endl;
			std::cout << std::endl;


			std::cout << "      mapH is		" ;
			for ( struct { int i; ft::map<int, int>::iterator itA; } s = {0, mapH.begin()}; s.itA != mapH.end(); s.itA++) {
				if (s.i == 0)
					std::cout << "[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				else
					std::cout << "      			[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				s.i = 1;
			}
			std::cout << "      mapH.size() is	" << mapH.size() << std::endl;
			std::cout << std::endl;

}
void	testMap::member_functions__iterator__begin() {
			std::cout << "Iterators - begin():" << std::endl << std::endl;

	ft::map<std::string, float> 	mapA;
	ft::map<float, float>			mapB;

			std::cout << "  map<std::string, float> 	mapA;" << std::endl;
			std::cout << "  map<float, float>		mapB;" << std::endl << std::endl;

	mapA.insert(ft::pair<std::string, float>("Olah", 1));
	mapA.insert(ft::pair<std::string, float>("Hello", 2));
	mapA.insert(ft::pair<std::string, float>("Gutten Tag", 3));

	mapB.insert(ft::pair<float, float>(1, 1));

			std::cout << "  mapA.insert(ft::pair<std::string, float>(\"Olah\", 1));" << std::endl;
			std::cout << "  mapA.insert(ft::pair<std::string, float>(\"Hello\", 2));" << std::endl;
			std::cout << "  mapA.insert(ft::pair<std::string, float>(\"Gutten Tag\", 3));" << std::endl << std::endl;

			std::cout << "  mapB.insert(ft::pair<float, float>(1, 1));" << std::endl << std::endl;


	ft::map<std::string, float>::iterator itA = mapA.begin();
	ft::map<float, float>::iterator itB = mapB.begin();

			std::cout << "  map<std::string, float>::iterator itA = mapA.begin();" << std::endl;
			std::cout << "  map<float, float>::iterator itB = mapB.begin();" << std::endl << std::endl;

			std::cout << "      itA.first and itA.second is [" << itA->first
					  << ", " << itA->second << "]" << std::endl;

			std::cout << "      itB.first and itB.second is [" << itB->first
					  << ", " << itB->second << "]" << std::endl;
}
void	testMap::member_functions__iterator__end() {
			std::cout << "Iterators - end():" << std::endl << std::endl;

	ft::map<std::string, float> 	mapA;
	ft::map<float, float>			mapB;

			std::cout << "  map<std::string, float> 	mapA;" << std::endl;
			std::cout << "  map<float, float>		mapB;" << std::endl << std::endl;

	mapA.insert(ft::pair<std::string, float>("Olah", 1));
	mapA.insert(ft::pair<std::string, float>("Hello", 2));
	mapA.insert(ft::pair<std::string, float>("Gutten Tag", 3));

	mapB.insert(ft::pair<float, float>(1, 1));

			std::cout << "  mapA.insert(ft::pair<std::string, float>(\"Olah\", 1));" << std::endl;
			std::cout << "  mapA.insert(ft::pair<std::string, float>(\"Hello\", 2));" << std::endl;
			std::cout << "  mapA.insert(ft::pair<std::string, float>(\"Gutten Tag\", 3));" << std::endl << std::endl;

			std::cout << "  mapB.insert(ft::pair<float, float>(1, 1));" << std::endl << std::endl;



	ft::map<std::string, float>::iterator itA = mapA.end();
	ft::map<float, float>::iterator itB = mapB.end();

	itA--;
	itB--;

			std::cout << "  vector<std::string>::iterator itA = vectorA.end();" << std::endl;
			std::cout << "  vector<float>::iterator itB = vectorB.end();" << std::endl << std::endl;

			std::cout << "  itA--;" << std::endl;
			std::cout << "  itB--;" << std::endl << std::endl;

			std::cout << "      itA.first and itA.second is [" << itA->first
					  << ", " << itA->second << "]" << std::endl;

			std::cout << "      itB.first and itB.second is [" << itB->first
					  << ", " << itB->second << "]" << std::endl << std::endl;


	mapA.insert(ft::pair<std::string, float>("GASDASD", 4));
	mapB.insert(ft::pair<float, float>(2, 2));

			std::cout << "  mapA.insert(ft::pair<std::string, float>(\"GASDASD\", 4));" << std::endl;
			std::cout << "  mapB.insert(ft::pair<float, float>(2, 2));" << std::endl << std::endl;

			std::cout << "      itA.first and itA.second is [" << itA->first
					  << ", " << itA->second << "]" << std::endl;

			std::cout << "      itB.first and itB.second is [" << itB->first
					  << ", " << itB->second << "]" << std::endl << std::endl;


	mapA.insert(ft::pair<std::string, float>("Byba", 5));


		std::cout << "  mapA.insert(ft::pair<std::string, float>(\"Byba\", 5));" << std::endl << std::endl;

			for (ft::map<std::string, float>::iterator itC = mapA.begin();
								itC != mapA.end(); itC++) {
				std::cout << "      itA.first and itA.second is [" << itC->first
							<< ", " << itC->second << "]" << std::endl;
			}


			std::cout << std::endl;

			for (ft::map<float, float>::iterator itC = mapB.begin();
								itC != mapB.end(); itC++) {
				std::cout << "      itB.first and itB.second is [" << itC->first
							<< ", " << itC->second << "]" << std::endl;
			}

}
void	testMap::member_functions__iterator__rbegin() {
			std::cout << "Iterators - rbegin():" << std::endl << std::endl;

	ft::map<std::string, float>		mapA;
	ft::map<float, float>			mapB;

			std::cout << "  map<std::string, float>		mapA;" << std::endl;
			std::cout << "  map<float, float>			mapB;" << std::endl << std::endl;

	mapA.insert(ft::pair<std::string, float>("Olah", 1));
	mapA.insert(ft::pair<std::string, float>("Hello", 2));
	mapA.insert(ft::pair<std::string, float>("Gutten Tag", 3));

	mapB.insert(ft::pair<float, float>(1, 1));

			std::cout << "  mapA.insert(ft::pair<std::string, float>(\"Olah\", 1));" << std::endl;
			std::cout << "  mapA.insert(ft::pair<std::string, float>(\"Hello\", 2));" << std::endl;
			std::cout << "  mapA.insert(ft::pair<std::string, float>(\"Gutten Tag\", 3));" << std::endl << std::endl;

			std::cout << "  mapB.insert(ft::pair<float, float>(1, 1));" << std::endl << std::endl;

	ft::map<std::string, float>::reverse_iterator itA = mapA.rbegin();
	ft::map<float, float>::reverse_iterator itB = mapB.rbegin();

			std::cout << "  map<std::string, float>::reverse_iterator itA = mapA.rbegin();" << std::endl;
			std::cout << "  map<float, float>::reverse_iterator itB = mapB.rbegin();" << std::endl << std::endl;

			std::cout << "      itA.first and itA.second is [" << itA->first
					  << ", " << itA->second << "]" << std::endl;

			std::cout << "      itB.first and itB.second is [" << itB->first
					  << ", " << itB->second << "]" << std::endl;
}
void	testMap::member_functions__iterator__rend() {
			std::cout << "Iterators - rend():" << std::endl << std::endl;

	ft::map<std::string, float>		mapA;
	ft::map<float, float>			mapB;

			std::cout << "  map<std::string, float>		mapA;" << std::endl;
			std::cout << "  map<float, float>			mapB;" << std::endl << std::endl;

	mapA.insert(ft::pair<std::string, float>("Olah", 1));
	mapA.insert(ft::pair<std::string, float>("Hello", 2));
	mapA.insert(ft::pair<std::string, float>("Gutten Tag", 3));

	mapB.insert(ft::pair<float, float>(1, 1));

			std::cout << "  mapA.insert(ft::pair<std::string, float>(\"Olah\", 1));" << std::endl;
			std::cout << "  mapA.insert(ft::pair<std::string, float>(\"Hello\", 2));" << std::endl;
			std::cout << "  mapA.insert(ft::pair<std::string, float>(\"Gutten Tag\", 3));" << std::endl << std::endl;

			std::cout << "  mapB.insert(ft::pair<float, float>(1, 1));" << std::endl << std::endl;

	ft::map<std::string, float>::reverse_iterator itA = mapA.rend();
	ft::map<float, float>::reverse_iterator itB = mapB.rend();

	itA--;
	itB--;

			std::cout << "  itA--;" << std::endl;
			std::cout << "  itB--;" << std::endl << std::endl;

			std::cout << "  map<std::string, float>::reverse_iterator itA = mapA.rend();" << std::endl;
			std::cout << "  map<float, float>::reverse_iterator itB = mapB.rend();" << std::endl << std::endl;

			std::cout << "      itA.first and itA.second is [" << itA->first
					  << ", " << itA->second << "]" << std::endl;

			std::cout << "      itB.first and itB.second is [" << itB->first
					  << ", " << itB->second << "]" << std::endl << std::endl;

	itA--;

			std::cout << "  itA--;" << std::endl << std::endl;

			std::cout << "      itA.first and itA.second is [" << itA->first
					  << ", " << itA->second << "]" << std::endl;
}
void	testMap::member_functions__capacity__size() {
			std::cout << "Capacity - size():" << std::endl << std::endl;

	ft::map<int, int>				mapA;
	ft::map<float, int>				mapB;
	ft::map<float, double>			mapC;

			std::cout << "  map<int, int>				mapA;" << std::endl;
			std::cout << "  map<float, int>			mapB;" << std::endl;
			std::cout << "  map<float, double>			mapC;" << std::endl << std::endl;

	mapA.insert(ft::pair<int, int>(10, 20));
	mapC.insert(ft::pair<float, double>(1.5, 21.0));

			std::cout << "  mapA.insert(ft::pair<int, int>(10, 20));" << std::endl;
			std::cout << "  mapC.insert(ft::pair<float, double>(1.5, 21.0));" << std::endl << std::endl;

			std::cout << "      mapA.size() is		" << mapA.size() << std::endl;
			std::cout << "      mapB.size() is		" << mapB.size() << std::endl;
			std::cout << "      mapC.size() is		" << mapC.size() << std::endl << std::endl;

	mapA.insert(ft::pair<int, int>(11, 20));

	mapB.insert(ft::pair<float, int>(1.6, 20));
	mapB.insert(ft::pair<float, int>(1.7, 20));

	mapC.insert(ft::pair<float, double>(1.7, 21.0));
	mapC.insert(ft::pair<float, double>(1.7, 21.0));
	mapC.insert(ft::pair<float, double>(1.7, 21.0));
	mapC.insert(ft::pair<float, double>(1.7, 21.0));

			std::cout << "  mapA.insert(ft::pair<int, int>(11, 20));" << std::endl << std::endl;

			std::cout << "  mapB.insert(ft::pair<float, int>(1.6, 20));" << std::endl;
			std::cout << "  mapB.insert(ft::pair<float, int>(1.7, 20));" << std::endl << std::endl;

			std::cout << "  mapC.insert(ft::pair<float, double>(1.7, 21.0));" << std::endl;
			std::cout << "  mapC.insert(ft::pair<float, double>(1.7, 21.0));" << std::endl;
			std::cout << "  mapC.insert(ft::pair<float, double>(1.7, 21.0));" << std::endl;
			std::cout << "  mapC.insert(ft::pair<float, double>(1.7, 21.0));" << std::endl << std::endl;

			std::cout << "      mapA.size() is	" << mapA.size() << std::endl;
			std::cout << "      mapB.size() is	" << mapB.size() << std::endl;
			std::cout << "      mapC.size() is	" << mapC.size() << std::endl << std::endl;
}
void	testMap::member_functions__capacity__max_size() {
			std::cout << "Capacity - max_size():" << std::endl << std::endl;

	ft::map<std::string, std::string>		mapA;
	ft::map<std::string, int>				mapB;
	ft::map<float, double>					mapC;

			std::cout << "  map<std::string, std::string>		mapA;" << std::endl;
			std::cout << "  map<std::string, int>			mapB;" << std::endl;
			std::cout << "  map<float, double>			mapC;" << std::endl << std::endl;

	mapA.insert(ft::pair<std::string, std::string>("Mekie Sócieee", "Tao mano"));
	mapB.insert(ft::pair<std::string, int>("Olahh", 20));
	mapC.insert(ft::pair<float, double>(1.5, 21.0));

			std::cout << "  mapA.insert(ft::pair<std::string, std::string>(\"Mekie Sócieee\", \"Tao mano\"));" << std::endl;
			std::cout << "  mapB.insert(ft::pair<std::string, int>(\"Olahh\", 20));" << std::endl;
			std::cout << "  mapC.insert(ft::pair<float, double>(1.5, 21.0));" << std::endl << std::endl;

			std::cout << "      mapA.max_size() is	" << mapA.max_size() << std::endl;
			std::cout << "      mapB.max_size() is	" << mapB.max_size() << std::endl;
			std::cout << "      mapC.max_size() is	" << mapC.max_size() << std::endl;
			std::cout << std::endl;
}
void	testMap::member_functions__capacity__empty() {
			std::cout << "Capacity - empty():" << std::endl << std::endl;

	ft::map<std::string, int> mapA;
	ft::map<int, int> mapB;
	ft::map<int, float> mapC;
	ft::map<double, char> mapD;
	ft::map<std::string, std::string> mapE;

			std::cout << "  map<std::string, int> mapA;" << std::endl << std::endl;
			std::cout << "  map<int, int> mapB;" << std::endl;
			std::cout << "  map<int, float> mapC;" << std::endl;
			std::cout << "  map<double, char> mapD;" << std::endl;
			std::cout << "  map<std::string, std::string> mapE;" << std::endl << std::endl;

	mapA.insert(ft::pair<std::string, int>("Hello", 10));
	mapC.insert(ft::pair<int, float>(10, 12.5));
	mapE.insert(ft::pair<std::string, std::string>("Hello", "Haih"));

			std::cout << "  mapA.insert(ft::pair<std::string, int>(\"Hello\", 10));" << std::endl;
			std::cout << "  mapC.insert(ft::pair<int, float>(10, 12.5));" << std::endl;
			std::cout << "  mapE.insert(ft::pair<std::string, std::string>(\"Hello\", \"Haih\"));" << std::endl << std::endl;

			std::cout << "      mapA.size() is		" << mapA.size() << std::endl;
			std::cout << "      mapB.size() is		" << mapB.size() << std::endl;
			std::cout << "      mapC.size() is		" << mapC.size() << std::endl;
			std::cout << "      mapD.size() is		" << mapD.size() << std::endl;
			std::cout << "      mapE.size() is		" << mapE.size() << std::endl << std::endl;

			std::cout << "      mapA.empty() is	" << mapA.empty() << std::endl;
			std::cout << "      mapB.empty() is	" << mapB.empty() << std::endl;
			std::cout << "      mapC.empty() is	" << mapC.empty() << std::endl;
			std::cout << "      mapD.empty() is	" << mapD.empty() << std::endl;
			std::cout << "      mapE.empty() is	" << mapE.empty() << std::endl << std::endl;
}
// void	testMap::member_functions__element__operator_at_position() {
// 			std::cout << "Capacity - operator[]:" << std::endl << std::endl;

// 	ft::vector<int> vectorA;

// 			std::cout << "  vector<int> vectorA;" << std::endl << std::endl;

// 	vectorA.push_back(5);
// 	vectorA.push_back(10);
// 	vectorA.push_back(15);
// 	vectorA.push_back(20);
// 	vectorA.push_back(25);

// 			std::cout << "  vectorA.push_back(5);" << std::endl;
// 			std::cout << "  vectorA.push_back(10);" << std::endl;
// 			std::cout << "  vectorA.push_back(15);" << std::endl;
// 			std::cout << "  vectorA.push_back(20);" << std::endl;
// 			std::cout << "  vectorA.push_back(25);" << std::endl << std::endl;

// 	ft::vector<int>::reference ref0(vectorA[0]);
// 	ft::vector<int>::const_reference ref1(vectorA[1]);
// 	ft::vector<int>::const_reference ref2(vectorA[2]);
// 	ft::vector<int>::reference ref3(vectorA[3]);
// 	ft::vector<int>::reference ref4(vectorA[4]);
// 	ft::vector<int>::const_reference ref5(vectorA[5]);
// 	ft::vector<int>::const_reference ref6(vectorA[-123]);

// 			std::cout << "  vector<int>::reference	ref0(vectorA[0]);" << std::endl;
// 			std::cout << "  vector<int>::const_reference	ref1(vectorA[1]);" << std::endl;
// 			std::cout << "  vector<int>::const_reference	ref2(vectorA[2]);" << std::endl;
// 			std::cout << "  vector<int>::reference	ref3(vectorA[3]);" << std::endl;
// 			std::cout << "  vector<int>::reference	ref4(vectorA[4]);" << std::endl;
// 			std::cout << "  vector<int>::const_reference	ref5(vectorA[5]);" << std::endl;
// 			std::cout << "  vector<int>::const_reference	ref6(vectorA[-123]);" << std::endl << std::endl;

// 			std::cout << "      ref0 is	" << ref0 << std::endl;
// 			std::cout << "      ref1 is	" << ref1 << std::endl;
// 			std::cout << "      ref2 is	" << ref2 << std::endl;
// 			std::cout << "      ref3 is	" << ref3 << std::endl;
// 			std::cout << "      ref4 is	" << ref4 << std::endl;
// 			std::cout << "      ref5 is	" << ref5 << std::endl;
// 			std::cout << "      ref6 is	" << ref6 << std::endl << std::endl;
// }
void	testMap::member_functions__modifiers__insert_single_element() {
			std::cout << "Modifiers - insert():" << std::endl << std::endl;
			std::cout << "Single element:" << std::endl << std::endl;

	typedef ft::map<int, int>::iterator it;
	ft::pair<it, bool> ret;

	ft::map<int, int> mapA;
	ft::map<int, int> mapB;
	ft::map<int, int> mapC;

			std::cout << "  typedef ft::map<int, int>::iterator it;" << std::endl;
			std::cout << "  ft::pair<it, bool> ret;" << std::endl << std::endl;

			std::cout << "  map<int, int> mapA;" << std::endl;
			std::cout << "  map<int, int> mapB;" << std::endl;
			std::cout << "  map<int, int> mapC;" << std::endl << std::endl;

	ret = mapA.insert(ft::pair<int, int>(1, 1));

			std::cout << "  ret = mapA.insert(ft::pair<int, int>(1, 1));" << std::endl << std::endl;

			std::cout << "      ret.first->first	" << ret.first->first << std::endl;
			std::cout << "      ret.first->second	" << ret.first->second << std::endl;
			std::cout << std::boolalpha << "      ret.second	" << ret.second << std::endl << std::endl;

	ret = mapB.insert(ft::pair<int, int>(0, 0));

			std::cout << "  ret = mapB.insert(ft::pair<int, int>(0, 0));" << std::endl << std::endl;

			std::cout << "      ret.first->first	" << ret.first->first << std::endl;
			std::cout << "      ret.first->second	" << ret.first->second << std::endl;
			std::cout << std::boolalpha << "      ret.second	" << ret.second << std::endl << std::endl;

	ret = mapB.insert(ft::pair<int, int>(1, 1));

			std::cout << "  ret = mapB.insert(ft::pair<int, int>(1, 1));" << std::endl << std::endl;

			std::cout << "      ret.first->first	" << ret.first->first << std::endl;
			std::cout << "      ret.first->second	" << ret.first->second << std::endl;
			std::cout << std::boolalpha << "      ret.second	" << ret.second << std::endl << std::endl;

	ret = mapB.insert(ft::pair<int, int>(2, 2));

			std::cout << "  ret = mapB.insert(ft::pair<int, int>(2, 2));" << std::endl << std::endl;

			std::cout << "      ret.first->first	" << ret.first->first << std::endl;
			std::cout << "      ret.first->second	" << ret.first->second << std::endl;
			std::cout << std::boolalpha << "      ret.second	" << ret.second << std::endl << std::endl;

	ret = mapC.insert(ft::pair<int, int>(1, 1));

			std::cout << "  ret = mapC.insert(ft::pair<int, int>(1, 1));" << std::endl << std::endl;

			std::cout << "      ret.first->first	" << ret.first->first << std::endl;
			std::cout << "      ret.first->second	" << ret.first->second << std::endl;
			std::cout << std::boolalpha << "      ret.second	" << ret.second << std::endl << std::endl;

	ret = mapC.insert(ft::pair<int, int>(1, 1));

			std::cout << "  ret = mapC.insert(ft::pair<int, int>(1, 1));" << std::endl << std::endl;

			std::cout << "      ret.first->first	" << ret.first->first << std::endl;
			std::cout << "      ret.first->second	" << ret.first->second << std::endl;
			std::cout << std::boolalpha << "      ret.second	" << ret.second << std::endl << std::endl;

	ret = mapC.insert(ft::pair<int, int>(2, 2));

			std::cout << "  ret = mapC.insert(ft::pair<int, int>(2, 2));" << std::endl << std::endl;

			std::cout << "      ret.first->first	" << ret.first->first << std::endl;
			std::cout << "      ret.first->second	" << ret.first->second << std::endl;
			std::cout << std::boolalpha << "      ret.second	" << ret.second << std::endl << std::endl;



			std::cout << "      mapA is		" ;
			for ( struct { int i; ft::map<int, int>::iterator itA; } s = {0, mapA.begin()}; s.itA != mapA.end(); s.itA++) {
				if (s.i == 0)
					std::cout << "[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				else
					std::cout << "      			[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				s.i = 1;
			}
			std::cout << "      mapA.size() is	" << mapA.size() << std::endl;
			std::cout << std::endl;


			std::cout << "      mapB is		" ;
			for ( struct { int i; ft::map<int, int>::iterator itA; } s = {0, mapB.begin()}; s.itA != mapB.end(); s.itA++) {
				if (s.i == 0)
					std::cout << "[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				else
					std::cout << "      			[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				s.i = 1;
			}
			std::cout << "      mapB.size() is	" << mapB.size() << std::endl;
			std::cout << std::endl;


			std::cout << "      mapC is		" ;
			for ( struct { int i; ft::map<int, int>::iterator itA; } s = {0, mapC.begin()}; s.itA != mapC.end(); s.itA++) {
				if (s.i == 0)
					std::cout << "[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				else
					std::cout << "      			[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				s.i = 1;
			}
			std::cout << "      mapC.size() is	" << mapC.size() << std::endl;
			std::cout << std::endl;
}
// void	testMap::member_functions__modifiers__insert_with_hint() {
// 			std::cout << "Modifiers - insert():" << std::endl << std::endl;
// 			std::cout << "With Hint:" << std::endl << std::endl;

// 	ft::vector<int> vectorA;
// 	ft::vector<int> vectorB;
// 	ft::vector<int> vectorC;

// 			std::cout << "  vector<int> vectorA;" << std::endl;
// 			std::cout << "  vector<int> vectorB;" << std::endl;
// 			std::cout << "  vector<int> vectorC;" << std::endl << std::endl;

// 	vectorB.push_back(100);

// 	vectorC.push_back(7);
// 	vectorC.push_back(17);
// 	vectorC.push_back(27);

// 			std::cout << "  vectorB.push_back(100);" << std::endl << std::endl;

// 			std::cout << "  vectorC.push_back(7);" << std::endl;
// 			std::cout << "  vectorC.push_back(17);" << std::endl;
// 			std::cout << "  vectorC.push_back(27);" << std::endl << std::endl;

// 			std::cout << "      vectorA is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
// 			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
// 			std::cout << std::endl;

// 			std::cout << "      vectorB is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorB.begin(); itA != vectorB.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorB.capacity() is	" << vectorB.capacity() << std::endl;
// 			std::cout << "      vectorB.size() is		" << vectorB.size() << std::endl;
// 			std::cout << std::endl;

// 			std::cout << "      vectorC is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorC.begin(); itA != vectorC.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorC.capacity() is	" << vectorC.capacity() << std::endl;
// 			std::cout << "      vectorC.size() is		" << vectorC.size() << std::endl;
// 			std::cout << std::endl;

// 	vectorA.insert(vectorA.begin(), 0, 1);
// 	vectorB.insert(vectorB.begin() + 1, 0, 200);
// 	vectorC.insert(vectorC.begin() + 2, 0, 37);

// 			std::cout << "  vectorA.insert(vectorA.begin(), 0, 1);" << std::endl;
// 			std::cout << "  vectorB.insert(vectorB.begin() + 1, 0, 200);" << std::endl;
// 			std::cout << "  vectorC.insert(vectorC.begin() + 2, 0, 37);" << std::endl << std::endl;

// 			std::cout << "      vectorA is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
// 			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
// 			std::cout << std::endl;

// 			std::cout << "      vectorB is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorB.begin(); itA != vectorB.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorB.capacity() is	" << vectorB.capacity() << std::endl;
// 			std::cout << "      vectorB.size() is		" << vectorB.size() << std::endl;
// 			std::cout << "      vectorB.begin() is	" << *vectorB.begin() << std::endl;
// 			//std::cout << "      vectorB.end() is		" << *vectorB.end() << std::endl;
// 			std::cout << std::endl;

// 			std::cout << "      vectorC is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorC.begin(); itA != vectorC.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorC.capacity() is	" << vectorC.capacity() << std::endl;
// 			std::cout << "      vectorC.size() is		" << vectorC.size() << std::endl;
// 			std::cout << "      vectorC.begin() is	" << *vectorC.begin() << std::endl;
// 			//std::cout << "      vectorC.end() is		" << *vectorC.end() << std::endl;
// 			std::cout << std::endl;

// 	vectorA.insert(vectorA.end(), 5, 2);
// 	vectorB.insert(vectorB.end(), 5, 300);
// 	vectorC.insert(vectorC.end(), 5, 47);

// 			std::cout << "  vectorA.insert(vectorA.end(), 5, 2);" << std::endl;
// 			std::cout << "  vectorB.insert(vectorB.end(), 5, 300);" << std::endl;
// 			std::cout << "  vectorC.insert(vectorC.end(), 5, 47);" << std::endl << std::endl;

// 			std::cout << "      vectorA is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
// 			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
// 			std::cout << "      vectorA.begin() is	" << *vectorA.begin() << std::endl;
// 			//std::cout << "      vectorA.end() is		" << *vectorA.end() << std::endl;
// 			std::cout << std::endl;

// 			std::cout << "      vectorB is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorB.begin(); itA != vectorB.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorB.capacity() is	" << vectorB.capacity() << std::endl;
// 			std::cout << "      vectorB.size() is		" << vectorB.size() << std::endl;
// 			std::cout << "      vectorB.begin() is	" << *vectorB.begin() << std::endl;
// 			//std::cout << "      vectorB.end() is		" << *vectorB.end() << std::endl;
// 			std::cout << std::endl;

// 			std::cout << "      vectorC is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorC.begin(); itA != vectorC.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorC.capacity() is	" << vectorC.capacity() << std::endl;
// 			std::cout << "      vectorC.size() is		" << vectorC.size() << std::endl;
// 			std::cout << "      vectorC.begin() is	" << *vectorC.begin() << std::endl;
// 			//std::cout << "      vectorC.end() is		" << *vectorC.end() << std::endl;
// 			std::cout << std::endl;

// 	vectorA.insert(vectorA.end() - 1, 1, 3);
// 	vectorB.insert(vectorB.end() - 1, 1, 400);
// 	vectorC.insert(vectorC.end() - 1, 1, 57);

// 			std::cout << "  vectorA.insert(vectorA.end() - 1, 1, 3);" << std::endl;
// 			std::cout << "  vectorB.insert(vectorB.end() - 1, 1, 400);" << std::endl;
// 			std::cout << "  vectorC.insert(vectorC.end() - 1, 1, 57);" << std::endl << std::endl;

// 			std::cout << "      vectorA is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
// 			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
// 			std::cout << "      vectorA.begin() is	" << *vectorA.begin() << std::endl;
// 			//std::cout << "      vectorA.end() is		" << *vectorA.end() << std::endl;
// 			std::cout << std::endl;

// 			std::cout << "      vectorB is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorB.begin(); itA != vectorB.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorB.capacity() is	" << vectorB.capacity() << std::endl;
// 			std::cout << "      vectorB.size() is		" << vectorB.size() << std::endl;
// 			std::cout << "      vectorB.begin() is	" << *vectorB.begin() << std::endl;
// 			//std::cout << "      vectorB.end() is		" << *vectorB.end() << std::endl;
// 			std::cout << std::endl;

// 			std::cout << "      vectorC is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorC.begin(); itA != vectorC.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorC.capacity() is	" << vectorC.capacity() << std::endl;
// 			std::cout << "      vectorC.size() is		" << vectorC.size() << std::endl;
// 			std::cout << "      vectorC.begin() is	" << *vectorC.begin() << std::endl;
// 			//std::cout << "      vectorC.end() is		" << *vectorC.end() << std::endl;
// 			std::cout << std::endl;

// 	vectorA.insert(vectorA.end() - 1, 2, 5);
// 	vectorB.insert(vectorB.end() - 1, 2, 500);
// 	vectorC.insert(vectorC.end() - 1, 2, 67);

// 			std::cout << "  vectorA.insert(vectorA.end() - 1, 2, 5);" << std::endl;
// 			std::cout << "  vectorB.insert(vectorB.end() - 1, 2, 500);" << std::endl;
// 			std::cout << "  vectorC.insert(vectorC.end() - 1, 2, 67);" << std::endl << std::endl;

// 			std::cout << "      vectorA is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
// 			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
// 			std::cout << "      vectorA.begin() is	" << *vectorA.begin() << std::endl;
// 			//std::cout << "      vectorA.end() is		" << *vectorA.end() << std::endl;
// 			std::cout << std::endl;

// 			std::cout << "      vectorB is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorB.begin(); itA != vectorB.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorB.capacity() is	" << vectorB.capacity() << std::endl;
// 			std::cout << "      vectorB.size() is		" << vectorB.size() << std::endl;
// 			std::cout << "      vectorB.begin() is	" << *vectorB.begin() << std::endl;
// 			//std::cout << "      vectorB.end() is		" << *vectorB.end() << std::endl;
// 			std::cout << std::endl;

// 			std::cout << "      vectorC is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorC.begin(); itA != vectorC.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorC.capacity() is	" << vectorC.capacity() << std::endl;
// 			std::cout << "      vectorC.size() is		" << vectorC.size() << std::endl;
// 			std::cout << "      vectorC.begin() is	" << *vectorC.begin() << std::endl;
// 			//std::cout << "      vectorC.end() is		" << *vectorC.end() << std::endl;
// 			std::cout << std::endl;


// 	vectorA.erase(vectorA.begin(), vectorA.end() - 2);
// 	vectorB.erase(vectorB.begin(), vectorB.end() - 2);
// 	vectorC.erase(vectorC.begin(), vectorC.end() - 2);

// 			std::cout << "  vectorA.erase(vectorA.begin(), vectorA.end() - 2);" << std::endl;
// 			std::cout << "  vectorB.erase(vectorB.begin(), vectorB.end() - 2);" << std::endl;
// 			std::cout << "  vectorC.erase(vectorC.begin(), vectorC.end() - 2);" << std::endl << std::endl;

// 			std::cout << "      vectorA is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
// 			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
// 			std::cout << "      vectorA.begin() is	" << *vectorA.begin() << std::endl;
// 			//std::cout << "      vectorA.end() is		" << *vectorA.end() << std::endl;
// 			std::cout << std::endl;

// 			std::cout << "      vectorB is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorB.begin(); itA != vectorB.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorB.capacity() is	" << vectorB.capacity() << std::endl;
// 			std::cout << "      vectorB.size() is		" << vectorB.size() << std::endl;
// 			std::cout << "      vectorB.begin() is	" << *vectorB.begin() << std::endl;
// 			//std::cout << "      vectorB.end() is		" << *vectorB.end() << std::endl;
// 			std::cout << std::endl;

// 			std::cout << "      vectorC is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorC.begin(); itA != vectorC.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorC.capacity() is	" << vectorC.capacity() << std::endl;
// 			std::cout << "      vectorC.size() is		" << vectorC.size() << std::endl;
// 			std::cout << "      vectorC.begin() is	" << *vectorC.begin() << std::endl;
// 			//std::cout << "      vectorC.end() is		" << *vectorC.end() << std::endl;
// 			std::cout << std::endl;

// 	vectorA.insert(vectorA.begin(), 10, 1);
// 	vectorB.insert(vectorB.begin(), 10, 4);
// 	vectorC.insert(vectorC.begin(), 10, 3);

// 			std::cout << "  vectorA.insert(vectorA.begin(), 10, 1);" << std::endl;
// 			std::cout << "  vectorB.insert(vectorB.begin(), 10, 4);" << std::endl;
// 			std::cout << "  vectorC.insert(vectorB.begin(), 10, 3);" << std::endl << std::endl;

// 			std::cout << "      vectorA is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
// 			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
// 			std::cout << "      vectorA.begin() is	" << *vectorA.begin() << std::endl;
// 			//std::cout << "      vectorA.end() is		" << *vectorA.end() << std::endl;
// 			std::cout << std::endl;

// 			std::cout << "      vectorB is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorB.begin(); itA != vectorB.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorB.capacity() is	" << vectorB.capacity() << std::endl;
// 			std::cout << "      vectorB.size() is		" << vectorB.size() << std::endl;
// 			std::cout << "      vectorB.begin() is	" << *vectorB.begin() << std::endl;
// 			//std::cout << "      vectorB.end() is		" << *vectorB.end() << std::endl;
// 			std::cout << std::endl;

// 			std::cout << "      vectorC is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorC.begin(); itA != vectorC.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorC.capacity() is	" << vectorC.capacity() << std::endl;
// 			std::cout << "      vectorC.size() is		" << vectorC.size() << std::endl;
// 			std::cout << "      vectorC.begin() is	" << *vectorC.begin() << std::endl;
// 			//std::cout << "      vectorC.end() is		" << *vectorC.end() << std::endl;
// 			std::cout << std::endl;

// 	vectorA.insert(vectorA.begin() + 1, 2, 22);
// 	vectorB.insert(vectorB.begin() + 1, 2, 31);
// 	vectorC.insert(vectorC.begin() + 1, 2, 8);

// 			std::cout << "  vectorA.insert(vectorA.begin() + 1, 2, 22);" << std::endl;
// 			std::cout << "  vectorB.insert(vectorB.begin() + 1, 2, 31);" << std::endl;
// 			std::cout << "  vectorC.insert(vectorB.begin() + 1, 2, 8);" << std::endl << std::endl;

// 			std::cout << "      vectorA is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
// 			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
// 			std::cout << "      vectorA.begin() is	" << *vectorA.begin() << std::endl;
// 			//std::cout << "      vectorA.end() is		" << *vectorA.end() << std::endl;
// 			std::cout << std::endl;

// 			std::cout << "      vectorB is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorB.begin(); itA != vectorB.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorB.capacity() is	" << vectorB.capacity() << std::endl;
// 			std::cout << "      vectorB.size() is		" << vectorB.size() << std::endl;
// 			std::cout << "      vectorB.begin() is	" << *vectorB.begin() << std::endl;
// 			//std::cout << "      vectorB.end() is		" << *vectorB.end() << std::endl;
// 			std::cout << std::endl;

// 			std::cout << "      vectorC is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorC.begin(); itA != vectorC.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorC.capacity() is	" << vectorC.capacity() << std::endl;
// 			std::cout << "      vectorC.size() is		" << vectorC.size() << std::endl;
// 			std::cout << "      vectorC.begin() is	" << *vectorC.begin() << std::endl;
// 			//std::cout << "      vectorC.end() is		" << *vectorC.end() << std::endl;
// 			std::cout << std::endl;

// 	ft::vector<int> vectorD;

// 	vectorD.push_back(1);
// 	vectorD.push_back(2);
// 	vectorD.push_back(3);
// 	vectorD.push_back(4);
// 	vectorD.push_back(5);

// 			std::cout << "  vector<int> vectorD;" << std::endl << std::endl;

// 			std::cout << "  vectorD.push_back(1);" << std::endl;
// 			std::cout << "  vectorD.push_back(2);" << std::endl;
// 			std::cout << "  vectorD.push_back(3);" << std::endl;
// 			std::cout << "  vectorD.push_back(4);" << std::endl;
// 			std::cout << "  vectorD.push_back(5);" << std::endl << std::endl;

// 			std::cout << "      vectorD is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorD.begin(); itA != vectorD.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorD.capacity() is	" << vectorD.capacity() << std::endl;
// 			std::cout << "      vectorD.size() is		" << vectorD.size() << std::endl;
// 			std::cout << "      vectorD.begin() is	" << *vectorD.begin() << std::endl;
// 			//std::cout << "      vectorC.end() is		" << *vectorC.end() << std::endl;
// 			std::cout << std::endl;

// 	vectorD.insert(vectorD.begin() + 1, 2, 9);

// 			std::cout << "  vectorD.insert(vectorD.begin() + 1, 2, 9);" << std::endl << std::endl;

// 			std::cout << "      vectorD is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorD.begin(); itA != vectorD.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorD.capacity() is	" << vectorD.capacity() << std::endl;
// 			std::cout << "      vectorD.size() is		" << vectorD.size() << std::endl;
// 			std::cout << "      vectorD.begin() is	" << *vectorD.begin() << std::endl;
// 			//std::cout << "      vectorC.end() is		" << *vectorC.end() << std::endl;
// 			std::cout << std::endl;

// 	vectorD.insert(vectorD.begin(), 9, 10);

// 			std::cout << "  vectorD.insert(vectorD.begin(), 9, 10);" << std::endl << std::endl;

// 			std::cout << "      vectorD is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorD.begin(); itA != vectorD.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorD.capacity() is	" << vectorD.capacity() << std::endl;
// 			std::cout << "      vectorD.size() is		" << vectorD.size() << std::endl;
// 			std::cout << "      vectorD.begin() is	" << *vectorD.begin() << std::endl;
// 			std::cout << std::endl;

// 	vectorD.insert(vectorD.end(), 2, 3);

// 			std::cout << "  vectorD.insert(vectorD.end(), 2, 3);" << std::endl << std::endl;

// 			std::cout << "      vectorD is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorD.begin(); itA != vectorD.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorD.capacity() is	" << vectorD.capacity() << std::endl;
// 			std::cout << "      vectorD.size() is		" << vectorD.size() << std::endl;
// 			std::cout << "      vectorD.begin() is	" << *vectorD.begin() << std::endl;
// 			std::cout << std::endl;

// 	vectorD.insert(vectorD.end(), 1, 12);

// 			std::cout << "  vectorD.insert(vectorD.end(), 1, 12);" << std::endl << std::endl;

// 			std::cout << "      vectorD is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorD.begin(); itA != vectorD.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorD.capacity() is	" << vectorD.capacity() << std::endl;
// 			std::cout << "      vectorD.size() is		" << vectorD.size() << std::endl;
// 			std::cout << "      vectorD.begin() is	" << *vectorD.begin() << std::endl;
// 			std::cout << std::endl;

// 	vectorD.insert(vectorD.end() - 1, 1, 98);

// 			std::cout << "  vectorD.insert(vectorD.end(), 1, 98);" << std::endl << std::endl;

// 			std::cout << "      vectorD is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorD.begin(); itA != vectorD.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorD.capacity() is	" << vectorD.capacity() << std::endl;
// 			std::cout << "      vectorD.size() is		" << vectorD.size() << std::endl;
// 			std::cout << "      vectorD.begin() is	" << *vectorD.begin() << std::endl;
// 			std::cout << std::endl;

// 	vectorD.insert(vectorD.end() - 1, 2, 25);

// 			std::cout << "  vectorD.insert(vectorD.end() - 1, 2, 25);" << std::endl << std::endl;

// 			std::cout << "      vectorD is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorD.begin(); itA != vectorD.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorD.capacity() is	" << vectorD.capacity() << std::endl;
// 			std::cout << "      vectorD.size() is		" << vectorD.size() << std::endl;
// 			std::cout << "      vectorD.begin() is	" << *vectorD.begin() << std::endl;
// 			std::cout << std::endl;
// }
// void	testMap::member_functions__modifiers__insert_range() {
// 			std::cout << "Modifiers - insert():" << std::endl << std::endl;
// 			std::cout << "Range: " << std::endl << std::endl;

// 	ft::vector<int> vectorA;
// 	ft::vector<int> vectorB(1, 1);
// 	ft::vector<int> vectorC(3, 2);
// 	ft::vector<int> vectorD;
// 	ft::vector<int> vectorE;

// 			std::cout << "  vector<int> vectorA;" << std::endl;
// 			std::cout << "  vector<int> vectorB(1, 1);" << std::endl;
// 			std::cout << "  vector<int> vectorC(1, 10);" << std::endl;
// 			std::cout << "  vector<int> vectorD;" << std::endl;
// 			std::cout << "  vector<int> vectorE;" << std::endl << std::endl;

// 	vectorD.push_back(15);
// 	vectorD.push_back(16);
// 	vectorD.push_back(17);

// 	vectorE.push_back(97);
// 	vectorE.push_back(98);
// 	vectorE.push_back(99);

// 			std::cout << "  vectorD.push_back(15);" << std::endl;
// 			std::cout << "  vectorD.push_back(16);" << std::endl;
// 			std::cout << "  vectorD.push_back(17);" << std::endl << std::endl;

// 			std::cout << "  vectorE.push_back(97);" << std::endl;
// 			std::cout << "  vectorE.push_back(98);" << std::endl;
// 			std::cout << "  vectorE.push_back(99);" << std::endl << std::endl;

// 			std::cout << "      vectorA is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
// 			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
// 			std::cout << std::endl;

// 			std::cout << "      vectorB is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorB.begin(); itA != vectorB.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorB.capacity() is	" << vectorB.capacity() << std::endl;
// 			std::cout << "      vectorB.size() is		" << vectorB.size() << std::endl;
// 			std::cout << std::endl;

// 			std::cout << "      vectorC is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorC.begin(); itA != vectorC.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorC.capacity() is	" << vectorC.capacity() << std::endl;
// 			std::cout << "      vectorC.size() is		" << vectorC.size() << std::endl;
// 			std::cout << std::endl;

// 			std::cout << "      vectorD is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorD.begin(); itA != vectorD.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;
// 			std::cout << "      vectorE is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorE.begin(); itA != vectorE.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;
// 			std::cout << std::endl;

// 	vectorA.insert(vectorA.begin(), vectorD.begin() + 1, vectorD.end() - 1);
// 	vectorB.insert(vectorB.begin(), vectorD.begin() + 1, vectorD.end() - 1);
// 	vectorC.insert(vectorC.begin(), vectorD.begin() + 1, vectorD.end() - 1);

// 			std::cout << "  vectorA.insert(vectorA.begin(), vectorD.begin() + 1, vectorD.end() - 1);" << std::endl;
// 			std::cout << "  vectorB.insert(vectorB.begin(), vectorD.begin() + 1, vectorD.end() - 1);" << std::endl;
// 			std::cout << "  vectorC.insert(vectorC.begin(), vectorD.begin() + 1, vectorD.end() - 1);" << std::endl << std::endl;

// 			std::cout << "      vectorA is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
// 			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
// 			std::cout << std::endl;

// 			std::cout << "      vectorB is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorB.begin(); itA != vectorB.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorB.capacity() is	" << vectorB.capacity() << std::endl;
// 			std::cout << "      vectorB.size() is		" << vectorB.size() << std::endl;
// 			std::cout << std::endl;

// 			std::cout << "      vectorC is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorC.begin(); itA != vectorC.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorC.capacity() is	" << vectorC.capacity() << std::endl;
// 			std::cout << "      vectorC.size() is		" << vectorC.size() << std::endl;
// 			std::cout << std::endl;

// 			std::cout << "      vectorD is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorD.begin(); itA != vectorD.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;
// 			std::cout << "      vectorE is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorE.begin(); itA != vectorE.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;
// 			std::cout << std::endl;

// 	vectorA.erase(vectorA.end() - 1);
// 	vectorB.erase(vectorB.end() - 1);
// 	vectorC.erase(vectorC.end() - 1);

// 			std::cout << "  vectorA.erase(vectorA.end() - 1);" << std::endl;
// 			std::cout << "  vectorB.erase(vectorB.end() - 1);" << std::endl;
// 			std::cout << "  vectorC.erase(vectorC.end() - 1);" << std::endl << std::endl;

// 			std::cout << "      vectorA is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
// 			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
// 			std::cout << std::endl;

// 			std::cout << "      vectorB is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorB.begin(); itA != vectorB.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorB.capacity() is	" << vectorB.capacity() << std::endl;
// 			std::cout << "      vectorB.size() is		" << vectorB.size() << std::endl;
// 			std::cout << std::endl;

// 			std::cout << "      vectorC is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorC.begin(); itA != vectorC.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorC.capacity() is	" << vectorC.capacity() << std::endl;
// 			std::cout << "      vectorC.size() is		" << vectorC.size() << std::endl;
// 			std::cout << std::endl;

// 			std::cout << "      vectorD is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorD.begin(); itA != vectorD.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;
// 			std::cout << "      vectorE is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorE.begin(); itA != vectorE.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;
// 			std::cout << std::endl;

// 	vectorA.insert(vectorA.end(), vectorD.begin(), vectorD.end() - 1);
// 	vectorB.insert(vectorB.end(), vectorD.begin(), vectorD.end() - 1);
// 	vectorC.insert(vectorC.end(), vectorD.begin(), vectorD.end() - 1);

// 			std::cout << "  vectorA.insert(vectorA.end(), vectorD.begin(), vectorD.end() - 1);" << std::endl;
// 			std::cout << "  vectorB.insert(vectorB.end(), vectorD.begin(), vectorD.end() - 1);" << std::endl;
// 			std::cout << "  vectorC.insert(vectorC.end(), vectorD.begin(), vectorD.end() - 1);" << std::endl << std::endl;

// 			std::cout << "      vectorA is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
// 			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
// 			std::cout << std::endl;

// 			std::cout << "      vectorB is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorB.begin(); itA != vectorB.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorB.capacity() is	" << vectorB.capacity() << std::endl;
// 			std::cout << "      vectorB.size() is		" << vectorB.size() << std::endl;
// 			std::cout << std::endl;

// 			std::cout << "      vectorC is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorC.begin(); itA != vectorC.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorC.capacity() is	" << vectorC.capacity() << std::endl;
// 			std::cout << "      vectorC.size() is		" << vectorC.size() << std::endl;
// 			std::cout << std::endl;

// 			std::cout << "      vectorD is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorD.begin(); itA != vectorD.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;
// 			std::cout << "      vectorE is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorE.begin(); itA != vectorE.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;
// 			std::cout << std::endl;

// 	vectorA.insert(vectorA.begin() + 2, vectorD.begin() + 2, vectorD.end() - 1);
// 	vectorB.insert(vectorB.begin() + 2, vectorD.begin() + 2, vectorD.end() - 1);
// 	vectorC.insert(vectorC.begin() + 2, vectorD.begin() + 2, vectorD.end() - 1);

// 			std::cout << "  vectorA.insert(vectorA.begin() + 2, vectorD.begin() + 2, vectorD.end() - 1);" << std::endl;
// 			std::cout << "  vectorB.insert(vectorB.begin() + 2, vectorD.begin() + 2, vectorD.end() - 1);" << std::endl;
// 			std::cout << "  vectorC.insert(vectorC.begin() + 2, vectorD.begin() + 2, vectorD.end() - 1);" << std::endl << std::endl;

// 			std::cout << "      vectorA is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
// 			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
// 			std::cout << std::endl;

// 			std::cout << "      vectorB is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorB.begin(); itA != vectorB.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorB.capacity() is	" << vectorB.capacity() << std::endl;
// 			std::cout << "      vectorB.size() is		" << vectorB.size() << std::endl;
// 			std::cout << std::endl;

// 			std::cout << "      vectorC is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorC.begin(); itA != vectorC.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorC.capacity() is	" << vectorC.capacity() << std::endl;
// 			std::cout << "      vectorC.size() is		" << vectorC.size() << std::endl;
// 			std::cout << std::endl;

// 			std::cout << "      vectorD is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorD.begin(); itA != vectorD.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;
// 			std::cout << "      vectorE is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorE.begin(); itA != vectorE.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;
// 			std::cout << std::endl;

// 	vectorA.insert(vectorA.begin() + 2, vectorE.begin(), vectorE.end() - 2);
// 	vectorB.insert(vectorB.begin() + 2, vectorE.begin(), vectorE.end() - 2);
// 	vectorC.insert(vectorC.begin() + 2, vectorE.begin(), vectorE.end() - 2);

// 			std::cout << "  vectorA.insert(vectorA.begin() + 2, vectorE.begin(), vectorE.end() - 2);" << std::endl;
// 			std::cout << "  vectorB.insert(vectorB.begin() + 2, vectorE.begin(), vectorE.end() - 2);" << std::endl;
// 			std::cout << "  vectorC.insert(vectorC.begin() + 2, vectorE.begin(), vectorE.end() - 2);" << std::endl << std::endl;

// 			std::cout << "      vectorA is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
// 			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
// 			std::cout << std::endl;

// 			std::cout << "      vectorB is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorB.begin(); itA != vectorB.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorB.capacity() is	" << vectorB.capacity() << std::endl;
// 			std::cout << "      vectorB.size() is		" << vectorB.size() << std::endl;
// 			std::cout << std::endl;

// 			std::cout << "      vectorC is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorC.begin(); itA != vectorC.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorC.capacity() is	" << vectorC.capacity() << std::endl;
// 			std::cout << "      vectorC.size() is		" << vectorC.size() << std::endl;
// 			std::cout << std::endl;

// 			std::cout << "      vectorD is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorD.begin(); itA != vectorD.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;
// 			std::cout << "      vectorE is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorE.begin(); itA != vectorE.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;
// 			std::cout << std::endl;

// 	vectorA.erase(vectorA.begin(), vectorA.end() - 1);
// 	vectorB.erase(vectorB.begin(), vectorB.end() - 2);
// 	vectorC.erase(vectorC.begin(), vectorC.end() - 3);

// 			std::cout << "  vectorA.erase(vectorA.begin(), vectorA.end() - 1);" << std::endl;
// 			std::cout << "  vectorB.erase(vectorB.begin(), vectorB.end() - 2);" << std::endl;
// 			std::cout << "  vectorC.erase(vectorC.begin(), vectorC.end() - 3);" << std::endl << std::endl;

// 			std::cout << "      vectorA is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
// 			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
// 			std::cout << std::endl;

// 			std::cout << "      vectorB is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorB.begin(); itA != vectorB.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorB.capacity() is	" << vectorB.capacity() << std::endl;
// 			std::cout << "      vectorB.size() is		" << vectorB.size() << std::endl;
// 			std::cout << std::endl;

// 			std::cout << "      vectorC is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorC.begin(); itA != vectorC.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorC.capacity() is	" << vectorC.capacity() << std::endl;
// 			std::cout << "      vectorC.size() is		" << vectorC.size() << std::endl;
// 			std::cout << std::endl;

// 			std::cout << "      vectorD is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorD.begin(); itA != vectorD.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;
// 			std::cout << "      vectorE is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorE.begin(); itA != vectorE.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;
// 			std::cout << std::endl;

// 	vectorA.insert(vectorA.begin(), vectorE.begin(), vectorE.end());
// 	vectorB.insert(vectorB.begin(), vectorE.begin(), vectorE.end() - 1);
// 	vectorC.insert(vectorC.begin(), vectorE.begin(), vectorE.end() - 2);

// 			std::cout << "  vectorA.insert(vectorA.begin(), vectorE.begin(), vectorE.end());" << std::endl;
// 			std::cout << "  vectorB.insert(vectorB.begin(), vectorE.begin(), vectorE.end() - 1);" << std::endl;
// 			std::cout << "  vectorC.insert(vectorC.begin(), vectorE.begin(), vectorE.end() - 2);" << std::endl << std::endl;

// 			std::cout << "      vectorA is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
// 			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
// 			std::cout << std::endl;

// 			std::cout << "      vectorB is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorB.begin(); itA != vectorB.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorB.capacity() is	" << vectorB.capacity() << std::endl;
// 			std::cout << "      vectorB.size() is		" << vectorB.size() << std::endl;
// 			std::cout << std::endl;

// 			std::cout << "      vectorC is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorC.begin(); itA != vectorC.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorC.capacity() is	" << vectorC.capacity() << std::endl;
// 			std::cout << "      vectorC.size() is		" << vectorC.size() << std::endl;
// 			std::cout << std::endl;

// 			std::cout << "      vectorD is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorD.begin(); itA != vectorD.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;
// 			std::cout << "      vectorE is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorE.begin(); itA != vectorE.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;
// 			std::cout << std::endl;
// }
void	testMap::member_functions__modifiers__erase_position() {
			std::cout << "Modifiers - erase():" << std::endl << std::endl;
			std::cout << "Erase position:" << std::endl << std::endl;

	typedef ft::map<int, std::string>::iterator it;

	ft::map<int, std::string> mapA;
	ft::map<int, std::string> mapB;
	ft::map<int, std::string> mapC;

			std::cout << "  typedef ft::map<int, std::string>::iterator it;" << std::endl << std::endl;

			std::cout << "  map<int, std::string> mapA;" << std::endl;
			std::cout << "  map<int, std::string> mapB;" << std::endl;
			std::cout << "  map<int, std::string> mapC;" << std::endl << std::endl;

	mapA.insert(ft::pair<int, std::string>(5, "Cinco"));
	mapA.insert(ft::pair<int, std::string>(10, "Dez"));
	mapA.insert(ft::pair<int, std::string>(15, "Quinze"));
	mapA.insert(ft::pair<int, std::string>(20, "Vinte"));
	mapA.insert(ft::pair<int, std::string>(25, "Vinte e Cinco"));
	mapA.insert(ft::pair<int, std::string>(30, "Trinta"));

	mapB.insert(ft::pair<int, std::string>(1, "Um"));
	mapB.insert(ft::pair<int, std::string>(2, "Dois"));
	mapB.insert(ft::pair<int, std::string>(3, "Três"));
	mapB.insert(ft::pair<int, std::string>(4, "Quatro"));

			std::cout << "  mapA.insert(ft::pair<int, std::string>(5, \"Cinco\"));" << std::endl;
			std::cout << "  mapA.insert(ft::pair<int, std::string>(10, \"Dez\"));" << std::endl;
			std::cout << "  mapA.insert(ft::pair<int, std::string>(15, \"Quinze\"));" << std::endl;
			std::cout << "  mapA.insert(ft::pair<int, std::string>(20, \"Vinte\"));" << std::endl;
			std::cout << "  mapA.insert(ft::pair<int, std::string>(25, \"Vinte e Cinco\"));" << std::endl;
			std::cout << "  mapA.insert(ft::pair<int, std::string>(30, \"Trinta\"));" << std::endl << std::endl;

			std::cout << "  mapB.insert(ft::pair<int, std::string>(1, \"Um\"));" << std::endl;
			std::cout << "  mapB.insert(ft::pair<int, std::string>(2, \"Dois\"));" << std::endl;
			std::cout << "  mapB.insert(ft::pair<int, std::string>(3, \"Três\"));" << std::endl;
			std::cout << "  mapB.insert(ft::pair<int, std::string>(4, \"Quatro\"));" << std::endl << std::endl;

			std::cout << "      mapA is		" ;
			for ( struct { int i; ft::map<int, std::string>::iterator itA; } s = {0, mapA.begin()}; s.itA != mapA.end(); s.itA++) {
				if (s.i == 0)
					std::cout << "[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				else
					std::cout << "      			[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				s.i = 1;
			}
			std::cout << "      mapA.size() is	" << mapA.size() << std::endl;
			std::cout << std::endl;


			std::cout << "      mapB is		" ;
			for ( struct { int i; ft::map<int, std::string>::iterator itA; } s = {0, mapB.begin()}; s.itA != mapB.end(); s.itA++) {
				if (s.i == 0)
					std::cout << "[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				else
					std::cout << "      			[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				s.i = 1;
			}
			std::cout << "      mapB.size() is	" << mapB.size() << std::endl;
			std::cout << std::endl;


			std::cout << "      mapC is		\n" ;
			for ( struct { int i; ft::map<int, std::string>::iterator itA; } s = {0, mapC.begin()}; s.itA != mapC.end(); s.itA++) {
				if (s.i == 0)
					std::cout << "[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				else
					std::cout << "      			[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				s.i = 1;
			}
			std::cout << "      mapC.size() is	" << mapC.size() << std::endl;
			std::cout << std::endl;


	it itA = mapA.end();
	it itB = mapB.end();

	itA--;
	itB--;

	mapA.erase(itA);
	mapB.erase(itB);

			std::cout << "  it itA = mapA.end();" << std::endl;
			std::cout << "  it itB = mapA.end();" << std::endl;
			std::cout << "  itA--;" << std::endl;
			std::cout << "  itB--;" << std::endl << std::endl;

			std::cout << "  mapA.erase(itA);" << std::endl;
			std::cout << "  mapB.erase(itB);" << std::endl << std::endl;

			std::cout << "      mapA is		" ;
			for ( struct { int i; ft::map<int, std::string>::iterator itA; } s = {0, mapA.begin()}; s.itA != mapA.end(); s.itA++) {
				if (s.i == 0)
					std::cout << "[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				else
					std::cout << "      			[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				s.i = 1;
			}
			std::cout << "      mapA.size() is	" << mapA.size() << std::endl;
			std::cout << std::endl;


			std::cout << "      mapB is		" ;
			for ( struct { int i; ft::map<int, std::string>::iterator itA; } s = {0, mapB.begin()}; s.itA != mapB.end(); s.itA++) {
				if (s.i == 0)
					std::cout << "[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				else
					std::cout << "      			[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				s.i = 1;
			}
			std::cout << "      mapB.size() is	" << mapB.size() << std::endl;
			std::cout << std::endl;


			std::cout << "      mapC is		\n" ;
			for ( struct { int i; ft::map<int, std::string>::iterator itA; } s = {0, mapC.begin()}; s.itA != mapC.end(); s.itA++) {
				if (s.i == 0)
					std::cout << "[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				else
					std::cout << "      			[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				s.i = 1;
			}
			std::cout << "      mapC.size() is	" << mapC.size() << std::endl;
			std::cout << std::endl;

	mapA.erase(mapA.begin());
	mapB.erase(mapB.begin());

			std::cout << "  mapA.erase(mapA.begin());" << std::endl;
			std::cout << "  mapB.erase(mapB.begin());" << std::endl << std::endl;

			std::cout << "      mapA is		" ;
			for ( struct { int i; ft::map<int, std::string>::iterator itA; } s = {0, mapA.begin()}; s.itA != mapA.end(); s.itA++) {
				if (s.i == 0)
					std::cout << "[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				else
					std::cout << "      			[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				s.i = 1;
			}
			std::cout << "      mapA.size() is	" << mapA.size() << std::endl;
			std::cout << std::endl;


			std::cout << "      mapB is		" ;
			for ( struct { int i; ft::map<int, std::string>::iterator itA; } s = {0, mapB.begin()}; s.itA != mapB.end(); s.itA++) {
				if (s.i == 0)
					std::cout << "[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				else
					std::cout << "      			[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				s.i = 1;
			}
			std::cout << "      mapB.size() is	" << mapB.size() << std::endl;
			std::cout << std::endl;


			std::cout << "      mapC is		\n" ;
			for ( struct { int i; ft::map<int, std::string>::iterator itA; } s = {0, mapC.begin()}; s.itA != mapC.end(); s.itA++) {
				if (s.i == 0)
					std::cout << "[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				else
					std::cout << "      			[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				s.i = 1;
			}
			std::cout << "      mapC.size() is	" << mapC.size() << std::endl;
			std::cout << std::endl;

	mapA.erase(mapA.begin());
	mapB.erase(mapB.begin());

			std::cout << "  mapA.erase(mapA.begin());" << std::endl;
			std::cout << "  mapB.erase(mapB.begin());" << std::endl << std::endl;

			std::cout << "      mapA is		" ;
			for ( struct { int i; ft::map<int, std::string>::iterator itA; } s = {0, mapA.begin()}; s.itA != mapA.end(); s.itA++) {
				if (s.i == 0)
					std::cout << "[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				else
					std::cout << "      			[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				s.i = 1;
			}
			std::cout << "      mapA.size() is	" << mapA.size() << std::endl;
			std::cout << std::endl;


			std::cout << "      mapB is		" ;
			for ( struct { int i; ft::map<int, std::string>::iterator itA; } s = {0, mapB.begin()}; s.itA != mapB.end(); s.itA++) {
				if (s.i == 0)
					std::cout << "[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				else
					std::cout << "      			[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				s.i = 1;
			}
			std::cout << "      mapB.size() is	" << mapB.size() << std::endl;
			std::cout << std::endl;


			std::cout << "      mapC is		\n" ;
			for ( struct { int i; ft::map<int, std::string>::iterator itA; } s = {0, mapC.begin()}; s.itA != mapC.end(); s.itA++) {
				if (s.i == 0)
					std::cout << "[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				else
					std::cout << "      			[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				s.i = 1;
			}
			std::cout << "      mapC.size() is	" << mapC.size() << std::endl;
			std::cout << std::endl;

	mapA.erase(mapA.begin());
	mapB.erase(mapB.begin());

			std::cout << "  mapA.erase(mapA.begin());" << std::endl;
			std::cout << "  mapB.erase(mapB.begin());" << std::endl << std::endl;

			std::cout << "      mapA is		" ;
			for ( struct { int i; ft::map<int, std::string>::iterator itA; } s = {0, mapA.begin()}; s.itA != mapA.end(); s.itA++) {
				if (s.i == 0)
					std::cout << "[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				else
					std::cout << "      			[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				s.i = 1;
			}
			std::cout << "      mapA.size() is	" << mapA.size() << std::endl;
			std::cout << std::endl;


			std::cout << "      mapB is		\n" ;
			for ( struct { int i; ft::map<int, std::string>::iterator itA; } s = {0, mapB.begin()}; s.itA != mapB.end(); s.itA++) {
				if (s.i == 0)
					std::cout << "[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				else
					std::cout << "      			[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				s.i = 1;
			}
			std::cout << "      mapB.size() is	" << mapB.size() << std::endl;
			std::cout << std::endl;


			std::cout << "      mapC is		\n" ;
			for ( struct { int i; ft::map<int, std::string>::iterator itA; } s = {0, mapC.begin()}; s.itA != mapC.end(); s.itA++) {
				if (s.i == 0)
					std::cout << "[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				else
					std::cout << "      			[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				s.i = 1;
			}
			std::cout << "      mapC.size() is	" << mapC.size() << std::endl;
			std::cout << std::endl;

}
// void	testMap::member_functions__modifiers__erase_key() {
// 			std::cout << "Modifiers - erase():" << std::endl << std::endl;
// 			std::cout << "Erase key:" << std::endl << std::endl;
// }
// void	testMap::member_functions__modifiers__erase_range() {
// 			std::cout << "Modifiers - erase():" << std::endl << std::endl;
// 			std::cout << "Erase range:" << std::endl << std::endl;

// 	typedef ft::vector<int>::iterator it;

// 	ft::vector<int> vectorA;
// 	ft::vector<int> vectorB;

// 			std::cout << "  typedef std::vector<int>::iterator it;" << std::endl << std::endl;

// 			std::cout << "  vector<int> vectorA;" << std::endl;
// 			std::cout << "  vector<int> vectorB;" << std::endl << std::endl;

// 	vectorA.push_back(5);
// 	vectorA.push_back(10);
// 	vectorA.push_back(15);
// 	vectorA.push_back(20);
// 	vectorA.push_back(25);
// 	vectorA.push_back(30);
// 	vectorA.push_back(35);
// 	vectorA.push_back(40);
// 	vectorA.push_back(45);
// 	vectorA.push_back(50);

// 	vectorB.push_back(1);
// 	vectorB.push_back(2);
// 	vectorB.push_back(3);

// 			std::cout << "  vectorA.push_back(5);" << std::endl;
// 			std::cout << "  vectorA.push_back(10);" << std::endl;
// 			std::cout << "  vectorA.push_back(15);" << std::endl;
// 			std::cout << "  vectorA.push_back(20);" << std::endl;
// 			std::cout << "  vectorA.push_back(25);" << std::endl;
// 			std::cout << "  vectorA.push_back(30);" << std::endl;
// 			std::cout << "  vectorA.push_back(35);" << std::endl;
// 			std::cout << "  vectorA.push_back(40);" << std::endl;
// 			std::cout << "  vectorA.push_back(45);" << std::endl;
// 			std::cout << "  vectorA.push_back(50);" << std::endl << std::endl;

// 			std::cout << "  vectorA.push_back(1);" << std::endl;
// 			std::cout << "  vectorA.push_back(2);" << std::endl;
// 			std::cout << "  vectorA.push_back(3);" << std::endl << std::endl;

// 			std::cout << "      vectorA is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
// 			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
// 			std::cout << std::endl;

// 			std::cout << "      vectorB is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorB.begin(); itA != vectorB.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorB.capacity() is	" << vectorB.capacity() << std::endl;
// 			std::cout << "      vectorB.size() is		" << vectorB.size() << std::endl;
// 			std::cout << std::endl;

// 	it itA = vectorA.erase(vectorA.begin() + 2, vectorA.begin() + 2);
// 	it itB = vectorB.erase(vectorB.end() - 2, vectorB.end() - 2);

// 			std::cout << "  it itA =  vectorA.erase(vectorA.begin() + 2, vectorA.begin() + 2);" << std::endl;
// 			std::cout << "  it itB = vectorB.erase(vectorB.end() - 2, vectorB.end() - 2);" << std::endl << std::endl;

// 			std::cout << "      vectorA is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
// 			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
// 			std::cout << "      *itA is			" << *itA << std::endl;
// 			std::cout << std::endl;

// 			std::cout << "      vectorB is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorB.begin(); itA != vectorB.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorB.capacity() is	" << vectorB.capacity() << std::endl;
// 			std::cout << "      vectorB.size() is		" << vectorB.size() << std::endl;
// 			std::cout << "      *itB is			" << *itB << std::endl;
// 			std::cout << std::endl;

// 	itA = vectorA.erase(vectorA.begin(), vectorA.end() - 3);
// 	itB = vectorB.erase(vectorB.begin(), vectorB.end() - 3);

// 			std::cout << "  itA = vectorA.erase(vectorA.begin(), vectorA.end() - 3);" << std::endl;
// 			std::cout << "  itB = vectorB.erase(vectorB.begin(), vectorB.end() - 3);" << std::endl << std::endl;

// 			std::cout << "      vectorA is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
// 			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
// 			std::cout << "      *itA is			" << *itA << std::endl;
// 			std::cout << std::endl;

// 			std::cout << "      vectorB is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorB.begin(); itA != vectorB.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorB.capacity() is	" << vectorB.capacity() << std::endl;
// 			std::cout << "      vectorB.size() is		" << vectorB.size() << std::endl;
// 			std::cout << "      *itB is			" << *itB << std::endl;
// 			std::cout << std::endl;

// 	itA = vectorA.erase(vectorA.begin() + 1, vectorA.end() - 1);
// 	itB = vectorB.erase(vectorB.begin() + 1, vectorB.end() - 1);

// 			std::cout << "  itA = vectorA.erase(vectorA.begin() + 1, vectorA.end() - 1);" << std::endl;
// 			std::cout << "  itB = vectorB.erase(vectorB.begin() + 1, vectorB.end() - 1);" << std::endl << std::endl;

// 			std::cout << "      vectorA is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
// 			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
// 			std::cout << "      *itA is			" << *itA << std::endl;
// 			std::cout << std::endl;

// 			std::cout << "      vectorB is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorB.begin(); itA != vectorB.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorB.capacity() is	" << vectorB.capacity() << std::endl;
// 			std::cout << "      vectorB.size() is		" << vectorB.size() << std::endl;
// 			std::cout << "      *itB is			" << *itB << std::endl;
// 			std::cout << std::endl;

// 	itA = vectorA.erase(vectorA.begin(), vectorA.end() - 1);
// 	itB = vectorB.erase(vectorB.begin(), vectorB.end() - 1);

// 			std::cout << "  itA = vectorA.erase(vectorA.begin(), vectorA.end() - 1);" << std::endl;
// 			std::cout << "  itB = vectorB.erase(vectorB.begin(), vectorB.end() - 1);" << std::endl << std::endl;

// 			std::cout << "      vectorA is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
// 			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
// 			std::cout << "      *itA is			" << *itA << std::endl;
// 			std::cout << std::endl;

// 			std::cout << "      vectorB is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorB.begin(); itA != vectorB.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorB.capacity() is	" << vectorB.capacity() << std::endl;
// 			std::cout << "      vectorB.size() is		" << vectorB.size() << std::endl;
// 			std::cout << "      *itB is			" << *itB << std::endl;
// 			std::cout << std::endl;

// 	itA = vectorA.erase(vectorA.begin(), vectorA.end());
// 	itB = vectorB.erase(vectorB.begin(), vectorB.end());

// 			std::cout << "  itA = vectorA.erase(vectorA.begin(), vectorA.end());" << std::endl;
// 			std::cout << "  itB = vectorB.erase(vectorB.begin(), vectorB.end());" << std::endl << std::endl;

// 			std::cout << "      vectorA is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
// 			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
// 			std::cout << "      *itA is			" << *itA << std::endl;
// 			std::cout << std::endl;

// 			std::cout << "      vectorB is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorB.begin(); itA != vectorB.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorB.capacity() is	" << vectorB.capacity() << std::endl;
// 			std::cout << "      vectorB.size() is		" << vectorB.size() << std::endl;
// 			std::cout << "      *itB is			" << *itB << std::endl;
// 			std::cout << std::endl;
// }
// void	testMap::member_functions__modifiers__swap() {
// 			std::cout << "Modifiers - swap():" << std::endl << std::endl;

// 	typedef ft::vector<int>::iterator it;

// 	ft::vector<int> vectorA(1, 1);
// 	ft::vector<int> vectorB;
// 	ft::vector<int> vectorC(2, 2);
// 	ft::vector<int> vectorD(7, 7);

// 			std::cout << "  typedef std::vector<int>::iterator it;" << std::endl << std::endl;

// 			std::cout << "  vector<int> vectorA(1, 1);" << std::endl;
// 			std::cout << "  vector<int> vectorB;" << std::endl;
// 			std::cout << "  vector<int> vectorC(2, 2);" << std::endl;
// 			std::cout << "  vector<int> vectorD(7, 7);" << std::endl << std::endl;

// 	it itA = vectorA.begin();
// 	vectorB.begin();
// 	it itC = vectorC.begin();
// 	it itD = vectorD.begin();

// 			std::cout << "  it itA = vectorA.begin();" << std::endl;
// 			std::cout << "  vectorB.begin();" << std::endl;
// 			std::cout << "  it itC = vectorC.begin();" << std::endl;
// 			std::cout << "  it itD = vectorD.begin();" << std::endl << std::endl;

// 			std::cout << "      vectorA is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
// 			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
// 			std::cout << "      vectorA.begin() is	" << *vectorA.begin() << std::endl;
// 			std::cout << "      *itA is			" << *itA << std::endl;
// 			std::cout << std::endl;

// 			std::cout << "      vectorB is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorB.begin(); itA != vectorB.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorB.capacity() is	" << vectorB.capacity() << std::endl;
// 			std::cout << "      vectorB.size() is		" << vectorB.size() << std::endl;
// 			//std::cout << "      vectorB.begin() is	" << *vectorB.begin() << std::endl;
// 			//std::cout << "      *itB is			" << *itB << std::endl;
// 			std::cout << std::endl;

// 			std::cout << "      vectorC is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorC.begin(); itA != vectorC.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorC.capacity() is	" << vectorC.capacity() << std::endl;
// 			std::cout << "      vectorC.size() is		" << vectorC.size() << std::endl;
// 			std::cout << "      vectorC.begin() is	" << *vectorC.begin() << std::endl;
// 			std::cout << "      *itC is			" << *itC << std::endl;
// 			std::cout << std::endl;

// 			std::cout << "      vectorD is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorD.begin(); itA != vectorD.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorD.capacity() is	" << vectorD.capacity() << std::endl;
// 			std::cout << "      vectorD.size() is		" << vectorD.size() << std::endl;
// 			std::cout << "      vectorD.begin() is	" << *vectorD.begin() << std::endl;
// 			std::cout << "      *itD is			" << *itD << std::endl;
// 			std::cout << std::endl;

// 	vectorA.swap(vectorB);
// 	vectorC.swap(vectorD);

// 			std::cout << "  vectorA.swap(vectorB);" << std::endl;
// 			std::cout << "  vectorC.swap(vectorD);" << std::endl << std::endl;

// 			std::cout << "      vectorA is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
// 			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
// 			//std::cout << "      vectorA.begin() is	" << *vectorA.begin() << std::endl;
// 			//std::cout << "      *itA is			" << *itA << std::endl;
// 			std::cout << std::endl;

// 			std::cout << "      vectorB is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorB.begin(); itA != vectorB.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorB.capacity() is	" << vectorB.capacity() << std::endl;
// 			std::cout << "      vectorB.size() is		" << vectorB.size() << std::endl;
// 			std::cout << "      vectorB.begin() is	" << *vectorB.begin() << std::endl;
// 			//std::cout << "      *itB is			" << *itB << std::endl;
// 			std::cout << std::endl;

// 			std::cout << "      vectorC is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorC.begin(); itA != vectorC.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorC.capacity() is	" << vectorC.capacity() << std::endl;
// 			std::cout << "      vectorC.size() is		" << vectorC.size() << std::endl;
// 			std::cout << "      vectorC.begin() is	" << *vectorC.begin() << std::endl;
// 			std::cout << "      *itC is			" << *itC << std::endl;
// 			std::cout << std::endl;

// 			std::cout << "      vectorD is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorD.begin(); itA != vectorD.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorD.capacity() is	" << vectorD.capacity() << std::endl;
// 			std::cout << "      vectorD.size() is		" << vectorD.size() << std::endl;
// 			std::cout << "      vectorD.begin() is	" << *vectorD.begin() << std::endl;
// 			std::cout << "      *itD is			" << *itD << std::endl;
// 			std::cout << std::endl;

// 	vectorA.swap(vectorD);
// 	vectorB.swap(vectorC);

// 			std::cout << "  vectorA.swap(vectorD);" << std::endl;
// 			std::cout << "  vectorB.swap(vectorC);" << std::endl << std::endl;

// 			std::cout << "      vectorA is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
// 			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
// 			std::cout << "      vectorA.begin() is	" << *vectorA.begin() << std::endl;
// 			std::cout << "      *itA is			" << *itA << std::endl;
// 			std::cout << std::endl;

// 			std::cout << "      vectorB is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorB.begin(); itA != vectorB.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorB.capacity() is	" << vectorB.capacity() << std::endl;
// 			std::cout << "      vectorB.size() is		" << vectorB.size() << std::endl;
// 			std::cout << "      vectorB.begin() is	" << *vectorB.begin() << std::endl;
// 			//std::cout << "      *itB is			" << *itB << std::endl;
// 			std::cout << std::endl;

// 			std::cout << "      vectorC is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorC.begin(); itA != vectorC.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorC.capacity() is	" << vectorC.capacity() << std::endl;
// 			std::cout << "      vectorC.size() is		" << vectorC.size() << std::endl;
// 			std::cout << "      vectorC.begin() is	" << *vectorC.begin() << std::endl;
// 			std::cout << "      *itC is			" << *itC << std::endl;
// 			std::cout << std::endl;

// 			std::cout << "      vectorD is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorD.begin(); itA != vectorD.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorD.capacity() is	" << vectorD.capacity() << std::endl;
// 			std::cout << "      vectorD.size() is		" << vectorD.size() << std::endl;
// 			//std::cout << "      vectorD.begin() is	" << *vectorD.begin() << std::endl;
// 			std::cout << "      *itD is			" << *itD << std::endl;
// 			std::cout << std::endl;


// 			std::cout << "      itA is		[ " ;
// 			for (int i = 0 ; i < 1; i++) { std::cout << *(itA + i) << " "; }
// 			std::cout << "]" << std::endl;

// 			std::cout << "      itC is		[ " ;
// 			for (int i = 0 ; i < 2; i++) { std::cout << *(itC + i) << " "; }
// 			std::cout << "]" << std::endl;

// 			std::cout << "      itD is		[ " ;
// 			for (int i = 0 ; i < 7; i++) { std::cout << *(itD + i) << " "; }
// 			std::cout << "]" << std::endl << std::endl;

// 	vectorA.push_back(90);
// 	vectorB.push_back(70);
// 	vectorC.push_back(50);
// 	vectorD.push_back(30);

// 			std::cout << "  vectorA.push_back(90);" << std::endl;
// 			std::cout << "  vectorB.push_back(70);" << std::endl;
// 			std::cout << "  vectorC.push_back(50);" << std::endl;
// 			std::cout << "  vectorD.push_back(30);" << std::endl << std::endl;

// 			std::cout << "      vectorA is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
// 			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
// 			std::cout << "      vectorA.begin() is	" << *vectorA.begin() << std::endl;
// 			std::cout << "      *itA is			" << *itA << std::endl;
// 			std::cout << std::endl;

// 			std::cout << "      vectorB is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorB.begin(); itA != vectorB.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorB.capacity() is	" << vectorB.capacity() << std::endl;
// 			std::cout << "      vectorB.size() is		" << vectorB.size() << std::endl;
// 			std::cout << "      vectorB.begin() is	" << *vectorB.begin() << std::endl;
// 			//std::cout << "      *itB is			" << *itB << std::endl;
// 			std::cout << std::endl;

// 			std::cout << "      vectorC is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorC.begin(); itA != vectorC.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorC.capacity() is	" << vectorC.capacity() << std::endl;
// 			std::cout << "      vectorC.size() is		" << vectorC.size() << std::endl;
// 			std::cout << "      vectorC.begin() is	" << *vectorC.begin() << std::endl;
// 			std::cout << "      *itC is			" << *itC << std::endl;
// 			std::cout << std::endl;

// 			std::cout << "      vectorD is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorD.begin(); itA != vectorD.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorD.capacity() is	" << vectorD.capacity() << std::endl;
// 			std::cout << "      vectorD.size() is		" << vectorD.size() << std::endl;
// 			std::cout << "      vectorD.begin() is	" << *vectorD.begin() << std::endl;
// 			std::cout << "      *itD is			" << *itD << std::endl;
// 			std::cout << std::endl;


// 			std::cout << "      itA is		[ " ;
// 			for (int i = 0 ; i < 2; i++) { std::cout << *(itA + i) << " "; }
// 			std::cout << "]" << std::endl;

// 			std::cout << "      itC is		[ " ;
// 			for (int i = 0 ; i < 3; i++) { std::cout << *(itC + i) << " "; }
// 			std::cout << "]" << std::endl;

// 			std::cout << "      itD is		[ " ;
// 			for (int i = 0 ; i < 8; i++) { std::cout << *(itD + i) << " "; }
// 			std::cout << "]" << std::endl;

// }
// void	testMap::member_functions__modifiers__clear() {
// 			std::cout << "Modifiers - clear():" << std::endl << std::endl;

// 	ft::vector<int> vectorA(5,5);
// 	ft::vector<int> vectorB(12,5);
// 	ft::vector<int> vectorC;

// 			std::cout << "  vector<int> vectorA(5,5);" << std::endl;
// 			std::cout << "  vector<int> vectorB(100,5);" << std::endl;
// 			std::cout << "  vector<int> vectorC;" << std::endl << std::endl;

// 			std::cout << "      vectorA is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
// 			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
// 			std::cout << std::endl;

// 			std::cout << "      vectorB is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorB.begin(); itA != vectorB.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorB.capacity() is	" << vectorB.capacity() << std::endl;
// 			std::cout << "      vectorB.size() is		" << vectorB.size() << std::endl;
// 			std::cout << std::endl;

// 			std::cout << "      vectorC is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorC.begin(); itA != vectorC.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorC.capacity() is	" << vectorC.capacity() << std::endl;
// 			std::cout << "      vectorC.size() is		" << vectorC.size() << std::endl;
// 			std::cout << std::endl;

// 	vectorA.clear();
// 	vectorB.clear();
// 	vectorC.clear();

// 			std::cout << "  vectorA.clear();" << std::endl;
// 			std::cout << "  vectorB.clear();" << std::endl;
// 			std::cout << "  vectorC.clear();" << std::endl << std::endl;

// 			std::cout << "      vectorA is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
// 			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
// 			std::cout << std::endl;

// 			std::cout << "      vectorB is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorB.begin(); itA != vectorB.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorB.capacity() is	" << vectorB.capacity() << std::endl;
// 			std::cout << "      vectorB.size() is		" << vectorB.size() << std::endl;
// 			std::cout << std::endl;

// 			std::cout << "      vectorC is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorC.begin(); itA != vectorC.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorC.capacity() is	" << vectorC.capacity() << std::endl;
// 			std::cout << "      vectorC.size() is		" << vectorC.size() << std::endl;
// 			std::cout << std::endl;
// }

void	testMap::member_functions__allocator__get_allocator() {
			std::cout << "Allocator - get_allocator():" << std::endl << std::endl;

	ft::map<int, int>	mapA;
	ft::pair<const int, int>  *pair;

	pair = mapA.get_allocator().allocate(1);

			std::cout << "  map<int, int>	mapA;" << std::endl;
			std::cout << "  pair<const int, int>  *pair;" << std::endl << std::endl;

	int pair_size = sizeof(ft::map<int,int>::value_type) * 5;

			std::cout << "  int pair_size = sizeof(ft::map<int,int>::value_type) * 5;" << std::endl << std::endl;
			std::cout << "      pair_size = " << pair_size << " bytes" << std::endl << std::endl;

	mapA.get_allocator().deallocate(pair,5);

			std::cout << "  mapA.get_allocator().deallocate(pair,5);" << std::endl << std::endl;
}
// void	testMap::member_functions__overloads__relational_operators() {
// 			std::cout << "Non-member function overloads:" << std::endl << std::endl;

// 	ft::vector<int> vectorA(5, 5);
// 	ft::vector<int> vectorB(5, 5);
// 	ft::vector<int> vectorC(4, 5);
// 	ft::vector<int> vectorD(12, 5);
// 	ft::vector<int> vectorE;

// 	ft::vector<std::string> vectorF(5, "Olah");
// 	ft::vector<std::string> vectorG(5, "Olah");
// 	ft::vector<std::string> vectorH(5, "Olahn");
// 	ft::vector<std::string> vectorI(12, "Not Olah");
// 	ft::vector<std::string> vectorJ;

// 			std::cout << "  vector<int>		vectorA(5, 5);" << std::endl;
// 			std::cout << "  vector<int>		vectorB(5, 5);" << std::endl;
// 			std::cout << "  vector<int>		vectorC(4, 5);" << std::endl;
// 			std::cout << "  vector<int>		vectorD(12, 5);" << std::endl;
// 			std::cout << "  vector<int>		vectorE;" << std::endl << std::endl;

// 			std::cout << "  vector<std::string>	vectorF(5, \"Olah\");" << std::endl;
// 			std::cout << "  vector<std::string>	vectorG(5, \"Olah\");" << std::endl;
// 			std::cout << "  vector<std::string>	vectorH(5, \"Olahn\");" << std::endl;
// 			std::cout << "  vector<std::string>	vectorI(12, \"Not Olah\");" << std::endl;
// 			std::cout << "  vector<std::string>	vectorJ;" << std::endl << std::endl;

// 	// operator==

// 			std::cout << "      vectorA == vectorB is	"; (vectorA == vectorB) ? std::cout << "True\n" : std::cout << "False\n";
// 			std::cout << "      vectorA == vectorC is	"; (vectorA == vectorC) ? std::cout << "True\n" : std::cout << "False\n";
// 			std::cout << "      vectorA == vectorD is	"; (vectorA == vectorD) ? std::cout << "True\n" : std::cout << "False\n";
// 			std::cout << "      vectorA == vectorE is	"; (vectorA == vectorE) ? std::cout << "True\n\n" : std::cout << "False\n\n";

// 			std::cout << "      vectorF == vectorG is	"; (vectorF == vectorG) ? std::cout << "True\n" : std::cout << "False\n";
// 			std::cout << "      vectorF == vectorH is	"; (vectorF == vectorH) ? std::cout << "True\n" : std::cout << "False\n";
// 			std::cout << "      vectorF == vectorI is	"; (vectorF == vectorI) ? std::cout << "True\n" : std::cout << "False\n";
// 			std::cout << "      vectorF == vectorJ is	"; (vectorF == vectorJ) ? std::cout << "True\n\n" : std::cout << "False\n\n";

// 	// operator!=

// 			std::cout << "      vectorA != vectorB is	"; (vectorA != vectorB) ? std::cout << "True\n" : std::cout << "False\n";
// 			std::cout << "      vectorA != vectorC is	"; (vectorA != vectorC) ? std::cout << "True\n" : std::cout << "False\n";
// 			std::cout << "      vectorA != vectorD is	"; (vectorA != vectorD) ? std::cout << "True\n" : std::cout << "False\n";
// 			std::cout << "      vectorA != vectorE is	"; (vectorA != vectorE) ? std::cout << "True\n\n" : std::cout << "False\n\n";

// 			std::cout << "      vectorF != vectorG is	"; (vectorF != vectorG) ? std::cout << "True\n" : std::cout << "False\n";
// 			std::cout << "      vectorF != vectorH is	"; (vectorF != vectorH) ? std::cout << "True\n" : std::cout << "False\n";
// 			std::cout << "      vectorF != vectorI is	"; (vectorF != vectorI) ? std::cout << "True\n" : std::cout << "False\n";
// 			std::cout << "      vectorF != vectorJ is	"; (vectorF != vectorJ) ? std::cout << "True\n\n" : std::cout << "False\n\n";

// 	// operator<

// 			std::cout << "      vectorA < vectorB is	"; (vectorA < vectorB) ? std::cout << "True\n" : std::cout << "False\n";
// 			std::cout << "      vectorA < vectorC is	"; (vectorA < vectorC) ? std::cout << "True\n" : std::cout << "False\n";
// 			std::cout << "      vectorA < vectorD is	"; (vectorA < vectorD) ? std::cout << "True\n" : std::cout << "False\n";
// 			std::cout << "      vectorA < vectorE is	"; (vectorA < vectorE) ? std::cout << "True\n\n" : std::cout << "False\n\n";

// 			std::cout << "      vectorF < vectorG is	"; (vectorF < vectorG) ? std::cout << "True\n" : std::cout << "False\n";
// 			std::cout << "      vectorF < vectorH is	"; (vectorF < vectorH) ? std::cout << "True\n" : std::cout << "False\n";
// 			std::cout << "      vectorF < vectorI is	"; (vectorF < vectorI) ? std::cout << "True\n" : std::cout << "False\n";
// 			std::cout << "      vectorF < vectorJ is	"; (vectorF < vectorJ) ? std::cout << "True\n\n" : std::cout << "False\n\n";

// 	// operator<=

// 			std::cout << "      vectorA <= vectorB is	"; (vectorA <= vectorB) ? std::cout << "True\n" : std::cout << "False\n";
// 			std::cout << "      vectorA <= vectorC is	"; (vectorA <= vectorC) ? std::cout << "True\n" : std::cout << "False\n";
// 			std::cout << "      vectorA <= vectorD is	"; (vectorA <= vectorD) ? std::cout << "True\n" : std::cout << "False\n";
// 			std::cout << "      vectorA <= vectorE is	"; (vectorA <= vectorE) ? std::cout << "True\n\n" : std::cout << "False\n\n";

// 			std::cout << "      vectorF <= vectorG is	"; (vectorF <= vectorG) ? std::cout << "True\n" : std::cout << "False\n";
// 			std::cout << "      vectorF <= vectorH is	"; (vectorF <= vectorH) ? std::cout << "True\n" : std::cout << "False\n";
// 			std::cout << "      vectorF <= vectorI is	"; (vectorF <= vectorI) ? std::cout << "True\n" : std::cout << "False\n";
// 			std::cout << "      vectorF <= vectorJ is	"; (vectorF <= vectorJ) ? std::cout << "True\n\n" : std::cout << "False\n\n";

// 	// operator>

// 			std::cout << "      vectorA > vectorB is	"; (vectorA > vectorB) ? std::cout << "True\n" : std::cout << "False\n";
// 			std::cout << "      vectorA > vectorC is	"; (vectorA > vectorC) ? std::cout << "True\n" : std::cout << "False\n";
// 			std::cout << "      vectorA > vectorD is	"; (vectorA > vectorD) ? std::cout << "True\n" : std::cout << "False\n";
// 			std::cout << "      vectorA > vectorE is	"; (vectorA > vectorE) ? std::cout << "True\n\n" : std::cout << "False\n\n";

// 			std::cout << "      vectorF > vectorG is	"; (vectorF > vectorG) ? std::cout << "True\n" : std::cout << "False\n";
// 			std::cout << "      vectorF > vectorH is	"; (vectorF > vectorH) ? std::cout << "True\n" : std::cout << "False\n";
// 			std::cout << "      vectorF > vectorI is	"; (vectorF > vectorI) ? std::cout << "True\n" : std::cout << "False\n";
// 			std::cout << "      vectorF > vectorJ is	"; (vectorF > vectorJ) ? std::cout << "True\n\n" : std::cout << "False\n\n";

// 	// operator>=

// 			std::cout << "      vectorA >= vectorB is	"; (vectorA >= vectorB) ? std::cout << "True\n" : std::cout << "False\n";
// 			std::cout << "      vectorA >= vectorC is	"; (vectorA >= vectorC) ? std::cout << "True\n" : std::cout << "False\n";
// 			std::cout << "      vectorA >= vectorD is	"; (vectorA >= vectorD) ? std::cout << "True\n" : std::cout << "False\n";
// 			std::cout << "      vectorA >= vectorE is	"; (vectorA >= vectorE) ? std::cout << "True\n\n" : std::cout << "False\n\n";

// 			std::cout << "      vectorF >= vectorG is	"; (vectorF >= vectorG) ? std::cout << "True\n" : std::cout << "False\n";
// 			std::cout << "      vectorF >= vectorH is	"; (vectorF >= vectorH) ? std::cout << "True\n" : std::cout << "False\n";
// 			std::cout << "      vectorF >= vectorI is	"; (vectorF >= vectorI) ? std::cout << "True\n" : std::cout << "False\n";
// 			std::cout << "      vectorF >= vectorJ is	"; (vectorF >= vectorJ) ? std::cout << "True\n\n" : std::cout << "False\n\n";


// 	vectorA.push_back(5);
// 	vectorB.push_back(5);
// 	vectorC.push_back(5);
// 	vectorC.push_back(5);
// 	vectorD.push_back(5000);

// 	vectorF.push_back("Oi");
// 	vectorG.push_back("Yo");

// 			std::cout << "  vectorA.push_back(5);" << std::endl;
// 			std::cout << "  vectorB.push_back(5);" << std::endl;
// 			std::cout << "  vectorC.push_back(5);" << std::endl;
// 			std::cout << "  vectorC.push_back(5);" << std::endl;
// 			std::cout << "  vectorD.push_back(5000);" << std::endl << std::endl;

// 			std::cout << "  vectorF.push_back(\"Oi\");" << std::endl;
// 			std::cout << "  vectorG.push_back(\"Yo\");" << std::endl << std::endl;

// 	// operator==

// 			std::cout << "      vectorA == vectorB is	"; (vectorA == vectorB) ? std::cout << "True\n" : std::cout << "False\n";
// 			std::cout << "      vectorA == vectorC is	"; (vectorA == vectorC) ? std::cout << "True\n" : std::cout << "False\n";
// 			std::cout << "      vectorA == vectorD is	"; (vectorA == vectorD) ? std::cout << "True\n" : std::cout << "False\n";
// 			std::cout << "      vectorA == vectorE is	"; (vectorA == vectorE) ? std::cout << "True\n\n" : std::cout << "False\n\n";

// 			std::cout << "      vectorF == vectorG is	"; (vectorF == vectorG) ? std::cout << "True\n" : std::cout << "False\n";
// 			std::cout << "      vectorF == vectorH is	"; (vectorF == vectorH) ? std::cout << "True\n" : std::cout << "False\n";
// 			std::cout << "      vectorF == vectorI is	"; (vectorF == vectorI) ? std::cout << "True\n" : std::cout << "False\n";
// 			std::cout << "      vectorF == vectorJ is	"; (vectorF == vectorJ) ? std::cout << "True\n\n" : std::cout << "False\n\n";

// 	// operator!=

// 			std::cout << "      vectorA != vectorB is	"; (vectorA != vectorB) ? std::cout << "True\n" : std::cout << "False\n";
// 			std::cout << "      vectorA != vectorC is	"; (vectorA != vectorC) ? std::cout << "True\n" : std::cout << "False\n";
// 			std::cout << "      vectorA != vectorD is	"; (vectorA != vectorD) ? std::cout << "True\n" : std::cout << "False\n";
// 			std::cout << "      vectorA != vectorE is	"; (vectorA != vectorE) ? std::cout << "True\n\n" : std::cout << "False\n\n";

// 			std::cout << "      vectorF != vectorG is	"; (vectorF != vectorG) ? std::cout << "True\n" : std::cout << "False\n";
// 			std::cout << "      vectorF != vectorH is	"; (vectorF != vectorH) ? std::cout << "True\n" : std::cout << "False\n";
// 			std::cout << "      vectorF != vectorI is	"; (vectorF != vectorI) ? std::cout << "True\n" : std::cout << "False\n";
// 			std::cout << "      vectorF != vectorJ is	"; (vectorF != vectorJ) ? std::cout << "True\n\n" : std::cout << "False\n\n";

// 	// operator<

// 			std::cout << "      vectorA < vectorB is	"; (vectorA < vectorB) ? std::cout << "True\n" : std::cout << "False\n";
// 			std::cout << "      vectorA < vectorC is	"; (vectorA < vectorC) ? std::cout << "True\n" : std::cout << "False\n";
// 			std::cout << "      vectorA < vectorD is	"; (vectorA < vectorD) ? std::cout << "True\n" : std::cout << "False\n";
// 			std::cout << "      vectorA < vectorE is	"; (vectorA < vectorE) ? std::cout << "True\n\n" : std::cout << "False\n\n";

// 			std::cout << "      vectorF < vectorG is	"; (vectorF < vectorG) ? std::cout << "True\n" : std::cout << "False\n";
// 			std::cout << "      vectorF < vectorH is	"; (vectorF < vectorH) ? std::cout << "True\n" : std::cout << "False\n";
// 			std::cout << "      vectorF < vectorI is	"; (vectorF < vectorI) ? std::cout << "True\n" : std::cout << "False\n";
// 			std::cout << "      vectorF < vectorJ is	"; (vectorF < vectorJ) ? std::cout << "True\n\n" : std::cout << "False\n\n";

// 	// operator<=

// 			std::cout << "      vectorA <= vectorB is	"; (vectorA <= vectorB) ? std::cout << "True\n" : std::cout << "False\n";
// 			std::cout << "      vectorA <= vectorC is	"; (vectorA <= vectorC) ? std::cout << "True\n" : std::cout << "False\n";
// 			std::cout << "      vectorA <= vectorD is	"; (vectorA <= vectorD) ? std::cout << "True\n" : std::cout << "False\n";
// 			std::cout << "      vectorA <= vectorE is	"; (vectorA <= vectorE) ? std::cout << "True\n\n" : std::cout << "False\n\n";

// 			std::cout << "      vectorF <= vectorG is	"; (vectorF <= vectorG) ? std::cout << "True\n" : std::cout << "False\n";
// 			std::cout << "      vectorF <= vectorH is	"; (vectorF <= vectorH) ? std::cout << "True\n" : std::cout << "False\n";
// 			std::cout << "      vectorF <= vectorI is	"; (vectorF <= vectorI) ? std::cout << "True\n" : std::cout << "False\n";
// 			std::cout << "      vectorF <= vectorJ is	"; (vectorF <= vectorJ) ? std::cout << "True\n\n" : std::cout << "False\n\n";

// 	// operator>

// 			std::cout << "      vectorA > vectorB is	"; (vectorA > vectorB) ? std::cout << "True\n" : std::cout << "False\n";
// 			std::cout << "      vectorA > vectorC is	"; (vectorA > vectorC) ? std::cout << "True\n" : std::cout << "False\n";
// 			std::cout << "      vectorA > vectorD is	"; (vectorA > vectorD) ? std::cout << "True\n" : std::cout << "False\n";
// 			std::cout << "      vectorA > vectorE is	"; (vectorA > vectorE) ? std::cout << "True\n\n" : std::cout << "False\n\n";

// 			std::cout << "      vectorF > vectorG is	"; (vectorF > vectorG) ? std::cout << "True\n" : std::cout << "False\n";
// 			std::cout << "      vectorF > vectorH is	"; (vectorF > vectorH) ? std::cout << "True\n" : std::cout << "False\n";
// 			std::cout << "      vectorF > vectorI is	"; (vectorF > vectorI) ? std::cout << "True\n" : std::cout << "False\n";
// 			std::cout << "      vectorF > vectorJ is	"; (vectorF > vectorJ) ? std::cout << "True\n\n" : std::cout << "False\n\n";

// 	// operator>=

// 			std::cout << "      vectorA >= vectorB is	"; (vectorA >= vectorB) ? std::cout << "True\n" : std::cout << "False\n";
// 			std::cout << "      vectorA >= vectorC is	"; (vectorA >= vectorC) ? std::cout << "True\n" : std::cout << "False\n";
// 			std::cout << "      vectorA >= vectorD is	"; (vectorA >= vectorD) ? std::cout << "True\n" : std::cout << "False\n";
// 			std::cout << "      vectorA >= vectorE is	"; (vectorA >= vectorE) ? std::cout << "True\n\n" : std::cout << "False\n\n";

// 			std::cout << "      vectorF >= vectorG is	"; (vectorF >= vectorG) ? std::cout << "True\n" : std::cout << "False\n";
// 			std::cout << "      vectorF >= vectorH is	"; (vectorF >= vectorH) ? std::cout << "True\n" : std::cout << "False\n";
// 			std::cout << "      vectorF >= vectorI is	"; (vectorF >= vectorI) ? std::cout << "True\n" : std::cout << "False\n";
// 			std::cout << "      vectorF >= vectorJ is	"; (vectorF >= vectorJ) ? std::cout << "True\n\n" : std::cout << "False\n\n";
// }
// void	testMap::member_functions__overloads__swap() {
// 			std::cout << "Non-member function swap():" << std::endl << std::endl;

// 	typedef ft::vector<int>::iterator it;

// 	ft::vector<int> vectorA(1, 1);
// 	ft::vector<int> vectorB;
// 	ft::vector<int> vectorC(2, 2);
// 	ft::vector<int> vectorD(7, 7);

// 			std::cout << "  typedef std::vector<int>::iterator it;" << std::endl << std::endl;

// 			std::cout << "  vector<int> vectorA(1, 1);" << std::endl;
// 			std::cout << "  vector<int> vectorB;" << std::endl;
// 			std::cout << "  vector<int> vectorC(2, 2);" << std::endl;
// 			std::cout << "  vector<int> vectorD(7, 7);" << std::endl << std::endl;

// 	it itA = vectorA.begin();
// 	vectorB.begin();
// 	it itC = vectorC.begin();
// 	it itD = vectorD.begin();

// 			std::cout << "  it itA = vectorA.begin();" << std::endl;
// 			std::cout << "  vectorB.begin();" << std::endl;
// 			std::cout << "  it itC = vectorC.begin();" << std::endl;
// 			std::cout << "  it itD = vectorD.begin();" << std::endl << std::endl;

// 			std::cout << "      vectorA is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
// 			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
// 			std::cout << "      vectorA.begin() is	" << *vectorA.begin() << std::endl;
// 			std::cout << "      *itA is			" << *itA << std::endl;
// 			std::cout << std::endl;

// 			std::cout << "      vectorB is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorB.begin(); itA != vectorB.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorB.capacity() is	" << vectorB.capacity() << std::endl;
// 			std::cout << "      vectorB.size() is		" << vectorB.size() << std::endl;
// 			//std::cout << "      vectorB.begin() is	" << *vectorB.begin() << std::endl;
// 			//std::cout << "      *itB is			" << *itB << std::endl;
// 			std::cout << std::endl;

// 			std::cout << "      vectorC is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorC.begin(); itA != vectorC.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorC.capacity() is	" << vectorC.capacity() << std::endl;
// 			std::cout << "      vectorC.size() is		" << vectorC.size() << std::endl;
// 			std::cout << "      vectorC.begin() is	" << *vectorC.begin() << std::endl;
// 			std::cout << "      *itC is			" << *itC << std::endl;
// 			std::cout << std::endl;

// 			std::cout << "      vectorD is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorD.begin(); itA != vectorD.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorD.capacity() is	" << vectorD.capacity() << std::endl;
// 			std::cout << "      vectorD.size() is		" << vectorD.size() << std::endl;
// 			std::cout << "      vectorD.begin() is	" << *vectorD.begin() << std::endl;
// 			std::cout << "      *itD is			" << *itD << std::endl;
// 			std::cout << std::endl;

// 	ft::swap(vectorA, vectorB);
// 	ft::swap(vectorC, vectorD);

// 			std::cout << "  swap(vectorA, vectorB);" << std::endl;
// 			std::cout << "  swap(vectorC, vectorD);" << std::endl << std::endl;

// 			std::cout << "      vectorA is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
// 			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
// 			//std::cout << "      vectorA.begin() is	" << *vectorA.begin() << std::endl;
// 			//std::cout << "      *itA is			" << *itA << std::endl;
// 			std::cout << std::endl;

// 			std::cout << "      vectorB is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorB.begin(); itA != vectorB.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorB.capacity() is	" << vectorB.capacity() << std::endl;
// 			std::cout << "      vectorB.size() is		" << vectorB.size() << std::endl;
// 			std::cout << "      vectorB.begin() is	" << *vectorB.begin() << std::endl;
// 			//std::cout << "      *itB is			" << *itB << std::endl;
// 			std::cout << std::endl;

// 			std::cout << "      vectorC is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorC.begin(); itA != vectorC.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorC.capacity() is	" << vectorC.capacity() << std::endl;
// 			std::cout << "      vectorC.size() is		" << vectorC.size() << std::endl;
// 			std::cout << "      vectorC.begin() is	" << *vectorC.begin() << std::endl;
// 			std::cout << "      *itC is			" << *itC << std::endl;
// 			std::cout << std::endl;

// 			std::cout << "      vectorD is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorD.begin(); itA != vectorD.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorD.capacity() is	" << vectorD.capacity() << std::endl;
// 			std::cout << "      vectorD.size() is		" << vectorD.size() << std::endl;
// 			std::cout << "      vectorD.begin() is	" << *vectorD.begin() << std::endl;
// 			std::cout << "      *itD is			" << *itD << std::endl;
// 			std::cout << std::endl;

// 	swap(vectorA, vectorD);
// 	swap(vectorB, vectorC);

// 			std::cout << "  swap(vectorA, vectorD);" << std::endl;
// 			std::cout << "  swap(vectorB, vectorC);" << std::endl << std::endl;

// 			std::cout << "      vectorA is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
// 			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
// 			std::cout << "      vectorA.begin() is	" << *vectorA.begin() << std::endl;
// 			std::cout << "      *itA is			" << *itA << std::endl;
// 			std::cout << std::endl;

// 			std::cout << "      vectorB is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorB.begin(); itA != vectorB.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorB.capacity() is	" << vectorB.capacity() << std::endl;
// 			std::cout << "      vectorB.size() is		" << vectorB.size() << std::endl;
// 			std::cout << "      vectorB.begin() is	" << *vectorB.begin() << std::endl;
// 			//std::cout << "      *itB is			" << *itB << std::endl;
// 			std::cout << std::endl;

// 			std::cout << "      vectorC is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorC.begin(); itA != vectorC.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorC.capacity() is	" << vectorC.capacity() << std::endl;
// 			std::cout << "      vectorC.size() is		" << vectorC.size() << std::endl;
// 			std::cout << "      vectorC.begin() is	" << *vectorC.begin() << std::endl;
// 			std::cout << "      *itC is			" << *itC << std::endl;
// 			std::cout << std::endl;

// 			std::cout << "      vectorD is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorD.begin(); itA != vectorD.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorD.capacity() is	" << vectorD.capacity() << std::endl;
// 			std::cout << "      vectorD.size() is		" << vectorD.size() << std::endl;
// 			//std::cout << "      vectorD.begin() is	" << *vectorD.begin() << std::endl;
// 			std::cout << "      *itD is			" << *itD << std::endl;
// 			std::cout << std::endl;


// 			std::cout << "      itA is		[ " ;
// 			for (int i = 0 ; i < 1; i++) { std::cout << *(itA + i) << " "; }
// 			std::cout << "]" << std::endl;

// 			std::cout << "      itC is		[ " ;
// 			for (int i = 0 ; i < 2; i++) { std::cout << *(itC + i) << " "; }
// 			std::cout << "]" << std::endl;

// 			std::cout << "      itD is		[ " ;
// 			for (int i = 0 ; i < 7; i++) { std::cout << *(itD + i) << " "; }
// 			std::cout << "]" << std::endl << std::endl;

// 	vectorA.push_back(90);
// 	vectorB.push_back(70);
// 	vectorC.push_back(50);
// 	vectorD.push_back(30);

// 			std::cout << "  vectorA.push_back(90);" << std::endl;
// 			std::cout << "  vectorB.push_back(70);" << std::endl;
// 			std::cout << "  vectorC.push_back(50);" << std::endl;
// 			std::cout << "  vectorD.push_back(30);" << std::endl << std::endl;

// 			std::cout << "      vectorA is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
// 			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
// 			std::cout << "      vectorA.begin() is	" << *vectorA.begin() << std::endl;
// 			std::cout << "      *itA is			" << *itA << std::endl;
// 			std::cout << std::endl;

// 			std::cout << "      vectorB is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorB.begin(); itA != vectorB.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorB.capacity() is	" << vectorB.capacity() << std::endl;
// 			std::cout << "      vectorB.size() is		" << vectorB.size() << std::endl;
// 			std::cout << "      vectorB.begin() is	" << *vectorB.begin() << std::endl;
// 			//std::cout << "      *itB is			" << *itB << std::endl;
// 			std::cout << std::endl;

// 			std::cout << "      vectorC is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorC.begin(); itA != vectorC.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorC.capacity() is	" << vectorC.capacity() << std::endl;
// 			std::cout << "      vectorC.size() is		" << vectorC.size() << std::endl;
// 			std::cout << "      vectorC.begin() is	" << *vectorC.begin() << std::endl;
// 			std::cout << "      *itC is			" << *itC << std::endl;
// 			std::cout << std::endl;

// 			std::cout << "      vectorD is		[ " ;
// 			for (ft::vector<int>::iterator itA = vectorD.begin(); itA != vectorD.end(); itA++) { std::cout << *itA << " ";	}
// 			std::cout << "]" << std::endl;

// 			std::cout << "      vectorD.capacity() is	" << vectorD.capacity() << std::endl;
// 			std::cout << "      vectorD.size() is		" << vectorD.size() << std::endl;
// 			std::cout << "      vectorD.begin() is	" << *vectorD.begin() << std::endl;
// 			std::cout << "      *itD is			" << *itD << std::endl;
// 			std::cout << std::endl;


// 			std::cout << "      itA is		[ " ;
// 			for (int i = 0 ; i < 2; i++) { std::cout << *(itA + i) << " "; }
// 			std::cout << "]" << std::endl;

// 			std::cout << "      itC is		[ " ;
// 			for (int i = 0 ; i < 3; i++) { std::cout << *(itC + i) << " "; }
// 			std::cout << "]" << std::endl;

// 			std::cout << "      itD is		[ " ;
// 			for (int i = 0 ; i < 8; i++) { std::cout << *(itD + i) << " "; }
// 			std::cout << "]" << std::endl;

// }

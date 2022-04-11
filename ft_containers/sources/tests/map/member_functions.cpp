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
void	testMap::member_functions__element__operator_at_position() {
			std::cout << " Element access: - operator[]:" << std::endl << std::endl;

	ft::map<int, std::string> mapA;
	ft::map<int, std::string> mapB;
	ft::map<int, int> mapC;

			std::cout << "  map<int, std::string> mapA;" << std::endl;
			std::cout << "  map<int, std::string> mapB;" << std::endl;
			std::cout << "  map<int, int> mapC;" << std::endl << std::endl;

	mapA[1] = "Uno";
	mapA[2] = "Dos";
	mapA[2] = "Dos";
	mapA[3] = "Tres";

	mapB[11] = "Onze";
	mapB[11] = "Onze";
	mapB[12] = "Onze";

			std::cout << "  mapA[1] = \"Uno\"" << std::endl;
			std::cout << "  mapA[2] = \"Dos\"" << std::endl;
			std::cout << "  mapA[2] = \"Dos\"" << std::endl;
			std::cout << "  mapA[3] = \"Tres\"" << std::endl << std::endl;

			std::cout << "  mapB[11] = \"Onze\"" << std::endl;
			std::cout << "  mapB[11] = \"Onze\"" << std::endl;
			std::cout << "  mapB[12] = \"Onze\"" << std::endl << std::endl;

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
			for ( struct { int i; ft::map<int, int>::iterator itA; } s = {0, mapC.begin()}; s.itA != mapC.end(); s.itA++) {
				if (s.i == 0)
					std::cout << "[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				else
					std::cout << "      			[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				s.i = 1;
			}
			std::cout << "      mapC.size() is	" << mapC.size() << std::endl;
			std::cout << std::endl;



			std::cout << "  mapA[1] = " << mapA[1] << std::endl;
			std::cout << "  mapA[2] = " << mapA[2] << std::endl;
			std::cout << "  mapA[2] = " << mapA[3] << std::endl;
			std::cout << "  mapA[3] = " << mapA[4] << std::endl;
			std::cout << "  mapA[3] = " << mapA[5] << std::endl;
			std::cout << "  mapA[3] = " << mapA[6] << std::endl << std::endl;

			std::cout << "  mapB[11] = " << mapB[11] << std::endl;
			std::cout << "  mapB[11] = " << mapB[11] << std::endl;
			std::cout << "  mapB[12] = " << mapB[12] << std::endl;
			std::cout << "  mapB[1]  = " << mapB[1] << std::endl;
			std::cout << "  mapB[0]  = " << mapB[0] << std::endl << std::endl;

			std::cout << "  mapC[1]  = " << mapC[1] << std::endl;
			std::cout << "  mapC[0]  = " << mapC[0] << std::endl << std::endl;


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

	mapC[0];
	mapC[1] = 2;
	mapC[5] = 32;

			std::cout << "  mapC[0];" << std::endl;
			std::cout << "  mapC[1] = 2;" << std::endl;
			std::cout << "  mapC[5] = 32;" << std::endl << std::endl;

			std::cout << "  mapC[1]  = " << mapC[1] << std::endl;
			std::cout << "  mapC[0]  = " << mapC[0] << std::endl;
			std::cout << "  mapC[5]  = " << mapC[5] << std::endl;
			std::cout << "  mapC[2]  = " << mapC[2] << std::endl;
			std::cout << "  mapC[5]  = " << mapC[5] << std::endl << std::endl;

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
void	testMap::member_functions__modifiers__insert_with_hint() {
			std::cout << "Modifiers - insert():" << std::endl << std::endl;
			std::cout << "With Hint:" << std::endl << std::endl;

	ft::map<int, int> mapA;
	ft::map<int, int> mapB;
	ft::map<int, int> mapC;
	ft::map<int, int> mapD;

			std::cout << "  map<int, int> mapA;" << std::endl;
			std::cout << "  map<int, int> mapB;" << std::endl;
			std::cout << "  map<int, int> mapC;" << std::endl;
			std::cout << "  map<int, int> mapD;" << std::endl << std::endl;

	mapA.insert(ft::pair<int, int>(3, 3));

	mapB.insert(ft::pair<int, int>(1, 1));

	mapC.insert(ft::pair<int, int>(1, 1));
	mapC.insert(ft::pair<int, int>(5, 5));

	mapD.insert(ft::pair<int,int>(10, 10));
	mapD.insert(ft::pair<int,int>(100, 100));
	mapD.insert(ft::pair<int,int>(50, 50));

			std::cout << "  mapA.insert(ft::pair<int, int>(3, 3));" << std::endl << std::endl;
			std::cout << "  mapB.insert(ft::pair<int, int>(1, 1));" << std::endl << std::endl;
			std::cout << "  mapC.insert(ft::pair<int, int>(1, 1));" << std::endl;
			std::cout << "  mapC.insert(ft::pair<int, int>(5, 5));" << std::endl << std::endl;
			std::cout << "  mapD.insert(ft::pair<int,int>(10, 10));" << std::endl;
			std::cout << "  mapD.insert(ft::pair<int,int>(100, 100));" << std::endl;
			std::cout << "  mapD.insert(ft::pair<int,int>(50, 50));" << std::endl << std::endl;

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



	typedef ft::map<int, int>::iterator it;

			std::cout << "  map<int, int>::iterator it;" << std::endl << std::endl;

	it itA = mapA.begin();
	it itB = mapB.end();
	it itC = mapC.begin();
	it itD = mapD.begin();

	itD++;

			std::cout << "  it itA = mapA.begin();" << std::endl;
			std::cout << "  it itB = mapB.end();" << std::endl;
			std::cout << "  it itC = mapC.begin();" << std::endl;
			std::cout << "  it itD = mapD.begin();" << std::endl << std::endl;
			std::cout << "  itD++;" << std::endl << std::endl;

	itA = mapA.insert(itA, ft::pair<int,int>(-6, -6));
			std::cout << "  itA = mapA.insert(itA, ft::pair<int,int>(6, 6));" << std::endl << std::endl;
			std::cout << "      itA =	[ " << itA->first << " : " << itA->second << " ]" << std::endl << std::endl;


	itB = mapB.insert(itB, ft::pair<int,int>(6, 6));
			std::cout << "  itB = mapB.insert(itB, ft::pair<int,int>(6, 6));" << std::endl << std::endl;
			std::cout << "      itB =	[ " << itB->first << " : " << itB->second << " ]" << std::endl << std::endl;

	itB = mapB.insert(itB, ft::pair<int,int>(6, 6));
			std::cout << "  itB = mapB.insert(itB, ft::pair<int,int>(6, 6));" << std::endl << std::endl;
			std::cout << "      itB =	[ " << itB->first << " : " << itB->second << " ]" << std::endl << std::endl;

	itB = mapB.insert(itB, ft::pair<int,int>(3, 3));
			std::cout << "  itB = mapB.insert(itB, ft::pair<int,int>(3, 3));" << std::endl << std::endl;
			std::cout << "      itB =	[ " << itB->first << " : " << itB->second << " ]" << std::endl << std::endl;


	itC = mapC.insert(itC, ft::pair<int,int>(-2, -2));
			std::cout << "  itC = mapC.insert(itC, ft::pair<int,int>(-2, -2));" << std::endl << std::endl;
			std::cout << "      itC =	[ " << itC->first << " : " << itC->second << " ]" << std::endl << std::endl;

	itC = mapC.insert(itC, ft::pair<int,int>(-1, -1));
			std::cout << "  itC = mapC.insert(itC, ft::pair<int,int>(12, 12));" << std::endl << std::endl;
			std::cout << "      itC =	[ " << itC->first << " : " << itC->second << " ]" << std::endl << std::endl;

	itC = mapC.insert(itC, ft::pair<int,int>(5, 5));
			std::cout << "  itC = mapC.insert(itC, ft::pair<int,int>(5, 5));" << std::endl << std::endl;
			std::cout << "      itC =	[ " << itC->first << " : " << itC->second << " ]" << std::endl << std::endl;


	itD = mapD.insert(itD, ft::pair<int,int>(12, 12));
			std::cout << "  itD = mapD.insert(itD, ft::pair<int,int>(12, 12));" << std::endl << std::endl;
			std::cout << "      itD =	[ " << itD->first << " : " << itD->second << " ]" << std::endl << std::endl;

	itD = mapD.end();
	itD--;
	itD--;

			std::cout << "  itD = mapD.end();" << std::endl;
			std::cout << "  itD--;" << std::endl;
			std::cout << "  itD--;" << std::endl;

	itD = mapD.insert(itD, ft::pair<int,int>(51, 51));
			std::cout << "  itD = mapD.insert(itD, ft::pair<int,int>(51, 51));" << std::endl << std::endl;
			std::cout << "      itD =	[ " << itD->first << " : " << itD->second << " ]" << std::endl << std::endl;

	itD = mapD.begin();

	itD = mapD.insert(itD, ft::pair<int,int>(2, 2));
			std::cout << "  itD = mapD.insert(itD, ft::pair<int,int>(2, 2));" << std::endl << std::endl;
			std::cout << "      itD =	[ " << itD->first << " : " << itD->second << " ]" << std::endl << std::endl;

	itD = mapD.begin();

	itD = mapD.insert(itD, ft::pair<int,int>(3, 3));
			std::cout << "  itD = mapD.insert(itD, ft::pair<int,int>(3, 3));" << std::endl << std::endl;
			std::cout << "      itD =	[ " << itD->first << " : " << itD->second << " ]" << std::endl << std::endl;



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
}
void	testMap::member_functions__modifiers__insert_range() {
			std::cout << "Modifiers - insert():" << std::endl << std::endl;
			std::cout << "Range: " << std::endl << std::endl;

	ft::map<int, int> mapA;
	ft::map<int, int> mapB;
	ft::map<int, int> mapC;
	ft::map<int, int> mapD;
	ft::map<int, int> mapE;

			std::cout << "  map<int, int> mapA;" << std::endl;
			std::cout << "  map<int, int> mapB;" << std::endl;
			std::cout << "  map<int, int> mapC;" << std::endl;
			std::cout << "  map<int, int> mapD;" << std::endl;
			std::cout << "  map<int, int> mapE;" << std::endl << std::endl;

	mapB.insert(ft::pair<int, int>(100, 100));
	mapC.insert(ft::pair<int, int>(222, 222));
	mapC.insert(ft::pair<int, int>(3333, 3333));
	mapD.insert(ft::pair<int, int>(123, 123));
	mapD.insert(ft::pair<int, int>(233, 233));
	mapD.insert(ft::pair<int, int>(333, 333));
	mapE.insert(ft::pair<int, int>(-1, -1));
	mapE.insert(ft::pair<int, int>(-2, -2));
	mapE.insert(ft::pair<int, int>(-3, -3));

			std::cout << "  mapB.insert(ft::pair<int, int>(100, 100));" << std::endl  << std::endl;
			std::cout << "  mapC.insert(ft::pair<int, int>(222, 222));" << std::endl;
			std::cout << "  mapC.insert(ft::pair<int, int>(3333, 3333));" << std::endl << std::endl;
			std::cout << "  mapD.insert(ft::pair<int, int>(123, 123));" << std::endl;
			std::cout << "  mapD.insert(ft::pair<int, int>(233, 233));" << std::endl;
			std::cout << "  mapD.insert(ft::pair<int, int>(333, 333));" << std::endl << std::endl;
			std::cout << "  mapE.insert(ft::pair<int, int>(-1, -1));" << std::endl;
			std::cout << "  mapE.insert(ft::pair<int, int>(-2, -2));" << std::endl;
			std::cout << "  mapE.insert(ft::pair<int, int>(-3, -3));" << std::endl << std::endl;

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

	typedef ft::map<int, int>::iterator it;

			std::cout << "  typedef ft::map<int, int>::iterator it;" << std::endl << std::endl;


	it itA = mapD.begin();
	it itB = mapD.end();

	itA++;
	itB--;

	mapA.insert(itA, itB);
	mapB.insert(itA, itB);
	mapC.insert(itA, itB);

			std::cout << "  it itA = mapD.begin();" << std::endl;
			std::cout << "  it itB = mapD.end();" << std::endl << std::endl;

			std::cout << "  itA++;" << std::endl;
			std::cout << "  itB--;" << std::endl << std::endl;

			std::cout << "  mapA.insert(itA, itB);" << std::endl;
			std::cout << "  mapB.insert(itA, itB);" << std::endl;
			std::cout << "  mapC.insert(itA, itB);" << std::endl << std::endl;


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


	itA = mapA.end();
	itB = mapB.end();
	it itC = mapC.end();


	itA--;
	itB--;
	itC--;

	mapA.erase(itA);
	mapB.erase(itB);
	mapC.erase(itC);

			std::cout << "  itA = mapA.end();" << std::endl;
			std::cout << "  itB = mapB.end();" << std::endl;
			std::cout << "  it itC = mapC.end();" << std::endl << std::endl;

			std::cout << "  itA--;" << std::endl;
			std::cout << "  itB--;" << std::endl;
			std::cout << "  itC--;" << std::endl << std::endl;

			std::cout << "  mapA.erase(itA);" << std::endl;
			std::cout << "  mapB.erase(itB);" << std::endl;
			std::cout << "  mapC.erase(itC);" << std::endl << std::endl;


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


	itA = mapD.end();

	itA--;

	mapA.insert(mapD.begin(), itA);
	mapB.insert(mapD.begin(), itA);
	mapC.insert(mapD.begin(), itA);

			std::cout << "  itA = mapA.end();" << std::endl << std::endl;
			std::cout << "  itA--;" << std::endl << std::endl;

			std::cout << "  mapA.insert(mapD.begin(), itA);" << std::endl;
			std::cout << "  mapB.insert(mapD.begin(), itA);" << std::endl;
			std::cout << "  mapC.insert(mapD.begin(), itA);" << std::endl << std::endl;


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

	mapE.insert(mapD.begin(), mapD.end());
	mapE.insert(mapC.begin(), mapC.end());
	mapE.insert(mapE.begin(), mapE.end());


			std::cout << "  mapE.insert(mapD.begin(), mapD.end());" << std::endl;
			std::cout << "  mapE.insert(mapC.begin(), mapC.end());" << std::endl;
			std::cout << "  mapE.insert(mapE.begin(), mapE.end());" << std::endl << std::endl;


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


}
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
void	testMap::member_functions__modifiers__erase_key() {
			std::cout << "Modifiers - erase():" << std::endl << std::endl;
			std::cout << "Erase key:" << std::endl << std::endl;

	ft::map<int, std::string> mapA;
	ft::map<int, std::string> mapB;
	ft::map<int, std::string> mapC;

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



			std::cout << "mapA.erase(5) = " << mapA.erase(5) << std::endl;
			std::cout << "mapA.erase(5) = " << mapA.erase(5) << std::endl;
			std::cout << "mapA.erase(30) = " << mapA.erase(30) << std::endl;
			std::cout << "mapA.erase(30) = " << mapA.erase(30) << std::endl;
			std::cout << "mapA.erase(32) = " << mapA.erase(32) << std::endl;
			std::cout << "mapA.erase(15) = " << mapA.erase(15) << std::endl << std::endl;

			std::cout << "mapB.erase(4) = " << mapB.erase(4) << std::endl;
			std::cout << "mapB.erase(2) = " << mapB.erase(2) << std::endl;
			std::cout << "mapB.erase(1) = " << mapB.erase(1) << std::endl;
			std::cout << "mapB.erase(3) = " << mapB.erase(3) << std::endl;
			std::cout << "mapB.erase(5) = " << mapB.erase(5) << std::endl;
			std::cout << "mapB.erase(0) = " << mapB.erase(0) << std::endl << std::endl;

			std::cout << "mapC.erase(0) = " << mapC.erase(0) << std::endl << std::endl;


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
void	testMap::member_functions__modifiers__erase_range() {
			std::cout << "Modifiers - erase():" << std::endl << std::endl;
			std::cout << "Erase range:" << std::endl << std::endl;

	typedef ft::map<int, int>::iterator it;

	ft::map<int, int> mapA;
	ft::map<int, int> mapB;

			std::cout << "  typedef ft::map<int, int>::iterator it;" << std::endl << std::endl;

			std::cout << "  map<int, int> mapA;" << std::endl;
			std::cout << "  map<int, int> mapB;" << std::endl << std::endl;

	mapA.insert(ft::pair<int, int>(5, 100));
	mapA.insert(ft::pair<int, int>(10, 100));
	mapA.insert(ft::pair<int, int>(15, 100));
	mapA.insert(ft::pair<int, int>(20, 100));
	mapA.insert(ft::pair<int, int>(25, 100));
	mapA.insert(ft::pair<int, int>(30, 100));
	mapA.insert(ft::pair<int, int>(35, 100));
	mapA.insert(ft::pair<int, int>(40, 100));
	mapA.insert(ft::pair<int, int>(45, 100));
	mapA.insert(ft::pair<int, int>(50, 100));

	mapB.insert(ft::pair<int, int>(1, 100));
	mapB.insert(ft::pair<int, int>(2, 100));
	mapB.insert(ft::pair<int, int>(3, 100));

			std::cout << "  mapA.insert(ft::pair<int, int>(5, 100));" << std::endl;
			std::cout << "  mapA.insert(ft::pair<int, int>(10, 100));" << std::endl;
			std::cout << "  mapA.insert(ft::pair<int, int>(15, 100));" << std::endl;
			std::cout << "  mapA.insert(ft::pair<int, int>(20, 100));" << std::endl;
			std::cout << "  mapA.insert(ft::pair<int, int>(25, 100));" << std::endl;
			std::cout << "  mapA.insert(ft::pair<int, int>(30, 100));" << std::endl;
			std::cout << "  mapA.insert(ft::pair<int, int>(35, 100));" << std::endl;
			std::cout << "  mapA.insert(ft::pair<int, int>(40, 100));" << std::endl;
			std::cout << "  mapA.insert(ft::pair<int, int>(45, 100));" << std::endl;
			std::cout << "  mapA.insert(ft::pair<int, int>(50, 100));" << std::endl << std::endl;

			std::cout << "  mapA.insert(ft::pair<int, int>(1, 100));" << std::endl;
			std::cout << "  mapA.insert(ft::pair<int, int>(2, 100));" << std::endl;
			std::cout << "  mapA.insert(ft::pair<int, int>(3, 100));" << std::endl << std::endl;

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


	it itA = mapA.begin();
	it itB = mapB.end();

	itA++;
	itA++;
	itB--;
	itB--;

	mapA.erase(itA, itA);
	mapB.erase(itB, itB);

			std::cout << "  it itA = mapA.begin();" << std::endl;
			std::cout << "  it itB = mapB.end();" << std::endl << std::endl;

			std::cout << "  itA++;" << std::endl;
			std::cout << "  itA++;" << std::endl;
			std::cout << "  itB--;" << std::endl;
			std::cout << "  itB--;" << std::endl << std::endl;

			std::cout << "  mapA.erase(itA, itA);" << std::endl;
			std::cout << "  mapB.erase(itB, itB);" << std::endl << std::endl;

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


	itA = mapA.begin();
	itB = mapB.begin();
	it itC = mapA.end();
	it itD = mapB.end();

	itC--;
	itC--;
	itC--;
	itD--;
	itD--;
	itD--;

	mapA.erase(itA, itC);
	mapB.erase(itB, itD);

			std::cout << "  itA = mapA.begin();" << std::endl;
			std::cout << "  itB = mapB.begin();" << std::endl;
			std::cout << "  it itC = mapA.end();" << std::endl;
			std::cout << "  it itD = mapB.end();" << std::endl << std::endl;

			std::cout << "  itC--;" << std::endl;
			std::cout << "  itC--;" << std::endl;
			std::cout << "  itC--;" << std::endl;
			std::cout << "  itD--;" << std::endl;
			std::cout << "  itD--;" << std::endl;
			std::cout << "  itD--;" << std::endl << std::endl;

			std::cout << "  mapA.erase(itA, itC);" << std::endl;
			std::cout << "  mapB.erase(itB, itD);" << std::endl << std::endl;


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



	itA = mapA.begin();
	itB = mapB.begin();
	itC = mapA.end();
	itD = mapB.end();

	itA++;
	itB++;
	itC--;
	itD--;

	mapA.erase(itA, itC);
	mapB.erase(itB, itD);

			std::cout << "  itA = mapA.begin();" << std::endl;
			std::cout << "  itB = mapB.begin();" << std::endl;
			std::cout << "  itC = mapA.end();" << std::endl;
			std::cout << "  itD = mapB.end();" << std::endl << std::endl;

			std::cout << "  itA++;" << std::endl;
			std::cout << "  itB++;" << std::endl;
			std::cout << "  itC--;" << std::endl;
			std::cout << "  itD--;" << std::endl << std::endl;

			std::cout << "  mapA.erase(itA, itC);" << std::endl;
			std::cout << "  mapB.erase(itB, itD);" << std::endl << std::endl;

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


	itA = mapA.begin();
	itB = mapB.begin();
	itC = mapA.end();
	itD = mapB.end();

	itC--;
	itD--;

	mapA.erase(itA, itC);
	mapB.erase(itB, itD);

			std::cout << "  itA = mapA.begin();" << std::endl;
			std::cout << "  itB = mapB.begin();" << std::endl;
			std::cout << "  it itC = mapA.end();" << std::endl;
			std::cout << "  it itD = mapB.end();" << std::endl << std::endl;

			std::cout << "  itC--;" << std::endl;
			std::cout << "  itD--;" << std::endl << std::endl;

			std::cout << "  mapA.erase(itA, itC);" << std::endl;
			std::cout << "  mapB.erase(itB, itD);" << std::endl << std::endl;

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



	itA = mapA.begin();
	itB = mapB.begin();
	itC = mapA.end();
	itD = mapB.end();

	mapA.erase(itA, itC);
	mapB.erase(itB, itD);

			std::cout << "  itA = mapA.begin();" << std::endl;
			std::cout << "  itB = mapB.begin();" << std::endl;
			std::cout << "  itC = mapA.end();" << std::endl;
			std::cout << "  itD = mapB.end();" << std::endl << std::endl;

			std::cout << "  mapA.erase(itA, itC);" << std::endl;
			std::cout << "  mapB.erase(itB, itD);" << std::endl << std::endl;

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
}
void	testMap::member_functions__modifiers__swap() {
			std::cout << "Modifiers - swap():" << std::endl << std::endl;

	ft::map<int, int> mapA;
	ft::map<int, int> mapB;
	ft::map<int, int> mapC;
	ft::map<int, int> mapD;
	ft::map<int, int> mapE;
	ft::map<int, int> mapF;

	mapA[1] = 1;
	mapC[2] = 2;
	mapD[7] = 7;


			std::cout << "  map<int, int> mapA;" << std::endl;
			std::cout << "  map<int, int> mapB;" << std::endl;
			std::cout << "  map<int, int> mapC;" << std::endl;
			std::cout << "  map<int, int> mapD;" << std::endl;
			std::cout << "  map<int, int> mapE;" << std::endl;
			std::cout << "  map<int, int> mapF;" << std::endl << std::endl;

			std::cout << "  mapA[1] = 1;" << std::endl;
			std::cout << "  mapC[2] = 2;" << std::endl;
			std::cout << "  mapD[7] = 7;" << std::endl << std::endl;

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


			std::cout << "      mapB is		\n" ;
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


	mapA.swap(mapB);
	mapC.swap(mapD);

			std::cout << "  mapA.swap(mapB);" << std::endl;
			std::cout << "  mapC.swap(mapD);" << std::endl << std::endl;

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


	mapA.swap(mapD);
	mapB.swap(mapC);

			std::cout << "  mapA.swap(mapD);" << std::endl;
			std::cout << "  mapB.swap(mapC);" << std::endl << std::endl;

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


	mapA[90] = 90;
	mapB[91] = 91;
	mapC[92] = 92;
	mapD[93] = 93;

			std::cout << "  mapA[90] = 90;" << std::endl;
			std::cout << "  mapB[91] = 91;" << std::endl;
			std::cout << "  mapC[92] = 92;" << std::endl;
			std::cout << "  mapD[93] = 93;" << std::endl << std::endl;

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

	mapA.erase(mapA.begin());
	mapB.erase(mapB.begin());
	mapC.erase(mapC.begin());

			std::cout << "  mapA.erase(mapA.begin());" << std::endl;
			std::cout << "  mapB.erase(mapB.begin());" << std::endl;
			std::cout << "  mapC.erase(mapC.begin());" << std::endl << std::endl;

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

	mapE.swap(mapF);

			std::cout << "  mapE.swap(mapF);" << std::endl << std::endl;

	mapF[0] = 0;
	mapF[1] = 1;
	mapF[2] = 2;
	mapF[3] = 3;
	mapF[4] = 4;

	mapE[0] = 0;
	mapE[1] = 1;

			std::cout << "  mapF[0] = 0;" << std::endl;
			std::cout << "  mapF[1] = 1;" << std::endl;
			std::cout << "  mapF[2] = 2;" << std::endl;
			std::cout << "  mapF[3] = 3;" << std::endl;
			std::cout << "  mapF[4] = 4;" << std::endl << std::endl;

			std::cout << "  mapE[0] = 0;" << std::endl;
			std::cout << "  mapE[1] = 1;" << std::endl << std::endl;

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
}
void	testMap::member_functions__modifiers__clear() {
			std::cout << "Modifiers - clear():" << std::endl << std::endl;

	ft::map<int, int> mapA;
	ft::map<int, int> mapB;
	ft::map<int, int> mapC;

			std::cout << "  map<int, int> mapA;" << std::endl;
			std::cout << "  map<int, int> mapB;" << std::endl;
			std::cout << "  map<int, int> mapC;" << std::endl << std::endl;

	mapA[5] = 2;
	mapA[4] = 2;
	mapA[3] = 2;
	mapB[3] = 2;

			std::cout << "  mapA[5] = 2;" << std::endl;
			std::cout << "  mapA[4] = 2;" << std::endl;
			std::cout << "  mapA[3] = 2;" << std::endl;
			std::cout << "  mapB[3] = 2;" << std::endl << std::endl;


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

	mapA.clear();
	mapB.clear();
	mapC.clear();

			std::cout << "  mapA.clear();" << std::endl;
			std::cout << "  mapB.clear();" << std::endl;
			std::cout << "  mapC.clear();" << std::endl << std::endl;

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


			std::cout << "      mapB is		\n" ;
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

	mapA[5] = 2;
	mapA[4] = 2;
	mapA[3] = 2;
	mapB[3] = 2;
	mapB[4] = 4;
	mapB[5] = 5;
	mapC[1] = 1;

			std::cout << "  mapA[5] = 2;" << std::endl;
			std::cout << "  mapA[4] = 2;" << std::endl;
			std::cout << "  mapA[3] = 2;" << std::endl;
			std::cout << "  mapB[3] = 2;" << std::endl;
			std::cout << "  mapB[4] = 4;" << std::endl;
			std::cout << "  mapB[5] = 5;" << std::endl;
			std::cout << "  mapC[1] = 1;" << std::endl << std::endl;

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

	mapA.clear();
	mapB.clear();
	mapC.clear();

			std::cout << "  mapA.clear();" << std::endl;
			std::cout << "  mapB.clear();" << std::endl;
			std::cout << "  mapC.clear();" << std::endl << std::endl;

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


			std::cout << "      mapB is		\n" ;
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



}
void	testMap::member_functions__observers__key_comp() {
			std::cout << "Observers - key_comp():" << std::endl << std::endl;

	ft::map<char,int> mapA;
	ft::map<char,int>::key_compare mycomp = mapA.key_comp();

	mapA.insert(ft::pair<char, int>('a', 100));
	mapA.insert(ft::pair<char, int>('b', 200));
	mapA.insert(ft::pair<char, int>('c', 300));

			std::cout << "  map<char,int> mapA;" << std::endl;
			std::cout << "  map<char,int>::key_compare mycomp = mapA.key_comp();" << std::endl  << std::endl;

			std::cout << "  mapA.insert(ft::pair<char, int>('a', 100));" << std::endl;
			std::cout << "  mapA.insert(ft::pair<char, int>('b', 200));" << std::endl;
			std::cout << "  mapA.insert(ft::pair<char, int>('c', 300));" << std::endl << std::endl;

	char highest = mapA.rbegin()->first;

			std::cout << "  char highest = mapA.rbegin()->first;" << std::endl << std::endl;

	ft::map<char, int>::iterator it = mapA.begin();

			std::cout << "  map<char, int>::iterator it = mapA.begin();" << std::endl << std::endl;

			std::cout << "  do { std::cout << \"[ \" << it->first << \" : \" << it->second << \" ]\" }" << std::endl;
			std::cout << "  while ( mycomp((*it++).first, highest) );" << std::endl << std::endl;

			std::cout << "      mapA is		\n" ;

	do {
			std::cout << "		[ " << it->first << " : " << it->second << " ]" << std::endl;
	} while ( mycomp((*it++).first, highest) );

	std::cout << std::endl;
}
void	testMap::member_functions__observers__value_comp() {
			std::cout << "Observers - value_comp():" << std::endl << std::endl;

	ft::map<char,int> mapA;

	mapA.insert(ft::pair<char, int>('a', 100));
	mapA.insert(ft::pair<char, int>('b', 200));
	mapA.insert(ft::pair<char, int>('c', 300));

			std::cout << "  map<char,int> mapA;" << std::endl << std::endl;

			std::cout << "  mapA.insert(ft::pair<char, int>('a', 100));" << std::endl;
			std::cout << "  mapA.insert(ft::pair<char, int>('b', 200));" << std::endl;
			std::cout << "  mapA.insert(ft::pair<char, int>('c', 300));" << std::endl << std::endl;

	ft::pair<char,int> highest = *mapA.rbegin();

			std::cout << "  pair<char,int> highest = *mapA.rbegin();" << std::endl << std::endl;

	ft::map<char, int>::iterator it = mapA.begin();

			std::cout << "  map<char, int>::iterator it = mapA.begin();" << std::endl << std::endl;

			std::cout << "  do { std::cout << \"[ \" << it->first << \" : \" << it->second << \" ]\" }" << std::endl;
			std::cout << "  while ( mapA.value_comp()(*it++, highest));" << std::endl << std::endl;

			std::cout << "      mapA is		\n" ;

	do {
			std::cout << "		[ " << it->first << " : " << it->second << " ]" << std::endl;
	} while ( mapA.value_comp()(*it++, highest));

	std::cout << std::endl;
}
void	testMap::member_functions__operations__find() {
			std::cout << "Operations - find():" << std::endl << std::endl;

	ft::map<char, int> mapA;
	typedef ft::map<char, int>::iterator it;
	typedef ft::map<char, int>::const_iterator const_it;

	mapA.insert(ft::pair<char, int>('a', 100));
	mapA.insert(ft::pair<char, int>('b', 200));
	mapA.insert(ft::pair<char, int>('c', 300));
	mapA.insert(ft::pair<char, int>('d', 400));

			std::cout << "  map<char, int> mapA;" << std::endl << std::endl;
			std::cout << "  typedef ft::map<char, int>::iterator it;" << std::endl;
			std::cout << "  typedef ft::map<char, int>::const_iterator const_it;" << std::endl << std::endl;

			std::cout << "  mapA.insert(ft::pair<char, int>('a', 100));" << std::endl;
			std::cout << "  mapA.insert(ft::pair<char, int>('b', 200));" << std::endl;
			std::cout << "  mapA.insert(ft::pair<char, int>('c', 300));" << std::endl;
			std::cout << "  mapA.insert(ft::pair<char, int>('d', 400));" << std::endl << std::endl;

	it itA = mapA.find('a');
	it itB = mapA.find('b');
	it itC = mapA.find('c');
	it itD = mapA.find('d');
	it itE = mapA.find('A');
	it itF = mapA.find('X');

			std::cout << "  it itA = mapA.find('a');" << std::endl;
			std::cout << "  it itB = mapA.find('b');" << std::endl;
			std::cout << "  it itC = mapA.find('c');" << std::endl;
			std::cout << "  it itD = mapA.find('d');" << std::endl;
			std::cout << "  it itE = mapA.find('A');" << std::endl;
			std::cout << "  it itF = mapA.find('X');" << std::endl << std::endl;

			std::cout << "  if (itA != mapA.end()) " << std::endl;
			std::cout << "  if (itB != mapA.end()) " << std::endl;
			std::cout << "  if (itC != mapA.end()) " << std::endl;
			std::cout << "  if (itD != mapA.end()) " << std::endl;
			std::cout << "  if (itE != mapA.end()) " << std::endl;
			std::cout << "  if (itF != mapA.end()) " << std::endl << std::endl;

	if (itA != mapA.end()) {
			std::cout << "      mapA has ('a')" << std::endl;
	}
	if (itB != mapA.end()) {
			std::cout << "      mapA has ('b')" << std::endl;
	}
	if (itC != mapA.end()) {
			std::cout << "      mapA has ('c')" << std::endl;
	}
	if (itD != mapA.end()) {
			std::cout << "      mapA has ('d')" << std::endl;
	}
	if (itE == mapA.end()) {
			std::cout << "      mapA doesn't have ('A')" << std::endl;
	}
	if (itF == mapA.end()) {
			std::cout << "      mapA doesn't have ('X')" << std::endl << std::endl;
	}


	const_it itG = mapA.find('a');
	const_it itH = mapA.find('b');
	const_it itI = mapA.find('c');
	const_it itJ = mapA.find('d');
	const_it itK = mapA.find('A');
	const_it itL = mapA.find('X');

			std::cout << "  const_it itG = mapA.find('a');" << std::endl;
			std::cout << "  const_it itH = mapA.find('b');" << std::endl;
			std::cout << "  const_it itI = mapA.find('c');" << std::endl;
			std::cout << "  const_it itJ = mapA.find('d');" << std::endl;
			std::cout << "  const_it itK = mapA.find('A');" << std::endl;
			std::cout << "  const_it itL = mapA.find('X');" << std::endl << std::endl;

			std::cout << "  if (itG != mapA.end()) " << std::endl;
			std::cout << "  if (itH != mapA.end()) " << std::endl;
			std::cout << "  if (itI != mapA.end()) " << std::endl;
			std::cout << "  if (itJ != mapA.end()) " << std::endl;
			std::cout << "  if (itK != mapA.end()) " << std::endl;
			std::cout << "  if (itL != mapA.end()) " << std::endl << std::endl;

	if (itG != mapA.end()) {
			std::cout << "      mapA has ('a')" << std::endl;
	}
	if (itH != mapA.end()) {
			std::cout << "      mapA has ('b')" << std::endl;
	}
	if (itI != mapA.end()) {
			std::cout << "      mapA has ('c')" << std::endl;
	}
	if (itJ != mapA.end()) {
			std::cout << "      mapA has ('d')" << std::endl;
	}
	if (itK == mapA.end()) {
			std::cout << "      mapA doesn't have ('A')" << std::endl;
	}
	if (itL == mapA.end()) {
			std::cout << "      mapA doesn't have ('X')" << std::endl;
	}


}
void	testMap::member_functions__operations__count() {
			std::cout << "Operations - count():" << std::endl << std::endl;

	ft::map<char, int> mapA;
	ft::map<char, int> mapB;

	mapA.insert(ft::pair<char, int>('a', 100));
	mapA.insert(ft::pair<char, int>('b', 200));
	mapA.insert(ft::pair<char, int>('c', 300));
	mapA.insert(ft::pair<char, int>('d', 400));

			std::cout << "  map<char, int> mapA;" << std::endl;
			std::cout << "  map<char, int> mapB;" << std::endl << std::endl;

			std::cout << "  mapA.insert(ft::pair<char, int>('a', 100));" << std::endl;
			std::cout << "  mapA.insert(ft::pair<char, int>('b', 200));" << std::endl;
			std::cout << "  mapA.insert(ft::pair<char, int>('c', 300));" << std::endl;
			std::cout << "  mapA.insert(ft::pair<char, int>('d', 400));" << std::endl << std::endl;

			std::cout << "      mapA.count('a') =	" << mapA.count('a') << std::endl;
			std::cout << "      mapA.count('x') =	" << mapA.count('x') << std::endl;
			std::cout << "      mapA.count('b') =	" << mapA.count('b') << std::endl;
			std::cout << "      mapA.count('f') =	" << mapA.count('f') << std::endl;
			std::cout << "      mapA.count('c') =	" << mapA.count('c') << std::endl << std::endl;
			std::cout << "      mapB.count('Z') =	" << mapB.count('Z') << std::endl;
			std::cout << "      mapB.count('X') =	" << mapB.count('X') << std::endl << std::endl;
}
void	testMap::member_functions__operations__lower_bound() {
			std::cout << "Operations - lower bound():" << std::endl << std::endl;

	ft::map<char, int> mapA;
	ft::map<char, int>::iterator itA;
	ft::map<char, int>::iterator itB;

			std::cout << "  map<char, int> mapA;" << std::endl << std::endl;

			std::cout << "  map<char, int>::iterator itA;" << std::endl;
			std::cout << "  ft::map<char, int>::iterator itB;" << std::endl << std::endl;

	mapA['a'] = 20;
	mapA['b'] = 40;
	mapA['c'] = 60;
	mapA['d'] = 80;
	mapA['e'] = 100;

			std::cout << "  mapA['a'] = 20;" << std::endl;
			std::cout << "  mapA['b'] = 40;" << std::endl;
			std::cout << "  mapA['c'] = 60;" << std::endl;
			std::cout << "  mapA['d'] = 80;" << std::endl;
			std::cout << "  mapA['e'] = 100;" << std::endl << std::endl;

	itA = mapA.lower_bound ('b');
	itB = mapA.lower_bound ('d');

			std::cout << "  itA = mapA.lower_bound ('b');" << std::endl;
			std::cout << "  itB = mapA.lower_bound ('d');" << std::endl << std::endl;

	mapA.erase(itA, itB);

			std::cout << "  mapA.erase(itA, itB);" << std::endl << std::endl;


			std::cout << "      mapA is		" ;
			for ( struct { int i; ft::map<char, int>::iterator itA; } s = {0, mapA.begin()}; s.itA != mapA.end(); s.itA++) {
				if (s.i == 0)
					std::cout << "[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				else
					std::cout << "      			[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				s.i = 1;
			}
			std::cout << "      mapA.size() is	" << mapA.size() << std::endl;
			std::cout << std::endl;

	mapA['a'] = 20;
	mapA['b'] = 40;
	mapA['c'] = 60;
	mapA['d'] = 80;
	mapA['e'] = 100;

			std::cout << "  mapA['a'] = 20;" << std::endl;
			std::cout << "  mapA['b'] = 40;" << std::endl;
			std::cout << "  mapA['c'] = 60;" << std::endl;
			std::cout << "  mapA['d'] = 80;" << std::endl;
			std::cout << "  mapA['e'] = 100;" << std::endl << std::endl;

	itA = mapA.lower_bound ('x');
	itB = mapA.lower_bound ('z');

			std::cout << "  itA = mapA.lower_bound ('x');" << std::endl;
			std::cout << "  itB = mapA.lower_bound ('z');" << std::endl << std::endl;

	mapA.erase(itA, itB);


			std::cout << "      mapA is		" ;
			for ( struct { int i; ft::map<char, int>::iterator itA; } s = {0, mapA.begin()}; s.itA != mapA.end(); s.itA++) {
				if (s.i == 0)
					std::cout << "[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				else
					std::cout << "      			[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				s.i = 1;
			}
			std::cout << "      mapA.size() is	" << mapA.size() << std::endl;
			std::cout << std::endl;

	itA = mapA.lower_bound ('a');
	itB = mapA.lower_bound ('b');

			std::cout << "  itA = mapA.lower_bound ('a');" << std::endl;
			std::cout << "  itB = mapA.lower_bound ('b');" << std::endl << std::endl;

	mapA.erase(itA, itB);


			std::cout << "      mapA is		" ;
			for ( struct { int i; ft::map<char, int>::iterator itA; } s = {0, mapA.begin()}; s.itA != mapA.end(); s.itA++) {
				if (s.i == 0)
					std::cout << "[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				else
					std::cout << "      			[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				s.i = 1;
			}
			std::cout << "      mapA.size() is	" << mapA.size() << std::endl;
			std::cout << std::endl;
}
void	testMap::member_functions__operations__upper_bound() {
		std::cout << "Operations - upper bound():" << std::endl << std::endl;

	ft::map<char, int> mapA;
	ft::map<char, int>::iterator itA;
	ft::map<char, int>::iterator itB;

			std::cout << "  map<char, int> mapA;" << std::endl << std::endl;

			std::cout << "  map<char, int>::iterator itA;" << std::endl;
			std::cout << "  ft::map<char, int>::iterator itB;" << std::endl << std::endl;

	mapA['a'] = 20;
	mapA['b'] = 40;
	mapA['c'] = 60;
	mapA['d'] = 80;
	mapA['e'] = 100;

			std::cout << "  mapA['a'] = 20;" << std::endl;
			std::cout << "  mapA['b'] = 40;" << std::endl;
			std::cout << "  mapA['c'] = 60;" << std::endl;
			std::cout << "  mapA['d'] = 80;" << std::endl;
			std::cout << "  mapA['e'] = 100;" << std::endl << std::endl;

	itA = mapA.upper_bound ('b');
	itB = mapA.upper_bound ('d');

			std::cout << "  itA = mapA.upper_bound ('b');" << std::endl;
			std::cout << "  itB = mapA.upper_bound ('d');" << std::endl << std::endl;

	mapA.erase(itA, itB);

			std::cout << "  mapA.erase(itA, itB);" << std::endl << std::endl;


			std::cout << "      mapA is		" ;
			for ( struct { int i; ft::map<char, int>::iterator itA; } s = {0, mapA.begin()}; s.itA != mapA.end(); s.itA++) {
				if (s.i == 0)
					std::cout << "[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				else
					std::cout << "      			[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				s.i = 1;
			}
			std::cout << "      mapA.size() is	" << mapA.size() << std::endl;
			std::cout << std::endl;

	mapA['a'] = 20;
	mapA['b'] = 40;
	mapA['c'] = 60;
	mapA['d'] = 80;
	mapA['e'] = 100;

			std::cout << "  mapA['a'] = 20;" << std::endl;
			std::cout << "  mapA['b'] = 40;" << std::endl;
			std::cout << "  mapA['c'] = 60;" << std::endl;
			std::cout << "  mapA['d'] = 80;" << std::endl;
			std::cout << "  mapA['e'] = 100;" << std::endl << std::endl;

	itA = mapA.upper_bound ('x');
	itB = mapA.upper_bound ('z');

			std::cout << "  itA = mapA.upper_bound ('x');" << std::endl;
			std::cout << "  itB = mapA.upper_bound ('z');" << std::endl << std::endl;

	mapA.erase(itA, itB);


			std::cout << "      mapA is		" ;
			for ( struct { int i; ft::map<char, int>::iterator itA; } s = {0, mapA.begin()}; s.itA != mapA.end(); s.itA++) {
				if (s.i == 0)
					std::cout << "[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				else
					std::cout << "      			[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				s.i = 1;
			}
			std::cout << "      mapA.size() is	" << mapA.size() << std::endl;
			std::cout << std::endl;

	itA = mapA.upper_bound ('a');
	itB = mapA.upper_bound ('b');

			std::cout << "  itA = mapA.upper_bound ('a');" << std::endl;
			std::cout << "  itB = mapA.upper_bound ('b');" << std::endl << std::endl;

	mapA.erase(itA, itB);


			std::cout << "      mapA is		" ;
			for ( struct { int i; ft::map<char, int>::iterator itA; } s = {0, mapA.begin()}; s.itA != mapA.end(); s.itA++) {
				if (s.i == 0)
					std::cout << "[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				else
					std::cout << "      			[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				s.i = 1;
			}
			std::cout << "      mapA.size() is	" << mapA.size() << std::endl;
			std::cout << std::endl;

	mapA['a'] = 20;
	mapA['b'] = 40;
	mapA['c'] = 60;
	mapA['d'] = 80;
	mapA['e'] = 100;

			std::cout << "  mapA['a'] = 20;" << std::endl;
			std::cout << "  mapA['b'] = 40;" << std::endl;
			std::cout << "  mapA['c'] = 60;" << std::endl;
			std::cout << "  mapA['d'] = 80;" << std::endl;
			std::cout << "  mapA['e'] = 100;" << std::endl << std::endl;

	itA = mapA.upper_bound ('d');
	itB = mapA.upper_bound ('e');

			std::cout << "  itA = mapA.upper_bound ('d');" << std::endl;
			std::cout << "  itB = mapA.upper_bound ('e');" << std::endl << std::endl;

	mapA.erase(itA, itB);


			std::cout << "      mapA is		" ;
			for ( struct { int i; ft::map<char, int>::iterator itA; } s = {0, mapA.begin()}; s.itA != mapA.end(); s.itA++) {
				if (s.i == 0)
					std::cout << "[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				else
					std::cout << "      			[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				s.i = 1;
			}
			std::cout << "      mapA.size() is	" << mapA.size() << std::endl;
			std::cout << std::endl;

	mapA['a'] = 20;
	mapA['b'] = 40;
	mapA['c'] = 60;
	mapA['d'] = 80;
	mapA['e'] = 100;

			std::cout << "  mapA['a'] = 20;" << std::endl;
			std::cout << "  mapA['b'] = 40;" << std::endl;
			std::cout << "  mapA['c'] = 60;" << std::endl;
			std::cout << "  mapA['d'] = 80;" << std::endl;
			std::cout << "  mapA['e'] = 100;" << std::endl << std::endl;

	itA = mapA.upper_bound ('a');
	itB = mapA.upper_bound ('e');

			std::cout << "  itA = mapA.upper_bound ('a');" << std::endl;
			std::cout << "  itB = mapA.upper_bound ('e');" << std::endl << std::endl;

	mapA.erase(itA, itB);


			std::cout << "      mapA is		" ;
			for ( struct { int i; ft::map<char, int>::iterator itA; } s = {0, mapA.begin()}; s.itA != mapA.end(); s.itA++) {
				if (s.i == 0)
					std::cout << "[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				else
					std::cout << "      			[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
				s.i = 1;
			}
			std::cout << "      mapA.size() is	" << mapA.size() << std::endl;
			std::cout << std::endl;
}
void	testMap::member_functions__operations__equal_range() {
		std::cout << "Operations - equal range():" << std::endl << std::endl;

	ft::map<char, int> mapA;
	ft::pair<ft::map<char, int>::iterator, ft::map<char, int>::iterator> ret;

			std::cout << "  map<char, int> mapA;" << std::endl << std::endl;
			std::cout << "  pair<ft::map<char, int>::iterator, ft::map<char, int>::iterator> ret;"
					  << std::endl << std::endl;

	mapA['a'] = 20;
	mapA['b'] = 40;
	mapA['c'] = 60;
	mapA['d'] = 80;
	mapA['e'] = 100;

			std::cout << "  mapA['a'] = 20;" << std::endl;
			std::cout << "  mapA['b'] = 40;" << std::endl;
			std::cout << "  mapA['c'] = 60;" << std::endl;
			std::cout << "  mapA['d'] = 80;" << std::endl;
			std::cout << "  mapA['e'] = 100;" << std::endl << std::endl;

	ret = mapA.equal_range('a');

			std::cout << "  ret = mapA.equal_range('a');" << std::endl << std::endl;

			std::cout << "      ret.first->first = " << ret.first->first << std::endl;
			std::cout << "      ret.second->first = " << ret.second->first << std::endl << std::endl;

	ret = mapA.equal_range('b');

			std::cout << "  ret = mapA.equal_range('b');" << std::endl << std::endl;

			std::cout << "      ret.first->first = " << ret.first->first << std::endl;
			std::cout << "      ret.second->first = " << ret.second->first << std::endl << std::endl;

	ret = mapA.equal_range('c');

			std::cout << "  ret = mapA.equal_range('c');" << std::endl << std::endl;

			std::cout << "      ret.first->first = " << ret.first->first << std::endl;
			std::cout << "      ret.second->first = " << ret.second->first << std::endl << std::endl;

	ret = mapA.equal_range('d');

			std::cout << "  ret = mapA.equal_range('d');" << std::endl << std::endl;

			std::cout << "      ret.first->first = " << ret.first->first << std::endl;
			std::cout << "      ret.second->first = " << ret.second->first << std::endl << std::endl;

	ret = mapA.equal_range('e');

			std::cout << "  ret = mapA.equal_range('e');" << std::endl << std::endl;

			std::cout << "      ret.first->first = " << ret.first->first << std::endl;
			std::cout << "      ret.second->first = " << ret.second->first << std::endl << std::endl;

	ret = mapA.equal_range('f');

			std::cout << "  ret = mapA.equal_range('f');" << std::endl << std::endl;

			std::cout << "      ret.first->first = " << ret.first->first << std::endl;
			std::cout << "      ret.second->first = " << ret.second->first << std::endl << std::endl;


}
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

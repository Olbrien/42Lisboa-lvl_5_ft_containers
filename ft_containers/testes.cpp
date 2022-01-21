#include <iostream>

class teste {
	public:
		teste() : _i(5) {};
		~teste() {};

		void func(int i) {
			std::cout << "here";
		}

	private:
		const int _i;
};

int main() {
	teste a;

	a.func(5);

}

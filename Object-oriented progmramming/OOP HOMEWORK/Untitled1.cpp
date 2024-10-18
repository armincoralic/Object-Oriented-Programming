#include <iostream>
namespace A {
namespace B {
	int a=1;
} // namespace B
	int b;
	int num = 11;
} // namespace A
	
	using namespace A;

int main() {
	int num = 5;
	int b = 10;
	std::cout << b << std::endl;
	std::cout << A::B::a << std::endl;
	std::cout << ::b << std::endl;
	std::cout << B::a << std::endl;
	std::cout << A::num << std::endl;
	return 0;
}

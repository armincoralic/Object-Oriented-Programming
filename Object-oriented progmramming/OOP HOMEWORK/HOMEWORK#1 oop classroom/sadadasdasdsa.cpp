#include <iostream>

int a=0;

 namespace A{
	 namespace B{
	int a;
	}
	int b;
}

using namespace A::B;

int main()
{
	a=b;
	std::cout<<a;
	return 0;
}

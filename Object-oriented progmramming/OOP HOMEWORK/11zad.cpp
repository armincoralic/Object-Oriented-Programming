#include <iostream>
int main()
{
	int a;
	const char* rez;
	std::cin>>a;
	rez = (a>0) ? 
	"broj je pozitivan" : 
	"broj je negativan";
	std::cout<<rez;
}

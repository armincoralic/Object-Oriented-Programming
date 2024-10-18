#include <iostream>
int main()
{
	int n;
	int suma=0;
	std::cout<<"unesite n: ";
	std::cin>>n;
	for(int i=1; i<=n; ++i)
	{
		suma+=i;
	}
	std::cout<<suma;
	return 0;
}

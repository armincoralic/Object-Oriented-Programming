#include <iostream>
int main()
{
	int n;
	int f=1;
	std::cout<<"Unesi n: ";
	std::cin>>n;
	for(int i=1; i<=n; i++)
	{
		f=f*i;
	}
	std::cout<<f;
	return 0;
}

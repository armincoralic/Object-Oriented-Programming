#include <iostream>
int main()
{
	int n;
	do
	{
		std::cout<<"unesite paran broj: ";
		std::cin>>n;
		if(n%2==0)
		{
			std::cout<<"Unos tacan"<<std::endl;
			continue;
		}
		else
		{
			std::cout<<"Unos netacan"<<std::endl;
			continue;
		}
	}
	while(n>0);
	
	return 0;
}

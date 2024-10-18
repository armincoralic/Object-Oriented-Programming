#include <iostream>

int main()
{
	int a;
	std::cout<<"unesite prirodan broj: ";
	while(std::cin>>a)
	{
		if(a%2==0)
		{
			std::cout<<"broj je paran"<<std::endl;
			
		}
		else
		{
			std::cout<<"broj je neparan"<<std::endl;
			
		}
	}
	return 0;
}

#include <iostream>

int main()
{
	int a;
	std::cout<<"unesi broj: ";
	while(std::cin>>a)
	{
		if(a>0)
		{
			std::cout<<"broj je pozitivan"<<std::endl;
			
		}
		else if (a<0)
		{
			std::cout<<"broj je negativan"<<std::endl;
			
		}
		else
		{
			std::cout<<"Nula"<<std::endl;
		}
	}
	return 0;
}

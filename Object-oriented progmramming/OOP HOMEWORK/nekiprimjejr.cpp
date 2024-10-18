#include<iostream>
#include<typeinfo>
int main()
{
	for(int i=0; i<=255; i++)
	{
		std::cout<<"Id: "<<i<<" "<<">>"<<(char) i<<"<<"<<std::endl;
	}
}

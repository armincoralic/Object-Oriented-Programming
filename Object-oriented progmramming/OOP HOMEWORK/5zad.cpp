#include <iostream>

int main()
{
	char a;
	std::cout<<"Unesi karakter: ";
	std::cin>>a;
	if(a>='A' && a<='Z')
	{
		std::cout<<"veliko slovo "<<a<<std::endl;
	}
	else if(a>='a' && a<='z')
	{
		std::cout<<"malo slovo"<<a<<std::endl;
	}
	else if(isdigit(a))
	{
		std::cout<<"broj";
	}
	else
	{
		std::cout<<"Unijeli ste karakter "<<a<<std::endl;
	}
	return 0;
}

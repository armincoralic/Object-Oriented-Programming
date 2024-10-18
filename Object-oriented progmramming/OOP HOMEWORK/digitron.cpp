#include<iostream>
int main()
{
	double a, b, c;
	int stp=1;
	char o;
	int end;
	std::cin>>end;
	while (end!=0)
	{
	std::cout<<"******************"<<std::endl;
	std::cout<<"Vrijednost1: ";
	std::cin>>a;
	
	std::cout<<"Operacija: ";
	std::cin>>o;
	if(o!='+' && o!='-' && o!='/' && o!='*' && o!='^')
	{
		std::cout<<"pogresna operacija"<<std::endl;
		break;
	}
	
	

	std::cout<<"Vrijednost2: ";
	std::cin>>b;
	
	switch(o)
	{
		case '+':
			c=a+b;
			std::cout<<"Rezultat: "<<c<<std::endl;
		break;
		
		case '-':
			c=a-b;
			std::cout<<"Rezultat: "<<c<<std::endl;
		break;
		
		case '/':
			if(b==0)
			{
				std::cout<<"ne mozete dijeliti s nulom";
			}
			else
			{
			c=a/b;
			std::cout<<"Rezultat: "<<c<<std::endl;
			}
			break;
			
		case '*':
			c=a*b;
			std::cout<<"Rezultat: "<<c<<std::endl;
		break;
		
		case '^':
			while(b!=0)
			{
				stp*=a;
				--b;
			}
			std::cout<<"Rezultat: "<<stp<<std::endl;
		break;
			
	}
	
	}
	return 0;
	
}

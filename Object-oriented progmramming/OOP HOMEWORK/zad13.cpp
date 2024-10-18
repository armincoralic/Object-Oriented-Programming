#include<iostream>
int main()
{
	int a, b, c;
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
	if(o!='+' , '-' , '/' , '*' , '^')
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
			c=a^b;
			std::cout<<"Rezultat: "<<c<<std::endl;
		break;
			
	}
	
	}
	return 0;
	
}

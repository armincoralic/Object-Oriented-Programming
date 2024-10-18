#include<iostream>
int main()
{
	int n;
	bool prost;
	std::cout<<"Unesi n: ";
	std::cin>>n;
	std::cout<<"**************"<<std::endl;
	
    std::cout << "Prosti brojevi" <<std::endl;
    std::cout<<"**************"<<std::endl;
    for (int i=1; i<=n; i++)
     {
	 	prost=true;
      	for (int j=2; j < i && prost==true;j++)
           if (i%j==0) 
		   {
		   	prost=false;
		   }
      		if (prost==true) 
		  {
		  	std::cout << "  " << i ;
		  }
      }
    return 0;
	
}

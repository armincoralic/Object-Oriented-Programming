#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>
#include <vector>

using namespace std;
int main() {
	int n;
	
	cin>>n;
	vector<int> vektor;
	for (int i; i<=n; i++)
	{
  	    // Omogucava da svaki put prilikom pokretanja programa
	                    // dobijete novi random broj                  
  	int a = rand()%1000;       // Generira random cijeli broj.
  	//int b = rand() % 100; // Generira random broj u opsegu od 0-100
  	//int c = 25 + rand() % 50; // Generira random broj u opsegu 25-75
  	std::cout << "a = " << a << std::endl;
  
  	vektor.push_back(a);
  	
  	
  	}
  	for(int j=0; j<vektor.size(); j++)
  	{
  		cout<<vektor.at(j)<<" ";
	  }
  	
  	
}


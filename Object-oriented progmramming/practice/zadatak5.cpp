#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	vector <string> vektor;
	string a;
	int b;
	cout<<"unesi broj recenica: ";
	cin>>b;
	for(int i=0; i<b; i++)
	{
		cout<<"Unesi recenicu: ";
		cin>>a;
		vektor.push_back(a);
	}
	for(int j=0; j<=vektor.size(); j++)
		{
			sort(vektor.begin(), vektor.end());
			cout<<"+ "<<vektor.at(j)<<endl;
		}
	
}

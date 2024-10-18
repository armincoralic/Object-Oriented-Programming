#include <iostream>
#include <string>
using namespace std;
int main()
{
	string recenica;
	cout<<"Unesi recenicu: ";
	getline(cin, recenica);
	for(int i=0; i<recenica.length();i++)
	{
		if(recenica[i]>='A' && recenica[i]<='Z')
		{
			recenica[i]+=32;
		}
		else if(recenica[i]>='a' && recenica[i]<='z')
		{
			recenica[i]-=32;
		}
	}
	cout<<recenica;
}

#include<iostream>
#include<vector>
#include<stdexcept>
#include<string>
using namespace std;

int main()
{
	int n;
	int a;
	int b;
	vector<int> vec1;
	do
	{
		cin>>n;
		vec1.push_back(n);
	} while(cin>>n);
	
	cin.clear();
	cin.ignore(1000, '\n');
	
	a=vec1.size();
	cout<<endl;
	cout<<"Unesi index: ";
	cin>>b;
	
	if(b>a)
	{
	try
	{
		//throw "arminjo ronaldinjo";
		throw vec1.at(b);
		//vec1.at(100);
	}
	catch(...)
	{
		cout<<"neki error"<<endl;
	}
	}
	
	cout<<"Prog radi dalje.."<<endl;
}

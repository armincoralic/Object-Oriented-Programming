#include<iostream>
#include<vector>
#include<stdexcept>
#include<string>
using namespace std;

int main()
{
	vector<int> vec1{1,2,3,4,5};
	try
	{
		throw "arminjo ronaldinjo";
		//throw 5;
		//vec1.at(100);
	}
	catch(const int& error)
	{
		cout<<"win"<<endl;
	}
	catch(const string& error)
	{
		cout<<"win"<<endl;
	}
	catch(...) //genericki catch blok
	{
		cout<<error.what();
	}
	
	cout<<"Prog radi dalje.."<<endl;
}

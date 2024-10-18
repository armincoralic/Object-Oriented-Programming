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
		cout<<"int error"<<endl;
	}
	catch(const string& error)
	{
		cout<<"string error "<<endl;
	}
	catch(const char*& error){
		cout<<"konst car zvijezda"<<endl;
		
	}
	catch(const out_of_range& error)
	{
		cout<<error.what()<<endl;
	}
	
	cout<<"Prog radi dalje.."<<endl;
}

#include<iostream>
#include<vector>
#include<iterator>
#include<string>
#include<list>
using namespace std;

list<int> parni_neparni(list<int>::const_iterator pocetak,
list<int>::const_iterator kraj)
{
	list<int> lista;
	while(pocetak!=kraj)
	{
		if((*pocetak)%2==0)
		{
			lista.push_front(*pocetak);
		}
		else
		{
			lista.push_back(*pocetak);
		}
		pocetak++;
	}
	return lista;
}


int main()
{
	list<int> nums;
	list<int>::const_iterator it1;
	int n;
	while(cin>>n)
	{
		nums.push_back(n);
	}
	auto p=nums.begin();
	auto k=nums.end();
	auto nova=parni_neparni(p,k);
	
	for(it1=nova.begin(); it1!=nova.end(); it1++)
	{
		cout<<*it1<<" ";	
	}
}

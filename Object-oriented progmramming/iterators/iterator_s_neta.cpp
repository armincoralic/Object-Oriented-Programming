#include<iostream>
#include<vector>
#include<string>
#include<iterator>

using namespace std;

int main()
{
	vector<int> nums2={1,2,3,4,5,6};
	vector<int>::iterator itr;
	
	for(itr=nums2.begin(); itr<nums2.end();itr++)
	{
		cout<<*itr<<endl;
	}
	cout<<endl;
	vector<int>::iterator itr2=nums2.begin();
	
	advance(itr2,2);
	cout<<*itr2<<endl;
	cout<<endl;
	
	auto itr3=next(itr2,2);
	cout<<*itr3<<endl;
	
	auto itr4=prev(itr2,1);
	cout<<*itr4<<endl;
	return 0;
}

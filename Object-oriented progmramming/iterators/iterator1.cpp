#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	vector<int> vec = {2,3,4,5};
	auto a = begin(vec);
	vector<int>::const_iterator it = a++;
	*a = 100;
	int b = *it;
	cout<<b;
}

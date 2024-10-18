#include <iostream>
#include <string>

using namespace std;
int main()
{
	int a=10;
	auto lambda1=[a](){
		cout<<a<<endl;
	};
	lambda1();
}

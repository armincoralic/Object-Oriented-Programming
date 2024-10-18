#include <iostream>
#include <string>

using namespace std;
int main()
{
	int a=10;
	auto lambda1=[a]() mutable { //mutable se koristi da se mogu mijenjat vrijednosti varijabli u izrazu
		a=5;
		cout<<a<<endl;
	};
	lambda1();
	
	cout<<"a nakon: "<<a;

}

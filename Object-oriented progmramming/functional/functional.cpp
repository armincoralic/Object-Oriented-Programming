#include<iostream>
#include<vector>
#include<functional>
#include<vector>
#include<algorithm>
using namespace std;

int foo1(function<(int, int)> foo)
{
	return foo(1,2);
}
int suma(int a, int b)
{
	return 2;
}

int main()
{
	int rez=foo1(suma);
	cout<<rez;
}

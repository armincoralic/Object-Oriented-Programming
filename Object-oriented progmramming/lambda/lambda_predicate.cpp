#include <iostream>
#include <string>
#include<vector>
#include<algorithm>

using namespace std;
int main()
{
	vector<int> vec1 {1,2,3,4,5,6,7,8,9,10};
	//predicate prima uvijek dva elementa
	auto ispis= [](vector<int>& vec1){
		for(int i=0; i<vec1.size(); i++)
		{
			cout<<vec1.at(i)<<endl;
		}
		cout<<endl;
	};
	
	
	auto predicate = [](int a, int b){
		return a>b;	
	};
	
	
	sort(vec1.begin(), vec1.end(), predicate);
	ispis(vec1);
}

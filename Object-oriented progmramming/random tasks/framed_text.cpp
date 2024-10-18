#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<set>
using namespace std;

int main()
{
	vector<string> vec;
	string rijec;
	string longest, shortest;
	shortest=longest;
	do
	{
		cout<<"Unesi rijec: ";
		getline(cin, rijec);
		if(rijec.empty())
		{
			break;
		}
		if(rijec.size()>longest.size())
		{
			longest=rijec;
		}
		else if(rijec.size()<shortest.size())
		{
			shortest=rijec;
		}
		vec.push_back(rijec);
	}while(true);
	cout<<endl;
	sort(vec.begin(), vec.end());
	string najduza_linija(longest.size()+4,'+');
	
	cout<<najduza_linija<<endl;;
	for(int i=0; i<vec.size(); i++)
	{
		string desni_plus(longest.size()-vec.at(i).size(),' ');
		cout<<"+ "<<vec.at(i)<<desni_plus<<" +"<<endl;
	}
	cout<<najduza_linija;
	
	
}

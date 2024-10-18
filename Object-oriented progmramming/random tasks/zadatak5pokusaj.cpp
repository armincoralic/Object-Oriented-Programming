#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	vector <string> vektor;
	string a, longest, shortest;
	cout<<"Unesi rijec: ";
	shortest=longest=a;
	//while(cin>>a)
	while(true)
	{
        std::getline(std::cin, a);
        if (a.empty()) {
            // Ako je unos prazan (samo Enter), prekida se petlja
            break;
        }
		if(a=="0")
		{
			break;
		}
		
		if(a.size()>longest.size())
		{
			longest=a;
		}
		else if(a.size()<shortest.size())
		{
			shortest=a;
		}
		vektor.push_back(a);
		cout<<"Unesi rijec: ";
	}
	
	string prva_linija(longest.size()+4, '+');
	cout<<prva_linija<<endl;
	for(int j=0; j<vektor.size(); j++)
		{
			string plus_desno(longest.size()-vektor.at(j).size(),' ');
			cout<<"+ "<<vektor.at(j)<<plus_desno<<" +"<<endl;
			sort(vektor.begin(), vektor.end());
		}
	cout<<prva_linija;
}

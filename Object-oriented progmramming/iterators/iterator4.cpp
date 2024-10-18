#include <list>
#include <iostream>
#include <string>

using namespace std;

int main() {
  list<string> lista;
  string x;

  while ( cin >> x )
  	{
	  if(x=="0")
  		{
  		break;
	  }
    lista.push_back(x);
	}
  lista.sort();

  auto it = lista.begin();
  while ( it != lista.end() ) {
    cout << *it << endl;
    ++it;
  }
}


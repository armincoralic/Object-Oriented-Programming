#include <iostream>
#include <vector>
using namespace std;

int main() {
  int x;
  vector<int> v1, v2; //prva greska je bila ovdje, nije bio postavljen tip podataka za vektore
  while (cin >> x) // druga greska, bila je netacna sintaksa za unos
    v1.push_back(x);
  for (int i = 0; i < v1.size(); ++i) // treca greska, falilo je ; iza i<v1.size()
    v1.at(i) *= 2;
  return 0;
}

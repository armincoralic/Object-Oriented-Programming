#include<vector>
#include<iostream>
int main() {
  std::vector<int> vec;
  vec.push_back("1"); //treba upisati samo 1, bez navodnika,
  					//  jer ne mozemo stavljati u vector koji je tipa int const char* vrijednosti
  					
  vec.push_back("2"); //ovdje bi islo samo 2
  vec.push_back(3);
  vec.push_back(4);
  std::cout << "Size = " << vec.size() << std::endl;
  return 0;
}

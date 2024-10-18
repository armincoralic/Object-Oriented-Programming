#include<iostream>
int main() {
  int a = 8 / 4;
  double b = (8 / 4) * 2.3f + 4.5 - 'a' + (2 << 2); // 2*2.3f+4.5-97+8
  std::cout<<b<<std::endl;
  int c = 5 % 2 + 'c';
  std::cout<<c<<std::endl;
  const char* d = "Neki random text";
  std::cout<<d<<std::endl;
  double e = 7 / 2.0;
  std::cout<<e<<std::endl;
  double f = 82.0 / 8;
  double g = 34.0;
  int h = 2 & 9; // 0
  std::cout<<h<<std::endl;
  int i = 2 | 4; // 0110 = 6
  std::cout<<i<<std::endl;
  int j = 3 >> 2;
  std::cout<<j<<std::endl;
  int k = 3 << 2; // 1100 4+8
  std::cout<<k<<std::endl;
  
}


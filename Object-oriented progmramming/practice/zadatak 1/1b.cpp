#include <iostream>

namespace A { //namespace A - objasnjeno u primjeru pod a
int a = 50; // varijabla a=50 u namespaceu A
}

namespace B { //namespace B
int a = 100; //varijabla a=100 u namespaceu B
}

int a = 30; //globalna varijabla a=30
using namespace A; /*ispisivanje sadrzaja iz namespace A u globalni scope
 tj. a=50 */
 
int main() {
  using B::a; // koristenje varijable a=100 iz namespace B
  std::cout << a << std::endl; //ispis varijable a=100 koja je najbliza ovom coutu
}

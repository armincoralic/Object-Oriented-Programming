#include <iostream>

namespace A { int i = 10; }
namespace B { using A::i; }
int main() {
  int i = 20;
     	  using namespace B;
   std::cout << i << std::endl;
}



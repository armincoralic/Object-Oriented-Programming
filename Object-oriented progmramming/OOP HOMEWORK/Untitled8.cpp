#include <iostream>

int main(){
   for (unsigned int i = 0; i < 10; ++i) {
     if (!(i % 2)) {
      std::cout << i << ' ';
     }
   }
   int a=(!(3%2));
   std::cout<<a;
 }

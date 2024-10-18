#include <iostream>
namespace X {
int a = 100;
}
namespace Y {
int a = 200;
}
using namespace Y;
using namespace X;
int main() {
std::cout << a << std::endl;
return 0;
}


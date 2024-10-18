#include <iostream>

namespace A { int i = 10; }
int i = 20;
int main() {
using namespace A;
std::cout << ::i << std::endl;
}

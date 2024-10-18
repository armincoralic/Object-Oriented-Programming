#include <iostream>

namespace A {
std::string rijec = "mjesec";
namespace B {
std::string rijec = "sunce";
} // namespace B
} // namespace A
int main() {
using A::rijec;
std::cout << rijec << std::endl;
return 0;
}


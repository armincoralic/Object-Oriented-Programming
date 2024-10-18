#include <iostream>
namespace A {
std::string rijec = "mjesec";
namespace B {
std::string rijec = "sunce";
} // namespace B
} // namespace A
int main() {
using A::B::rijec;
std::cout << rijec << std::endl;
}

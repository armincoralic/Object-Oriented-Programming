#include <iostream>

namespace A { /* namespace A - namespace koristimo radi lakseg snalazenja u kodu, najvecu korist ima
				kada vise ljudi radi na jednom projektu, da bi se izbjeglo ponavljanje varijabli istog imena*/
int a = 50; //varijabla unutar namespacea A
}

namespace B { // namespace B
int a = 100; //varijabla a=100 unutar namespace B
}

using namespace A; // ispisivanje sadrzaja iz namspacea A u globalni scope - tj. a=50

int main() {
  using B::a; // uzimanje varijeble a iz namespacea B - a=100
  std::cout << a << std::endl; // ispisivanje varijable a koja je najbliza ovom ispisu, tj a=100
}

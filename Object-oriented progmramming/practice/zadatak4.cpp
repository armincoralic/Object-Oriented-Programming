#include <iostream>

int main() {
  for (auto i = 10u; i >= 0; i -= 2) { //tip varijable i je unsigned char i on je uvijek pozitivan, odnosno kada
  										//i=-1, izvrsi se drugi komplement i dobije se ogromna vrijednost
  										// tako da ce varijabla i uvijek biti veca od 0 i imamo beskonacnu petlju
    std::cout << i << std::endl;
  }
}

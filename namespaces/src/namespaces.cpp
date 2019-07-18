#include <iostream>
#include <cat.hpp>
#include <animals.hpp>

using namespace std;
using namespace jwp;

int main(){
  Cat cat; //from namespace jwp
  jwp::Cat cat2;
  cats::Cat cat3;

  cat.speak();
  cat2.speak();
  cat3.speak();

  cout << jwp::CATNAME << endl;
  cout << cats::CATNAME << endl;
  cout << CATNAME << endl;

  return 0;
}

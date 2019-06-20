#include <iostream>
#include <cat.hpp>

using namespace std;

int main(){
  Cat cat1;
  Cat cat2;

  cat1.makeHappy();
  cat1.speak();

  cat2.makeSad();
  cat2.speak();

  return 0;
}

#include <iostream>
#include <prototypes-and-includes.hpp>

using namespace std;

int main(){
  doSomething();
  doSomething();

  return 0;
}

void doSomething(){
  cout << "Hello" << endl;
}

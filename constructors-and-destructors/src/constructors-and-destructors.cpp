#include <iostream>
#include <cat.hpp>

using namespace std;

int main(){
  cout << "Starting program ..." << endl;
  {
    Cat cat1;
    cat1.speak();
  }
  cout << "Ending program ..." << endl;

  return 0;
}

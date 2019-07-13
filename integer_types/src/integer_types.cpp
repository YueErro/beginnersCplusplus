#include <iostream>
#include <limits>

using namespace std;

int main(){
  int value = 54656;
  long lValue = 1231654987945;
  short int sValue = 23434;
  unsigned int uValue = 2342343;

  cout << value << endl;
  // cout << "Max int value: " << INT_MAX << endl;
  // cout << "Min int value: " << INT_MIN << endl;
  cout << lValue << endl;
  cout << sValue << endl;
  cout << "Size of int: " << sizeof(int) << endl;
  cout << "Size of int: " << sizeof(short int) << endl;
  cout << uValue << endl;

  return 0;
}

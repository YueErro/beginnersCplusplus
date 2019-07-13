#include <iostream>

using namespace std;

int main(){
  bool bValue = true;
  char cValue = 'g';
  wchar_t wValue = 'i';

  cout << bValue << endl;
  cout << (int)cValue << endl;
  cout << "Size of char: " << sizeof(char) << endl;
  cout << (int)wValue << endl;
  cout << "Size of wchar_t: " << sizeof(wchar_t) << endl;

  return 0;
}

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
  float fValue = 123.456789;
  double dValue = 123.456789;
  long double lValue = 123.456789123456789;

  cout << sizeof(float) << endl;
  cout << setprecision(20) << fixed << fValue << endl;
  cout << setprecision(20) << fixed << dValue << endl;
  cout << setprecision(20) << fixed << lValue << endl;
  cout << "Sizeof long double: " << sizeof(lValue) << endl;

  return 0;
}

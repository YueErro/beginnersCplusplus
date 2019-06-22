#include <iostream>

using namespace std;

void manipulate(double *pValue){
  cout << "2. Value of int in manipulate: " << *pValue << endl;
  *pValue = 10.0;
  cout << "3. Value of int in manipulate: " << *pValue << endl;
}

int main(){
  int nValue = 8;
  int *pnValue = &nValue;
  double dValue = 123.4;

  cout << "Int value: " << nValue << endl;
  cout << "Pointer to int value: " << pnValue << endl;
  cout << "Pointer to int value: " << *pnValue << endl;
  cout << "======================" << endl;
  cout << "1. dValue: " << dValue << endl;
  manipulate(&dValue);
  cout << "4. dValue: " << dValue << endl;

  return 0;
}

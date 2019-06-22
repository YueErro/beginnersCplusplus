#include <iostream>

using namespace std;

void changeSomething(double &value){
  value = 123.4;
}

int main(){
  int v1 = 8;
  int &v2 = v1;
  v2 = 0;
  double value = 4.321;

  changeSomething(value);

  cout << value << endl;
  cout << "Value1: " << v1 << endl;
  cout << "Value2: " << v2 << endl;

  return 0;
}

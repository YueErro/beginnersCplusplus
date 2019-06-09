#include <iostream>

using namespace std;

int main(){
  int value1 = 7;
  int value2 = 4;
  bool condition1 = (value2 != 8) && (value1 == 10);
  bool condition2 = value1 < 10;

  if(value1 >= 5)
    cout << "Condition1: true" << endl;
  else
    cout << "Condition1: false" << endl;

  if(value1 == 7 && value2 < 3)
    cout << "Condition2: true" << endl;
  else
    cout << "Condition2: false" << endl;

  if(value1 == 7 || value2 < 3)
    cout << "Condition3: true" << endl;
  else
    cout << "Condition3: false" << endl;

  if(value2 != 8 && value1 == 10 || value1 < 10)
    cout << "Condition4: true" << endl;
  else
    cout << "Condition4: false" << endl;

  if (condition1 || condition2)
    cout << "Condition5: true" << endl;
  else
    cout << "Condition5: false" << endl;

  return 0;
}

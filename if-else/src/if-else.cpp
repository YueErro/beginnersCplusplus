#include <iostream>

using namespace std;

int main(){
  int value;

  cout << "1. \tAdd new record." << endl;
  cout << "2. \tDelete record." << endl;
  cout << "3. \tView record." << endl;
  cout << "4. \tSearch record." << endl;
  cout << "5. \tQuit record." << endl;
  cout << "Enter your selection > " << flush;
  cin >> value;

  if(value > 3){
    cout << "Insufficient privileges to use these menu option." << endl;
  }
  else{
    cout << "Privileges level sufficient." << endl;
  }
  if(value == 5){
    cout << "Quitting ..." << endl;
  }
  else{
    cout << "Not quitting." << endl;
  }

  return 0;
}

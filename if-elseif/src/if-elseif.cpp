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

  if(value == 1)
    cout << "Adding new record..." << endl;
  else if(value == 2)
    cout << "Deleting new record..." << endl;
  else if(value == 3)
    cout << "Viewing new record..." << endl;
  else if(value == 4)
    cout << "Searching new record..." << endl;
  else if(value == 5)
    cout << "Quitting new record..." << endl;
  else
    cout << "Invalid option." << endl;

  return 0;
}

#include <iostream>

using namespace std;

int main(){
  string password = "hello";
  string input;

  cout << "Enter your password > " << flush;
  cin >> input;

  if(input == password){
    cout << "Password accepted." << endl;
  }

  if(input != password){
    cout << "Access denied." << endl;
  }

  return 0;
}

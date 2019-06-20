#include <iostream>
#include <cat.hpp>

using namespace std;

void Cat::speak(){
  if(happy)
    cout << "Meouw!" << endl;
  else
    cout << "Ssss!" << endl;
}

void Cat::makeHappy(){
  happy = true;
}

void Cat::makeSad(){
  happy = false;
}

#include <iostream>
#include <cat.hpp>

using namespace std;

Cat::Cat(){
  cout << "Cat created" << endl;
  happy = true;
}

Cat::~Cat(){
  cout << "Cat destroyed." << endl;
}

void Cat::speak(){
  if(happy)
    cout << "Meouww!!" << endl;
  else
    cout << "Sssss!!" << endl;
}

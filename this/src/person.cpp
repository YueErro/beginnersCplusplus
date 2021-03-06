#include <person.hpp>
#include <sstream>

Person::Person(){
  name = "";
  age = 0;
}

Person::Person(string name, int age){
  this->name = name;
  this->age = age;

  cout << "Memory location of object: " << this << endl;
}

string Person::toString(){
  stringstream ss;

  ss << "Name: ";
  ss << name;
  ss << "; age: ";
  ss << age;

  return ss.str();
}

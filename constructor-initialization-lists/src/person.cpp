#include <person.hpp>
#include <sstream>

Person::Person():name("unnamed"), age(0){
}

Person::Person(string name, int age): name(name), age(age){
}

string Person::toString(){
  stringstream ss;

  ss << "Name: ";
  ss << name;
  ss << "; age: ";
  ss << age;

  return ss.str();
}

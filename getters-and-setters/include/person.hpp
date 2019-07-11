#ifndef PERSON_HPP
#define PERSON_HPP

#include <iostream>

using namespace std;

class Person{
  private:
    string name;

  public:
    Person();
    string toString();
    void setName(string newName);
    string getName();
};

#endif

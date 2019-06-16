#ifndef PERSON_HPP
#define PERSON_HPP

#include <iostream>

using namespace std;

class Person{
  private:
    string name;
    int age;

  public:
    Person();
    Person(string newName);
    Person(string newName, int newAge);
    string toString();
};

#endif

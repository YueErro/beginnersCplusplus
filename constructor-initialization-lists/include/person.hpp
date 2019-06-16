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
    Person(string name, int age);
    string toString();
};

#endif

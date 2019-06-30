#include <iostream>

using namespace std;

class Animal{
  public:
    void speak(){
      cout << "Grrr" << endl;
    }
};

class Cat: public Animal{
  public:
    void jump(){
      cout << "Cat jumping!" << endl;
    }
};

class Tiger: public Cat{
  public:
    void attackAntelope(){
      cout << "Attacking!" << endl;
    }
};

int main(){
  Animal a;
  Cat cat;
  Tiger tiger;

  a.speak();
  cat.jump();
  cat.speak();
  tiger.jump();
  tiger.speak();
  tiger.attackAntelope();

  return 0;
}

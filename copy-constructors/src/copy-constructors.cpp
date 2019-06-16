#include <iostream>

using namespace std;

class Animal{
  private:
    string name;

  public:
    Animal(){
      cout << "Animal created." << endl;
    }
    Animal(const Animal& other): name(other.name){
      cout << "Animal created by copying." << endl;
    }
    void setName(string name){
      this->name = name;
    }
    void speak() const{
      cout << "My name is: " << name << endl;
    }
};

int main(){
  Animal a1;

  a1.setName("Freddy");

  Animal a2 = a1;
  a2.speak();
  a2.setName("Bob");

  a1.speak();
  a2.speak();

  Animal a3(a1);
  a3.speak();

  return 0;
}

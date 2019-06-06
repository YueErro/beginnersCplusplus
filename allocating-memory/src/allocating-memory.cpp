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
    ~Animal(){
      cout << "Destructor called" << endl;
    }
    void setName(string name){
      this->name = name;
    }
    void speak() const{
      cout << "My name is: " << name << endl;
    }
};

int main(){
  Animal *pAnimal = new Animal[10];
  char *pMem = new char[1000];
  char c = 'a';
  c++;
  string name(5, c);

  cout << name << endl;

  pAnimal[5].setName("George");
  pAnimal[5].speak();

  delete [] pAnimal;
  delete [] pMem;


  return 0;
}

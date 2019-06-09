#include <iostream>

using namespace std;

class Animal{
  private:
    string name;

  public:
    void setName(string name){
      this->name = name;
    }
    void speak(){
      cout << "My name is: " << name << endl;
    }
};

int main(){
  const double PI = 3.141592;
  Animal animal;
  int value = 8;
  int *pValue = &value;
  int number = 11;

  animal.setName("Freddy");
  animal.speak();

  cout << PI << endl;
  cout << *pValue << endl;

  pValue = &number;
  *pValue = 12;

  cout << *pValue << endl;

  return 0;
}

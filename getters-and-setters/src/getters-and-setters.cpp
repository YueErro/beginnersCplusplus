#include <person.hpp>

int main(){
  Person p;

  p.setName("Yue Erro");

  cout << p.toString() << endl;

  cout << "Name of person with get method: " << p.getName() << endl;

  return 0;
}

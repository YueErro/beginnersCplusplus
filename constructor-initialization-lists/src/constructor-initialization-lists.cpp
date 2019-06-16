#include <person.hpp>

int main(){
  Person p1;
  Person p2("Leire", 22);
  Person p3("Yue", 22);

  cout << p1.toString() << endl;
  cout << p2.toString() << endl;
  cout << p3.toString() << endl;


  return 0;
}

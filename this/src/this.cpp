#include <person.hpp>

int main(){
  Person p1;
  Person p2("Leire", 22);
  Person p3("Yue", 22);

  cout << p2.toString() << "; memory location: " << &p2 << endl;
  cout << p3.toString() << "; memory location: " << &p3 << endl;


  return 0;
}

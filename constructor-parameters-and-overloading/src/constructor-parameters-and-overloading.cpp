#include <person.hpp>
#include <sstream>

int main(){
  Person p1;
  Person p2("Yue");
  Person p3("Leire", 22);

  cout << p1.toString() << endl;
  cout << p2.toString() << endl;
  cout << p3.toString() << endl;

  return 0;
}

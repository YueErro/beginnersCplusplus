#include <iostream>

using namespace std;

class Test{
  private:
    int id;
    static int count;

  public:
    static int const MAX = 99;

  public:
    Test(){
      id = ++count;
    }
    int getId(){
      return id;
    }
    static void showInfo(){
      cout << count << endl;
    }
};

int Test::count = 0;

int main(){
  Test t1;
  Test t2;

  cout << "Object 1 ID: " << t1.getId() << endl;
  cout << "Object 2 ID: " << t2.getId() << endl;
  cout << Test::MAX << endl;

  Test::showInfo();

  return 0;
}

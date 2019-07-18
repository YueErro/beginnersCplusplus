#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>

using namespace std;

namespace cats{
  const string CATNAME = "Freddy";

  class Cat{
    public:
      Cat();
      virtual ~Cat();
      void speak();
  };
}

#endif

#ifndef ANIMALS_HPP
#define ANIMALS_HPP

#include <iostream>

using namespace std;

namespace jwp{
  const string CATNAME = "Tiddles";

  class Cat{
    public:
      Cat();
      virtual ~Cat();
      void speak();
  };
}

#endif

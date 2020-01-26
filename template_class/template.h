// A very important concept
// Template definition couldn't be in .cpp
// Becase template couldn't be compile
// Once the complier know the type of the class!!!!!!!

#ifndef TEMPLATE_H
#define TEMPLATE_H

template <class T>
class Arithametic {
  public :
    Arithametic(T a, T b) {
      this->a = a;
      this->b = b;
    }

    T add() {
      T c;
      c = a + b;
      return c;
    };

  private :
    T a;
    T b;
};

#endif

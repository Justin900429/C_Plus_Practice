#include "template.h"

template <class T>
Arithametic<T>::Arithametic (T a, T b) {
  this->a = a;
  this->b = b;
}

template <class T>
T Arithametic<T>::add() {
  T c;
  c = a + b;
  return c;
}

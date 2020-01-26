#include <iostream>
#include "template.h"

int main() {
  Arithametic<int> count_int(10, 5);
  Arithametic<float> count_float(10.1, 5.1);

  std::cout << count_int.add() << std::endl;
  std::cout << count_float.add() << std::endl;
}

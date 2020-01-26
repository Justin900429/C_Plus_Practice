#include <iostream>
#include "user.h"
#include "teacher.h"

int main() {
  Coordinate point;
  std::cin >> point;
  std::cout << point << std::endl;

  Teacher teacher;
  std::cin >> teacher;
  std::cout << teacher;

  Coordinate &test = teacher;
  test.output();
}

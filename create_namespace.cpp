#include<iostream>

namespace utilz {
  // A Square function in namespace utilz
  int square(int number) {
    std::cout << "HaHa! Your in namespace utilz!" << std::endl;
    return number * number;
  }
}

namespace std {
  // A square functino in namespace std
  int square(int number) {
    std::cout << "HaHa! Your in namespace std!" << std::endl;
    return number * number;
  }
}

int main() {
  // Input the number by user
  int number;
  std::cin >> number;

  // Call the function in different namespace
  int result1 = utilz::square(number);
  int result2 = std::square(number);

  // Print the result
  std::cout << result1 << " " << result2 << std::endl;
}

#include<iostream>

using std::cout; using std::cin;
using std::endl;

class Test {
  public :
    // Use getter to get the private memeber
    void getNumber() {
      cout << number << endl;
    }

    // Use setter to set the value of the private number
    void setNumber(int tar) {
      number = tar;
    }

  private :
    // A private member
    int number;
};

int main() {
  // Alocate the test to the heap
  Test *test = new Test;

  test->setNumber(5);
  test->getNumber();

  // Free the memory we don't need
  delete test;
}

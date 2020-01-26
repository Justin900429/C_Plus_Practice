// Construction -> Initialize the object
// 1. Same name as class
// 2. No return type

#include<iostream>

using std::cin; using std::cout;
using std::endl;

class Test {
  public :
    // Default constructor
    Test() {
      cout << "Constructor works!" << endl;
    }

    // Parameter Constructor
    Test(int key) {
      cout << "Constructor works and return " << key << " !" << endl;

      // Set number to key
      number = key;
    }

    void display() {
      cout << number << " " << endl;
    }

    void setNumber(int tar) {
      number = tar;
    }


  private :
    int number;
};

int main() {
  Test t1;
  Test t2(3);

  Test *t3 = new Test(3);
}

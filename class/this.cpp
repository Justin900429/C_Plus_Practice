// "this" keyword
// Holds the address of the current object

#include<iostream>

using std::cin; using std::cout;
using std::endl;


class Test {
  public :
    // Default constructor
    Test() {
      cout << "this " << this << endl;
      cout << "Constructor works!" << endl;
    }

    // Parameter Constructor
    Test(int key) {
      cout << "this " << this << endl;
      cout << "Constructor works and return " << key << " !" << endl;

      // Set number to key
      this->number = key;
    }

    Test(int key1, int key2) {
      cout << "this " << this << endl;
      cout << "Constructor works and return " << key1 << " and " << key2 << " !" << endl;

      // Set Number and rollNumber
      this->number = key1;
      this->rollNumber = key2;
    }

    void display() {
      cout << this->number << " " << endl;
    }

    void setNumber(int tar) {
      number = tar;
    }

    void setRollNumber(int tar) {
      rollNumber = tar;
    }

    void setBoth(int tar1, int tar2) {
      number = tar1;
      rollNumber = tar2;
    }


  private :
    int number;
    int rollNumber;
};

int main() {
  Test t1;
  cout << "Address of t1 is " << &t1 << endl;

  Test t2(3);
  cout << "Address of t2 is " << &t2 << endl;

  Test t3(3, 6);
  cout << "Address of t3 is " << &t3 << endl;
  t3.display();


  Test *t4 = new Test(3);
  cout << "Address of t4 is " << t4 << endl;

  Test *t5 = new Test(3, 6);
  cout << "Address of t5 is " << t5 << endl;
}

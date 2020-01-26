// Class
// 1. Default Constructor
// 2. Copy Constructor -> Create an object which is copy of other object
// 3. Copy assignment operator
// 4. Destructor

#include<iostream>

using std::cin; using std::cout;
using std::endl;

class Test {
  public :
    Test(int num1, int num2)
    : number(num1), amount(num2)
    {
      cout << "Return " << num1 << " " << num2 << endl;
    }

    void display() {
      cout << number << " " << amount << endl;
    }

  private :
    int number, amount;
};

int main() {
  Test test1(2, 3);
  test1.display();

  Test test2(test1); // No call of the Constructor
  test2.display();

  Test *test3 = new Test(test2);
  test3->display();

  Test *test4 = new Test(*test3);
  test4->display();
}

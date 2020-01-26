// Shallow copy is created by inbuilt copy constructor
// Initialization list
// initial const property and & property at the time of memory allocation
#include<iostream>
#include<cstring>

using std::cin; using std::cout;
using std::endl;

class Test {
  public :
    Test(const Test &other) {
      this->number = other.number;
      this->name = new char[strlen((other.name)) + 1];
      strcpy(this->name, other.name);
    }

    Test(int num1, char *name)
    : number(num1) {
      this->name = new char[strlen(name) + 1];
      strcpy(this->name, name);
    }

    void display() {
      cout << number << " " << name << endl;
    }

  private :
    int number;
    char *name;
};

int main() {
  char name[] = "Gogo";
  Test test1(2, name);

  Test test2(test1); // No call of the Constructor
  test2.display();

  name[0] = 'J';
  test1.display();
  test2.display();
}

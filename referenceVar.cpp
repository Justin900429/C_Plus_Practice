#include<iostream>
using namespace std;

int main() {
  int a = 10;
  int y = a; // A "copy" to a not the same thing

  int &x = a; // A "reference" to a is a same thing to a
  int &z = a; // A "reference" to a is a same thing to a

  a++;
  cout << a << " " << y << " " << x << " " << z << endl;

  y++;
  cout << a << " " << y << " " << x << " " << z << endl;

  x++;
  cout << a << " " << y << " " << x << " " << z << endl;

  z++;
  cout << a << " " << y << " " << x << " " << z << endl;
}

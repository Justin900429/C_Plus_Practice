#include<iostream>

using std::cin; using std::cout;
using std::endl;

class Fraction {
  public :
    Fraction(int numerator, int denominator)
    : numerator(numerator), denominator(denominator)
    {

    }

    void print() {
      cout << numerator << "/" << denominator << endl;
    }

    void add(Fraction const &other) {
      // Let the denominator to be the same
      int lcm = denominator * other.denominator;
      int x = lcm / denominator;
      int y = lcm / other.denominator;

      // Get the result of the nominator
      int num = x * numerator + y * other.numerator;

      // Store result in f1
      numerator = num;
      denominator = lcm;

      simplify(numerator, denominator);
    }

    void mul(Fraction const &other) {
      // Multiply both nominator and denominator
      numerator *= other.numerator;
      denominator *= other.denominator;

      simplify(numerator, denominator);
    }


  private :
    void simplify(int num1, int num2) {
      // Count the gcd
      while (num2) {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
      }

      // Devide the gcd
      this->numerator /= num1;
      this->denominator /= num1;
    }

    int numerator;
    int denominator;
};


int main() {
  Fraction f1(10, 2);
  Fraction f2(15, 4);

  f1.add(f2); // Copy constructor
  f1.print();

  f2.mul(f1);
  f2.print();
}

#include<iostream>

using std::cin; using std::cout;
using std::endl;

class Complex {
  public :
    Complex(int real, int imaginary)
    : real(real), imaginary(imaginary) {

    }

    void add(Complex const &other) {
      real += other.real;
      imaginary += other.imaginary;
    }

    void mul(Complex const &other) {
      real = real * other.real - imaginary * other.imaginary;
      imaginary = real * other.imaginary + imaginary * other.real;
    }

    void print() {
      cout << real << " + i" << imaginary << endl;
    }



  private :
    int real;
    int imaginary;
}

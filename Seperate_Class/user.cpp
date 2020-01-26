#include<iostream>
#include "user.h"

// Constructor for initiate to 0
Coordinate::Coordinate()
: x(0), y(0) {
}

// Constructor for assign value
Coordinate::Coordinate(const int &x, const int &y)
: x(x), y(y) {
}

// Getter for x
int Coordinate::getX() const {
  return x;
}

// Setter for x
void Coordinate::setX(int x) {
  this->x = x;
}

// Getter for y
int Coordinate::getY() const {
  return y;
}

// Setter for y
void Coordinate::setY(int y) {
  this->y = y;
}

// Operator Overloading for the plus sign
Coordinate Coordinate::operator + (Coordinate pos) {
  Coordinate temp;
  temp.x = this->x + pos.x;
  temp.y = this->y + pos.y;
  return temp;
}

// Operator Overloading for the minus sign
Coordinate Coordinate::operator - (Coordinate pos) {
  Coordinate temp;
  temp.x = this->x - pos.x;
  temp.y = this->y - pos.y;
  return temp;
}

// Operator Overloading for the equal sign
bool Coordinate::operator == (Coordinate pos) {
  if (this->x == pos.x && this->y == pos.y) {
    return true;
  } else {
    return false;
  }
}

// Ostream Overloading
std::ostream& operator << (std::ostream &output, const Coordinate &pos) {
  output << "X: " << pos.x << " " << "Y: " << pos.y << std::endl;
  return output;
}

// Istream Overloading
std::istream& operator >> (std::istream &input, Coordinate &pos) {
  input >> pos.x >> pos.y;
  return input;
}

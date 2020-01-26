#ifndef USER_H
#define USER_H

class Coordinate {
  public :
    // Constructor for initiate to 0
    Coordinate();

    // Constructor for assign value
    Coordinate(const int &x, const int &y);

    // Output function for test
    // Virtual is use to overide the father function
    virtual void output();

    // Getter for x
    int getX() const;

    // Setter for x
    void setX(int x);

    // Getter for y
    int getY() const;

    // Setter for y
    void setY(int y);

    // Operator Overloading for the plus sign
    Coordinate operator + (Coordinate pos);

    // Operator Overloading for the minus sign
    Coordinate operator - (Coordinate pos);

    // Operator Overloading for the equal sign
    bool operator == (Coordinate pos);

    // Ostream Overloading
    friend std::ostream& operator << (std::ostream &output, const Coordinate &pos);

    // Istream Overloading
    friend std::istream& operator >> (std::istream &input, Coordinate &pos);

  private :
    int x, y;

};

#endif

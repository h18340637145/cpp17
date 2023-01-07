// Calling external functions
#include <iostream>
#include <iomanip>

double power(double x, int n);      // Declaration of an external power() function
//int powerRange{};
int main()
{
  for (int i {-3}; i <= 3; ++i)     // Calculate powers of 8 from -3 to +3
    std::cout << std::setw(10) << power(8.0, i);
  std::cout << std::endl;
}


// Box.h
#ifndef BOX_H
#define BOX_H
class Box
{
private:
    double length{ 1.0 };
    double width{ 1.0 };
    double height{ 1.0 };
public:
    Box(double lengthValue, double widthValue, double heightValue);
    Box = default;
    double volume();
};
#endif // !BOX_H

// Box.cpp
#include "Box.h"
#include <iostream>
Box::Box(double lengthValue, double widthValue, double heightValue)
{
    cout << "box constructor called." << endl;
    length = lengthValue;
    width = widthValue;
    height = heightValue;
}
double Box::volume()
{
    return length * width * height;
}
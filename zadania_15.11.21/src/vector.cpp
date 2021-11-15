#include"../include/vector.h"
#include<math.h>
#include<iostream>


Vector::Vector(): x(0), y(0) {}

Vector::Vector(double x, double y) : x(x), y(y) {}

double Vector::length() {
    return sqrt(x * x + y * y);
}

void Vector::Print()
{
  std::cout<<"x: "<<this->x<<"y: "<<this->y;
}







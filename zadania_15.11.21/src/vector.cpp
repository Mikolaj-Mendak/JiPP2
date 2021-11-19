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
  std::cout<<"x: "<<this->x<<" y: "<<this->y;
}

///dodawanie Vectorów
Vector Vector::operator+(const Vector &rhs) const
{
    return {x + rhs.x, y + rhs.y};
}

Vector &Vector::operator+=(const Vector &rhs)
{
this->x = this->x + rhs.x;
this->y = this->y + rhs.y;
return *this;
}

///odejmowanie wektorow
Vector Vector::operator-(const Vector &rhs) const
{
    return {x - rhs.x, y - rhs.y};
}

Vector &Vector::operator-=(const Vector &rhs)
{
    this->x = this->x - rhs.x;
    this->y = this->y - rhs.y;
    return *this;
}

///mnozenie wektorow skalarne
double Vector::operator*(const Vector &rhs) const
{
    return this->x * rhs.x + this->y * rhs.y;
}

double Vector::operator*=(const Vector &rhs)
{
    return this->x * rhs.x + this->y * rhs.y;
}


///iloczyn skalarny wektorow
Vector operator*(const double &lhs, const Vector &rhs)
{
    return { lhs * rhs.x, lhs * rhs.y};
}

///wektory przeciwne
Vector Vector::operator!()
{
    return {-x,-y};
}

Vector &Vector::operator!=(const Vector &rhs)
{
    this->x = -rhs.x;
    this->y = -rhs.y;
    return *this;
}

///porownanie wektorow
bool Vector::operator==(const Vector &rhs) const
{
    return (this->x == rhs.x && this->y == rhs.y);
}

///wyswietl wektor
std::ostream &operator<<(std::ostream &lhs,const Vector &rhs)
{
    lhs << "x: "<<rhs.x<<"y: "<<rhs.y;
}













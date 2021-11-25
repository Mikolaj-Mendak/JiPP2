#include<iostream>
#ifndef JIPP_VECTOR_H
#define JIPP_VECTOR_H

class Vector{
private:
    double x, y;
    friend Vector operator*(const double &lhs, const Vector &rhs);
    friend std::ostream &operator<<(std::ostream &lhs, const Vector &rhs);
public:
    Vector();

    Vector(double x, double y);

    void Print();
    Vector operator+(const Vector &rhs) const;
    Vector &operator+=(const Vector &rhs);
    Vector operator-(const Vector &rhs) const;
    Vector &operator-=(const Vector &rhs);
    Vector operator*(double scalar);
    Vector &operator*=(double scalar);
    Vector operator!();
    Vector &operator!=(const Vector &rhs);
    double operator*(const Vector &rhs) const;
    bool operator==(const Vector &rhs) const;

    double length();
};
/**
 * dodanie funkcji zaprzyjaznionej liczacej mnozenie przez skalar
 * @param lhs
 * @param rhs
 * @return
 */
Vector operator*(const double &lhs, const Vector &rhs);
std::ostream &operator<<(std::ostream &lhs,const Vector &rhs);


#endif //JIPP_VECTOR_H

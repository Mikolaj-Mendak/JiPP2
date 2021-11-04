#include <iostream>
#include<string>
#include "../header/prostopadloscian.h"



double Prostopadloscian::pole_powierzchni()
{

    return (2*a*b + 2*a*c + 2*b*c);

}

void Prostopadloscian::set_a(double a)
 {
    this->a = a;
 };

void Prostopadloscian::set_b(double b)
{
    this->b = b;
};

void Prostopadloscian::set_c(double c)
{
    this->c = c;
};

double Prostopadloscian::get_a()
{
    return a;
}
double Prostopadloscian::get_b()
{
    return b;
}
double Prostopadloscian::get_c()
{
    return c;
}


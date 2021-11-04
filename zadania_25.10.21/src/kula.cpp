#include <iostream>
#include "../header/kula.h"

double Kula::get_r()
{
    return r;
}

void Kula::set_r(double r)
{
    this->r = r;
}

double Kula::objetosc()
{
    return 4.0/3.0*3.14*r*r;
}
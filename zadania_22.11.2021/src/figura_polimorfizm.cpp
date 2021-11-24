
#include "../include/figura_polimorfizm.h"


///konstruktor klasy
Circle::Circle(double r)
:radius(r)
{}

/**
 * wykorzystujemy funkcje wirtualna getArea()
 * jest ona wykorzystywana w wielu klasach
 * dla kazdej klasy moze posiadac inne polecenia
 * @return
 */
double Circle::getArea()
{
    return radius*radius*3.14;
}

Rectangle::Rectangle(double a, double b, double c)
:a(a),b(b),c(c)
{}

double Rectangle::getArea()
{
    return 0.5*a*b;
}




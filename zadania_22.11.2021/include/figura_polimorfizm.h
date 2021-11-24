
#ifndef JIPP_FIGURA_POLIMORFIZM_H
#define JIPP_FIGURA_POLIMORFIZM_H

/**
 * Tworze klase z funkcja wirtualna ,ktora bedzie potem wykorzystywana
 */
class FiguraPolimorfizm
{
public:
    virtual double getArea() = 0;
    ///funkcja wirtualna
};

/**
 * Klasa circle wraz z konstruktorem wykorzystujaca funkcje wirtualna
 * getArea();
 */
class Circle:public FiguraPolimorfizm
{
    float radius;
public:
    Circle(double r);
    virtual double getArea();
};

/**
 * Klara rectangle z konstruktorem, wykorzystujaca funkcje wirtualna
 * getArea();
 */
 class Rectangle:public FiguraPolimorfizm
 {
     double a,b,c;
 public:
     Rectangle(double a, double b, double c);
     virtual double getArea();
 };



#endif //JIPP_FIGURA_POLIMORFIZM_H

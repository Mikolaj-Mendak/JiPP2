#ifndef JIPP_FIGURA_H
#define JIPP_FIGURA_H
#include<iostream>
#include<math.h>

///deklaracja klasy figura wraz z konstruktorem, funkcja wyswietlajaca nazwe okraz kolor
class Figura{
protected:
    std::string name;
    std::string kolor;
public:
    Figura(std::string name, std::string kolor);
    void Show();
};

///klasa TRIANGLE dziedziczaca klase FIGURA, konstruktor oraz funkcje liczace pole i obwod
class Triangle: public Figura{
    int dlugoscA;
    int dlugoscB;
    int dlugoscC;
public:
    Triangle(int a, int b, int c, std::string nazwa, std::string kolor);
    void obwodTriangle();
    void poleTriangle();
};

///klasa KWADRAT dziedziczaca klase FIGURA, konstruktor oraz funkcje liczace pole i obwod
class Kwadrat : public Figura{
    int dlugoscBoku;
public:
    Kwadrat(int a,std::string nazwa, std::string kolor);
    void obwodKwadrat();
    void poleKwadrat();
};

///klasa OKRAG dziedziczaca klase FIGURA, konstruktor oraz funkcje liczace pole i obwod
class Okrag : public Figura{
    int promien;
public:
    Okrag(int r,std::string nazwa,std::string kolor);
    void obwodOkrag();
    void poleOkrag();

};
#endif //JIPP_FIGURA_H

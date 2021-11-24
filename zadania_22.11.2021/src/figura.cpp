#include "../include/figura.h"
#include<iostream>

/**
 * KONSTRUKTOR KLASY FIGURA, jest on nastepnie wykorzystywany
 * w innych klasach
 * @param name
 * @param kolor
 */
Figura::Figura(std::string name, std::string kolor)
:name(name),kolor(kolor)
{}

/**
 * funkcja WYSWIETL, wyswietla kolor oraz nazwe dla reszty klas
 */
void Figura::Show()
{
    std::cout<<"Nazwa figury: "<<name<<"\nKolor figury: "<<kolor<<std::endl;
}

/**
 * konstruktor klasy OKRAG.
 * Waznym elementem jest odniesienie sie do klasy Figura
 * wykorzystujemy ja do okreslenia nazwy oraz koloru
 * @param r
 * @param nazwa
 * @param kolor
 */
Okrag::Okrag(int r,std::string nazwa,std::string kolor)
:Figura(nazwa,kolor), promien(r)
{}

Kwadrat::Kwadrat(int a,std::string nazwa, std::string kolor)
: Figura(nazwa,kolor),dlugoscBoku(a)
{}

Triangle::Triangle(int a, int b, int c, std::string nazwa, std::string kolor)
:Figura(nazwa,kolor),dlugoscA(a),dlugoscB(b),dlugoscC(c)
{}

void Okrag ::poleOkrag() {
   std::cout<<"Pole: "<<3.14 * promien * promien<<std::endl;
}
void Okrag::obwodOkrag() {
    std::cout<<"Obwod: "<<2*3.14*promien<<std::endl;
}
void Kwadrat::obwodKwadrat() {
    std::cout<<"Obwod: "<<4*dlugoscBoku<<std::endl;
}
void Kwadrat::poleKwadrat() {
    std::cout<<"Pole: "<<dlugoscBoku*dlugoscBoku<<std::endl;
}
void Triangle::obwodTriangle()
{
    std::cout<<"Obwod: "<<dlugoscA+dlugoscB+dlugoscC<<std::endl;
}
void Triangle::poleTriangle()
{
    std::cout<<"Pole: "<<dlugoscA*dlugoscA*sqrt(3)/4<<std::endl;
}


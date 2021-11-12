#ifndef JIPP2_FIGURA_H
#define JIPP2_FIGURA_H

#include<iostream>

using namespace  std;

class Pojazd
{
    string numerRejestracyjny;
    string nazwa;
    int iloscMiejsc;
    string marka;
    string typ;
    string *miejsca;
public:
    Pojazd(string numerRejestracyjny,string nazwa, int iloscMiejsc, string marka, string typ);
    ~Pojazd();
    Pojazd(Pojazd& pojazd);

    void ZmianaDanych(int numer, string zmiana);
    void show();
    void ZmianaDanych();

    string getNazwa();
    string getNumerRejestracyjny();
    string getMarka();
    string getTyp();

    void setNazwa(string nazwa);
    void setNumerRejestracyjny(string numerRejestracyjny);



};


#endif
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
    static double najnowszaWersja;
    double zainstalowanaWersja = 1.0;
public:
    Pojazd(string numerRejestracyjny,string nazwa, int iloscMiejsc, string marka, string typ);
    ~Pojazd();
    Pojazd(Pojazd& pojazd);

    void ZmianaDanych(int numer, string zmiana);
    void show();

    string getNazwa()  const;
    string getNumerRejestracyjny()  const;
    string getMarka() const;
    string getTyp()  const;

    void setNazwa(const string &nazwa);
    void setNumerRejestracyjny(const string &numerRejestracyjny);
    void zmianaOprogramowania();

    static void opublikujNoweOprogramowanie(double numer);


};


#endif
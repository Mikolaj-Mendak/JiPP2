#include "../include/pojazd.h"
using namespace std;

Pojazd::Pojazd(string numerRejestracyjny,string nazwa, int iloscMiejsc, string marka, string typ)
:numerRejestracyjny(numerRejestracyjny)
,iloscMiejsc(iloscMiejsc)
,nazwa(nazwa)
, marka(marka)
,typ(typ)
{
    this->miejsca = new string[iloscMiejsc];
    for (int i = 0; i < iloscMiejsc; i++)
    {
        this->miejsca[i] = "BRAK";
    }
}

//destruktor
Pojazd::~Pojazd()
{
    delete [] miejsca;
}

//konstruktor kopiujacy
Pojazd::Pojazd(Pojazd &pojazd)
{
    numerRejestracyjny = pojazd.numerRejestracyjny;
    nazwa = pojazd.nazwa;
    iloscMiejsc = pojazd.iloscMiejsc;
    marka = pojazd.marka;
    typ = pojazd.typ;
    miejsca = new string[iloscMiejsc];

    for(int i = 0;i < iloscMiejsc; i++)
    miejsca[i] = pojazd.miejsca[i];
}


//funkcja wypisujaca elemnty
void Pojazd::show()
{
    cout<<"\nNazwa: "<<nazwa<<"\nIlosc miejsc: "<<iloscMiejsc<<"\nMarka: "<<marka<<"\nTyp: "<<typ<<endl;
    cout<<"NumerRejestracyjny: "<<numerRejestracyjny<<endl;

    for(int i = 0; i < iloscMiejsc; i++)
    {
        cout<<"Miejsce "<<i+1<<": "<<miejsca[i];
        cout<<"\n";
    }
}

//zmiana danych
void Pojazd::ZmianaDanych(int numer, string zmiana)
{
    miejsca[numer] = zmiana;
}

//gettery
string Pojazd::getMarka() {
    return marka;
}

string Pojazd::getNazwa()
{
    return nazwa;
}

string Pojazd::getTyp()
{
    return typ;
}

string Pojazd::getNumerRejestracyjny()
{
    return numerRejestracyjny;
}

//settery
void Pojazd::setNazwa(string nazwa)
{
    this->nazwa = nazwa;
}

void Pojazd::setNumerRejestracyjny(string numerRejestracyjny)
{
    this->numerRejestracyjny = numerRejestracyjny;
}

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
string Pojazd::getMarka() const
{
    return marka;
}

string Pojazd::getNazwa()  const
{
    return nazwa;
}

string Pojazd::getTyp()  const
{
    return typ;
}

string Pojazd::getNumerRejestracyjny()  const
{
    return numerRejestracyjny;
}

//settery
/**
 * dodano zabezpieczenie przed zmiana wartosci (const)
 */
void Pojazd::setNazwa(const string &nazwa)
{
    this->nazwa = nazwa;
}

void Pojazd::setNumerRejestracyjny(const string &numerRejestracyjny)
{
    this->numerRejestracyjny = numerRejestracyjny;
}

//zmiana oprogramowania

double Pojazd::najnowszaWersja = 2.0;
void Pojazd :: zmianaOprogramowania()
{
    cout<<"Aktualna wersja oprogramowania: "<<zainstalowanaWersja<<endl;
    zainstalowanaWersja = najnowszaWersja;
    cout<<"Zmiana na wersje: "<<zainstalowanaWersja;
}

void Pojazd :: opublikujNoweOprogramowanie(double numer)
{
    najnowszaWersja = numer;
    cout<<"Nowe oprogramowanie: "<<najnowszaWersja;
}
#include <iostream>
#include <vector>
#include "../include/miasta.h"


Nazwa::Nazwa(string nazwa)
:nazwa(nazwa)
{}


/**
 * konstruktor klasy Wojewodztwo
 * @param nazwaWojewodzwta
 */
Wojewodztwo::Wojewodztwo(string nazwa, double liczbaMieszkancow)
: Nazwa(nazwa), liczbaMieszkancow(liczbaMieszkancow)
{}

/**
 * konstruktor klasy miasto
 * @param nazwaMiasta
 * @param liczbaMieszkancow
 * @param polePowierzchni
 * @param RokPowstania
 */

Miasto::Miasto(const string nazwa,  double liczbaMieszkancow , const double &polePowierzchni, const int &RokPowstania)
:Nazwa(nazwa), liczbaMieszkancow(liczbaMieszkancow),
polePowierzchni(polePowierzchni),rokPowstania(rokPowstania)
{}


/**
 * zastosowanie polimorfizmu obliczajac zaludnienie wojewodztwa oraz miasta
 * @return
 */
double Miasto::Zaludnienie()
{
    return polePowierzchni/liczbaMieszkancow;
}

double Wojewodztwo::Zaludnienie()
{
    return polePowierzchni/liczbaMieszkancow;
}

/**
 * zastosowanie destruktora dla przykladowej tablicy
 */
Nazwa::~Nazwa()
{
    delete [] tab;
    cout<<"Destrutkor zostal wywolany i usunal zaalakowana pamiec!"<<endl;
}

/**
 * dodaawanie miasta do województwa
 * @param miasto
 */
void Wojewodztwo::dodajMiato(Miasto *miasto) {
    miasta.push_back(miasto);
}

/**
* wyswietlanie danych o miescie w danym wojewodztwie ktorego nazwa tez jest wyswietalana
*/

void Miasto::print(){
    cout<<"Nazwa miasta: \t"<<nazwa<<"\nLiczba mieszkancow: \t"<<liczbaMieszkancow
    <<"\nPowierzchnia: \t"<<polePowierzchni<<"Rok powstania: \t"<<rokPowstania<<"\nZaludnienie: "<<Zaludnienie();
}

void Wojewodztwo::print(){
    cout<<"WOJEWODZTWO: "<<nazwa<<"\nPOLE POWIERZCHNI: "<<polePowierzchni<<"\nLICZBA MIESZKANCOW: "
    <<liczbaMieszkancow<<"\nZALUDNIENIE: "<<Zaludnienie();
    cout<<"\nMiasto"<<endl;

    for(int i=0 ; i < miasta.size(); i++)
    {
        miasta[i] -> print();
    }
}
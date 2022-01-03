#include <iostream>
#include <vector>
#include "../include/miasta.h"


Nazwa::Nazwa(string nazwa)
:nazwa(nazwa)
{}

double Nazwa::Zaludnienie()
{
    return 0;
}

/**
 * konstruktor klasy Wojewodztwo
 * @param nazwaWojewodzwta
 */
Wojewodztwo::Wojewodztwo(string nazwa, double liczbaMieszkancow,double polePowierzchni)
: Nazwa(nazwa), liczbaMieszkancow(liczbaMieszkancow),polePowierzchni(polePowierzchni)
{

}

/**
 * konstruktor klasy miasto
 * @param nazwaMiasta
 * @param liczbaMieszkancow
 * @param polePowierzchni
 * @param RokPowstania
 */

Miasto::Miasto(const string nazwa,  double liczbaMieszkancow , const double &polePowierzchni,const int &rokPowstania)
:Nazwa(nazwa), liczbaMieszkancow(liczbaMieszkancow),
polePowierzchni(polePowierzchni),rokPowstania(rokPowstania)
{}


/**
 * zastosowanie polimorfizmu obliczajac zaludnienie wojewodztwa oraz miasta
 * @return
 */
double Miasto::Zaludnienie()
{
    return liczbaMieszkancow/polePowierzchni;
}

double Wojewodztwo::Zaludnienie()
{
    return liczbaMieszkancow/polePowierzchni;
}

/**
 * zastosowanie destruktora dla przykladowej tablicy
 */
Nazwa::~Nazwa()
{
    delete [] tab;
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
    cout<<"Nazwa miasta: "<<nazwa<<"\nLiczba mieszkancow: "<<liczbaMieszkancow
    <<"\nPowierzchnia: "<<polePowierzchni<<"\nRok powstania: "<<rokPowstania<<"\nZaludnienie: "<<endl;

}

void Wojewodztwo::print(){

    cout<<"Nazwa wojewodztwa: "<<nazwa<<endl;
    cout<<"Liczba ludnosci: "<<liczbaMieszkancow<<endl;
    cout<<"Pole powierzchni km2: "<<polePowierzchni<<endl;
   // cout<<"Zaludnienie (osoby na km2): "<<Zaludnienie()<<endl;



     for(int i=0 ; i < miasta.size(); ++i)
     {

         cout<<"\n"<<i+1<<")"<<endl;
         miasta[i] -> print();

     }
    cout<<"---------------------------------------------------"<<endl;
}

void Wojewodztwo::printWoj(){

    cout<<"Nazwa wojewodztwa: "<<nazwa<<endl;


}


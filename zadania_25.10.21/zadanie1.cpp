#include <iostream>
#include<string>
#include "header.h"



using namespace std;


struct samochod{
    string marka;
    string model;
    int rok_produkcji;
    string kolor;


};


void zadanie1() {
    int liczba_samochodow = 4;

   samochod auta[]={{"Peugeot",  "gti206", 2000, "bialy"},
            {"Mercedes", "A45",    2020, "czerwony"},
            {"Renault",  "Clio",   2014, "srebrny"},
            {"Suzuki",   "Swift",  2010, "czerwony"}};

    cout << "Marka\tModel \tRok \tKolor" << endl;
    cout << "----------------------------------" << endl;

    for (int i = 0; i < liczba_samochodow; i++)
    {
        cout << auta[i].marka << "\t" << auta[i].model << "\t" << auta[i].rok_produkcji <<   "\t" << auta[i].kolor << endl;
    }


}








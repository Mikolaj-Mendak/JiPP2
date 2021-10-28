#include <iostream>
#include <cstdlib>
#include<string>
#include "header.h"



using namespace std;


struct samochod{
    string marka;
    string model;
    int rok_produkcji;
    string kolor;


};


int funkcja_3(int a, samochod tablica);



void zadanie3()
{
    samochod tablica[] = {{"Peugeot",  "gti206", 2000, "bialy"},
                        {"Mercedes", "A45",    2020, "czerwony"},
                        {"Renault",  "Clio",   2014, "srebrny"},
                        {"Suzuki",   "Swift",  2010, "czerwony"},
                        {"Peugeot",  "gti206", 2000, "bialy"},
                         {"Mercedes", "A45",    2020, "czerwony"},
                         {"Renault",  "Clio",   2014, "srebrny"},
                         {"Suzuki",   "Swift",  2010, "czerwony"}};




}

int funkcja_3(int a, samochod tablica[])
{
    int i;
    int suma = 1;
    for(i=0;i<a;i++)
    {
        if(!(tablica[i].marka == tablica[i+1].marka))
        {
            suma++;
        }
    }
}

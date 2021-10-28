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
    int przebieg;


};


void zadanie2() {
    int liczba_samochodow = 4;

    samochod auta[]={{"Peugeot  ",  "gti206", 2000, "  bialy  ",13000},
                     {"Mercedes", "A45   ",    2020, "czerwony",15000},
                     {"Renault ",  "Clio ",   2014, "srebrny ",50000},
                     {"Suzuki  ",   "Swift ",  2010, "czerwony",30400}};

    cout << "Marka   \t Model \tRok \tKolor\t Przebieg" << endl;
    cout << "----------------------------------------" << endl;

    for (int i = 0; i < liczba_samochodow; i++)
    {
        cout << auta[i].marka << "\t" << auta[i].model << "\t" << auta[i].rok_produkcji <<"\t" <<
        auta[i].kolor <<"\t"<< auta[i].przebieg<<endl;
    }


}








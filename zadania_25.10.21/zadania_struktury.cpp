#include <iostream>
#include<string>
#include "header.h"



using namespace std;





//struktura do zadania 1
struct samochod_zadanie_1{
    string marka;
    string model;
    int rok_produkcji;
    string kolor;


};

//struktura do zadania 2
struct samochod_zadanie_2{
    string marka;
    string model;
    int rok_produkcji;
    string kolor;
    int przebieg;


};

//struktura do zadania 3
struct samochod_zadanie_3{
    string marka;
    string model;
    int rok_produkcji;
    string kolor;


};




//zadanie 1
void zadanie1() {
    int liczba_samochodow = 4;

    samochod_zadanie_1 auta[]={{"Peugeot",  "gti206", 2000, "bialy"},
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




//zadanie 2
void zadanie2() {
    int liczba_samochodow = 4;

    samochod_zadanie_2 auta[]={{"Peugeot  ",  "gti206", 2000, "  bialy  ",13000},
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



int funkcja_3(int a, samochod_zadanie_3 tablica);
//zadanie 3
void zadanie3()
{
    samochod_zadanie_3 tablica[] = {{"Peugeot",  "gti206", 2000, "bialy"},
                                    {"Mercedes", "A45",    2020, "czerwony"},
                                    {"Renault",  "Clio",   2014, "srebrny"},
                                    {"Suzuki",   "Swift",  2010, "czerwony"},
                                    {"Peugeot",  "gti206", 2000, "bialy"},
                                    {"Mercedes", "A45",    2020, "czerwony"},
                                    {"Renault",  "Clio",   2014, "srebrny"},
                                    {"Suzuki",   "Swift",  2010, "czerwony"}};
    int a = 8;


}

int funkcja_3(int a, samochod_zadanie_3 tablica[])
{
    int i,j;
    int suma = 0;
    string temp = NULL;


    for(j = 0; j < a; j++)
    {
        suma = 0;
        for(int k = j; k < a; k++)
        {
            if(temp == tablica[k].marka)
                j++;
            continue;

        }
        cout<<"test";
        for(i=0;i<a;i++)
        {
            if (tablica[j].marka == tablica[i].marka)
            {
                suma++;
            }
            temp = tablica[j].marka;
        }
        cout<< "Marka "<<tablica[j].marka<<" jest w ilosci: "<<suma<<endl;
    }
}





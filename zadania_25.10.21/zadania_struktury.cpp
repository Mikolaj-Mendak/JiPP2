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

//struktura do zadania 4
struct samochod_zadanie_4{
    string marka;
    string model;
    int rok_produkcji;
    string kolor;


};




//-------------------------------------------------zadanie 1
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

//---------------------------------------------------zadanie 2
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

//-------------------------------------------------zadanie 3
int liczba_samochodow(samochod_zadanie_3 tablica[], int liczba_elementow, string marka);
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

    string sprawdzana_marka = "Peugeot";
   cout<<"Liczba samochodow marki "<< sprawdzana_marka <<": "<<liczba_samochodow(tablica, a, sprawdzana_marka )<<endl;

}

//funkcja zwraca ilosc samochodow tej samej marki ,string marka umozliwia wybranie marki ktora chcemy sprawdzic
int liczba_samochodow(samochod_zadanie_3 tablica[], int liczba_elementow, string marka)
{
    int licznik = 0;

        for (int j = 0; j < liczba_elementow; j++)
        {
            if (tablica[j].marka == marka)
                licznik++;
        }

    return licznik;

}


//-------------------------------------------------zadanie 4
int najstarszy_samochod(samochod_zadanie_4 tablica[], int a);
void zadanie4() {
    int liczba_samochodow = 4;

    samochod_zadanie_4 auta[]={{"Peugeot",  "gti206", 2000, "bialy"},
                               {"Mercedes", "A45",    2020, "czerwony"},
                               {"Renault",  "Clio",   2014, "srebrny"},
                               {"Suzuki",   "Swift",  2010, "czerwony"}};

    cout << "Marka\tModel \tRok \tKolor" << endl;
    cout << "----------------------------------" << endl;

    for (int i = 0; i < liczba_samochodow; i++)
    {
        cout << auta[i].marka << "\t" << auta[i].model << "\t" << auta[i].rok_produkcji <<   "\t" << auta[i].kolor << endl;
    }
    cout<<"\n\n";
    int indx = najstarszy_samochod(auta ,4);
    cout<<"Najstaszy samochod jest o indeksie : "<< indx <<" czyli"<<auta[indx].marka<<" rok "<<auta[indx].rok_produkcji<<endl;
}

int najstarszy_samochod(samochod_zadanie_4 tablica[], int a)
{
    int min = 9999;
    int indx;

    for(int i = 0; i < a; i++)
    {
        if(tablica[i].rok_produkcji < min)
        {
            min = tablica[i].rok_produkcji;
            indx = i;
        }
    }
    return indx;
}





#include "funkcje.h"
#include<iostream>
#include<vector>
#include<string.h>
using namespace std;


void menu()
{
    cout<<"1 - dodaj miasto\n";
    cout<<"2 - usun miasto\n";
    cout<<"3 - wyswietl informacje\n";
    cout<<"4 - wyswietl numery wojewodztw\n";
    cout<<"5 - znajdz wojewodztwo o najwiekszej ilosci zamieszkalych (za pomoca szablonu)";
    cout<<"0 - zakonczenie programu\n";
}

void help()
{
    cout<<"Instrukcja!"<<endl;
    cout<<"W parametrach programu wpisz:\n""help"" w celu wyswietlenia instrukcji.\n""program"" w celu przejscia do programu"<<endl;
}



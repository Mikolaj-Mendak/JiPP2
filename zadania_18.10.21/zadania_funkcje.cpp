#include<iostream>
#include <time.h>
#include <stdexcept>
#include <cstdlib>
#include<string>
#include "funkcje.h"
using namespace std;



//--------------------------------ZADANIE 1


void pole(double a, double b, double h)
{
    cout<<"funkcja zlozona double: ";
    double wynik = 0.5*(a+b)*h;
    cout<<wynik<<endl;

}

void pole(int a, int b, int h)
{
    cout<<"funkcja zlozona int: ";
    int wynik = 0.5*(a+b)*h;
    cout<<wynik<<endl;

}
//--------------------------------ZADANIE 2
int funkcja(int i,int j)
{
    srand (time(NULL));
    return (rand()%(j-i+1) + i );

}
//-------------------------------ZADANIE 3
int max_tab(int tab[])
{
    int i,MAX,pom;
    MAX = tab[0];
    for(i=1;i<20;i++)
    {
        if(tab[i]>MAX)
        {
            MAX = tab[i];
        }
    }
    return MAX;

}

//-------------------------------ZADANIE 4
void obroc_tab(int tab[])
{
    int tab_pom[10];
    int i;

    for (i = 0; i < 10; i++)
    {
        tab_pom[9-i] = tab[i];
    }

    for (i = 0; i < 10; i++)
    {
         tab[i] = tab_pom[i] ;
    }


}


//-------------------------------ZADANIE 5

void srednia(double *a,double *b)
{
    cout<<(*a+*b)/2<<endl;
}

//-------------------------------ZADANIE 7

void sortowanie(int *l1,int *l2,int *l3,int *l4,int *l5)
{
    int i,j;


    for(i=0;i<5;i++) {
        if (*l1 > *l2)
            swap(*l1, *l2);
        if (*l2 > *l3)
            swap(*l2, *l3);
        if (*l3 > *l4)
            swap(*l3, *l4);
        if (*l4 > *l5)
            swap(*l4, *l5);
    }


}

//-------------------------------ZADANIE 8

void przypisz(int x,int *w)
{
    *w = x;
}

//-------------------------------ZADANIE 9


void dzielenie(int a, int b)
{
    if(a%b != 0 || b == 0)
    {
        throw invalid_argument("Liczba a nie jest podzelna przez liczbe b!");

    }
    cout<<"Wynik dzielenia: "<<a/b<<endl;
}

void zadanie9()
{
    int a;
    int b;
    int wynik;
    cout<<"Wprowadz dwie liczby naturalne: "<<endl;
    cin>>a>>b;

    try
    {
        dzielenie(a,b);
    }
    catch (invalid_argument& e)
    {
        cout<< e.what() <<endl;
    }

}


//-------------------------------ZADANIE 10

    int konwertuj(const char *a) {
        int x = 0;
        int i;

        for (i = 0; a[i]; i++) {
            if (x * 10 < 0) {
                throw overflow_error("Liczba jest za duza!");
            }
            if (a[i] <= '9' && a[i] >= '0') {
                x = x * 10 + a[i] - '0';
            } else throw invalid_argument("Wystapily nieprawidlowe znaki!");
        }

    return x;


    }


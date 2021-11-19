#include<iostream>
#include<math.h>
#include "../include/node.h"
#include "../include/vector.h"
using namespace std;

int main()
{
    cout<<"-----------zadania 1 node-----------\n";
    Node a,b;
    a.updateValue(3,4);
    b.updateValue(6,7);
    cout << "Odleglosc dwoch punktow: " << punkt(a, b);
    cout<<endl;
    cout<<"-----------zadania 2 vector----------"<<endl;

    cout<<"Wyswietl wektor 1: ";
    Vector v1(2,3), v2(5,10);

    ///wyswietlenie wektora
    v1.Print();
    cout<<"\nWyswietl wektor 2: ";
    v2.Print();

    /**
     * Pozostałe metody działania operatorów
     */

    ///Dodawanie
    Vector v3=v2+v1;
    cout<<"\nDodawanie: v3 = ";
    v3.Print();
    ///Odejmowanie
    v3 = v2 - v1;
    cout<<"\nOdejmowanie: v3 = ";
    v3.Print();
    ///Mnożenie przez skalar
    v3 = 4 * v1;
    cout<<"\nMnozenie przez skalar: v3 = ";
    v3.Print();
    ///mnozenie skalarne wektorow
    double result = v2*v1;
    cout<<"\nWynik mnozenia skalarnego wektorow: "<<result<<endl;
    ///porownanie wektorow
    if(v3 == v1) cout<<"\nwektory sa takie same"<<endl;
    else cout<<"Sa rozne"<<endl;
    ///wektor przeciwny
    v3 = !v1;
    cout<<"Wektor przeciwny do v1: ";
    v3.Print();

    cout<<"\nPrzeciazenie operatora <<"<<endl;
    cout<<v3<<endl;


















}





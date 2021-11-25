#include<iostream>
#include "../include/node.h"
#include "../include/vector.h"
#include "../include/ComplexNumbers.h"
#include "../include/Triangle.h"
using namespace std;

int main()
{
    /**
     *Zadania pierwsze, zaprzyjaznianie funkcji
     * zaprzyjaznianie funkcji uzywamy w celu
     * mozliwosci uzycia funkcji z poza klasy ale uzywajac jej elementow
     */
    cout<<"\t\tZADANIA Z NODE\n";
    Node a, b(5, 8), c(1, 16);
    cout << "Odleglosc dwoch punktow: " << punkt(a,b);
    cout<<endl;

    /**
    *  Zadania z wektorami
     *  Na poczatku tworzymy funkcje wyswietlajaca wektory
     *  nastepnie uzywamy operatorów w celu utworzenia wszysrkich mozliwych operacji
    */
    cout<<"\n\t\tZADANIA Z VECTOR"<<endl;
    Vector v1(2,3), v2(5,10);
    cout<<"Wyswietl wektor 1: ";
    v1.Print();
    cout<<"\nWyswietl wektor 2: ";
    v2.Print();

    /**
     * Pozostałe metody działania operatorów
     * dodane testy
     * uzycie funkcji zaprzyjaznionej
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
    v3 = 4*v2;
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
    cout<<"\nPrzeciazenie operatora \"<<\" wektor V3: ";
    cout<<v3<<endl;




    /**
     * Klasa liczb urojonych przykladowym dodawaniem
     */

    cout<<"\t\tKLASA LICZB UROJONYCH"<<endl;
    ComplexNumbers L1(3,4);
    ComplexNumbers L2(4,5);
    L1.showComplexNumbers();
    L2.showComplexNumbers();
    ComplexNumbers L3(0,0);
    L3 = L1 + L2;
    cout<<"Suma dwoch liczb jest rowna:   ";
    L3.showComplexNumbers();
    L3 += L2;

    cout<<"\n\t\tZADANIA TRIANGLE"<<endl;





return 0;


}





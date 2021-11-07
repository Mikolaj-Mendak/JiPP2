#include <iostream>
#include "../header/header.h"
#include "../header/prostopadloscian.h"
#include "../header/kula.h"
#include "../header/funkcja.h"
#include "../header/student.h"
#include "../header/punkt.h"
#include "../header/figura.h"
#include "../header/destruktor.h"
using namespace std;

int main()
{
    cout<<"------------ZADANIA STRUKTURY-------------------\n";
    cout<<"-----------------Zadanie 1 struktury-------------------\n";
    zadanie1();
    cout<<"\n\n-----------------Zadanie 2 struktury-------------------\n";
    zadanie2();
    cout<<"\n\n-----------------Zadanie 3 struktury-------------------\n";
    zadanie3();
    cout<<"\n\n-----------------Zadanie 4 struktury-------------------\n";
    zadanie4();

    cout<<"\n\n------------ZADANIA KLASY-------------------\n";
    cout<<"Zadanie 1 klasy:\n";
    Prostopadloscian cuboid;
    cuboid.set_a(2);
    cuboid.set_b(4);
    cuboid.set_c(5);
    cout<<"Prostopadloscian o bokach "<<cuboid.get_a()<<" "<<cuboid.get_b()<<" "<<cuboid.get_c()
    <<" ma pole "<<cuboid.pole_powierzchni()<<endl;

    cout<<"\nZadanie 2 klasy:\n";
    Kula sphere;
    sphere.set_r(3);
    cout<<"Kula o promieniu "<<sphere.get_r()<<" ma objetosc: "<<sphere.objetosc();

    cout<<"\n\nZadanie 3 klasy:\n";
    Funkcja function;
    function.set_a(2);
    function.set_b(4);
    function.set_c(3);
    cout<<"f(x) = "<<function.get_a()<<"x*x + "<<function.get_b()<<"*x + "<<function.get_c();

    cout<<"\n\nZadanie 4 klasy:\n";
    Student student;
    student.wczytaj("Marian","Nowak",1234,20,4);
    cout<<"Dane studenta: \n";
    student.get_dane();
    cout<<"Uzyskany procent punktow: "<<student.procent();

    cout<<"\n\n------------ZADANIA KONSTRUKTOR-------------------\n";
    cout<<"Zadanie 1 konstruktor: "<<endl;
    Punkt p1(2,3);
    Punkt p2(0,0);
    cout<<"Odleglosc dwoch punktow od siebie wynosi: "<<p1.odleglosc(p2); //odwolanie sie do funkcji umieszczonej w klasie obiektu p1
    cout<<"\n\nZadanie 2 konstruktor: "<<endl;
    Punkt tab[] = {p1,p2};
    Figura figura(4,tab);
    cout<<"\n\n------------ZADANIA DESTRUKTOR-------------------\n";
    cout<<"Zadanie 1 destruktor: "<<endl;
    Destruktor *tDestruktor;
    tDestruktor = new Destruktor;
    tDestruktor->pauza();
    delete tDestruktor;



}
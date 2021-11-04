#ifndef JIPP2_STUDENT_H
#define JIPP2_STUDENT_H
#include<iostream>
using namespace std;

class Student{
private:
    string imie;
    string nazwisko;
    int numer_albumu;
    int liczba_pytan;
    int poprawne_odpowiedzi;
public:
    void wczytaj(string imie,string nazwisko, int numer_albumu, int liczba_pytan, int poprawne_odpowiedzi);
    void get_dane();
    double procent();
};






#endif
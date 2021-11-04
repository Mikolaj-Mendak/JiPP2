#include "../header/student.h"
#include <iostream>

 void Student::wczytaj(string imie,string nazwisko, int numer_albumu, int liczba_pytan, int poprawne_odpowiedzi)
 {
    this->imie = imie;
    this->nazwisko = nazwisko;
    this->numer_albumu = numer_albumu;
    this->liczba_pytan = liczba_pytan;
    this->poprawne_odpowiedzi = poprawne_odpowiedzi;
}

void Student::get_dane()
{
    cout<<"Imie: "<<imie<<endl;
    cout<<"Nazwisko: "<<nazwisko<<endl;
    cout<<"Nr: "<<numer_albumu<<endl;
    cout<<"Liczba pytan: "<<liczba_pytan<<endl;
    cout<<"Poprawne odpowiedzi: "<<poprawne_odpowiedzi<<endl;
}

double Student::procent()
{
    return poprawne_odpowiedzi/double(liczba_pytan);
}

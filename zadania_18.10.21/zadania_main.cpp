#include<iostream>
#include <time.h>
#include <cstdlib>
#include<string>
#include<limits>
#include "funkcje.h"
using namespace std;




int main() {


    cout << "------------------------ZADANIE 1---------------------------\n" << endl;

    double a = 3, b = 4, c = 5;
    pole(a, b, c);
    cout << "\n\n\n";
//------------------------------------------------------------------------------------





    cout << "------------------------ZADANIE 2---------------------------\n" << endl;

    int a1 = 3;
    int b1 = 12;
    int wynik = funkcja(a1, b1);

    cout << "Wylosowana liczba:" << wynik << endl;
    cout << "\n\n\n";
//----------------------------------------------------------------------------------------





    cout << "------------------------ZADANIE 3---------------------------\n" << endl;

    srand(time(NULL));

    int *tablica = new int[20]; //deklaracja tablicy
    int i = 0;

    cout << "Tablica:  ";
    for (i = 0; i < 20; i++) {
        tablica[i] = rand() % 100 + 1;
        cout << tablica[i] << " ";
    }
    cout << " " << endl;

    int MAX = max_tab(tablica);
    cout << "Element najwiekszy: " << MAX;
    cout << "\n\n\n";

    delete[] tablica;
    //----------------------------------------------------------------------------------------





    cout << "------------------------ZADANIE 4---------------------------\n" << endl;
    int tablica_2[10] = {0, 3, 4, 3, 6, 7, 11, -5, -10, 87};
    cout<<"Tablica przed obroceniem ";


    for (i = 0; i < 10; i++)
    {
        cout<<tablica_2[i]<<" ";

    }

    obroc_tab(tablica_2);
    cout<<"\nTablica po oborceniu "<<" ";

    for (i = 0; i < 10; i++)
    {
        cout<<tablica_2[i]<<" ";

    }
    cout << "\n\n\n";
//----------------------------------------------------------------------------------------






cout << "\n------------------------ZADANIE 5---------------------------\n" << endl;
    double a_5,b_5;
    cout<<"Wprowadz dwie liczby calkowite: "<<endl;
    cin>>a_5;
    cin>>b_5;
    double *wsk_a = &a_5;
    double *wsk_b = &b_5;
    srednia(wsk_a,wsk_b);

    cout << "\n\n\n";
//----------------------------------------------------------------------------------------






    cout << "\n------------------------ZADANIE 6---------------------------\n" << endl;
    int n;
    cout<<"Podaj rozmiar tablicy: \n";
    cin>>n;

    int *(tablica_6) = new int[n];
    cout<<"Podaj elementy tablicy: "<<endl;

    for(i=0;i<n;i++)
    {
        cin>>*(tablica_6 + i);
    }

    cout<<"Elementy tablicy wieksze od zera: ";

    for(i=0;i<n;i++)
    {
        if(*(tablica_6 + i) > 0)
        {
            cout << *(tablica_6 + i) << " ";
        }
    }
    cout << "\n\n\n";
    //----------------------------------------------------------------------------------------






    cout << "\n------------------------ZADANIE 7---------------------------\n" << endl;
    int l1 = 5, l2 = 9, l3 = 7, l4 = 16, l5 = 1;
    cout<<"Liczby nieposortowane: "<<l1<<" "<<l2<<" "<<" "<<l3<<" "<<l4<<" "<<l5<<endl;
    sortowanie(&l1,&l2,&l3,&l4,&l5);
    cout<<"Liczby posortowane: "<<l1<<" "<<l2<<" "<<l3<<" "<<l4<<" "<<l5<<endl;

    cout << "\n\n\n";
    //----------------------------------------------------------------------------------------






    cout << "\n------------------------ZADANIE 8---------------------------\n" << endl;
    int x = 8;
    int y;
    int *wsk = &y;

    przypisz(x,wsk);
    cout<<"Wartosc zmiennej wskazywanej przez wskaznik: "<<y<<endl;
    cout << "\n\n\n";
    //----------------------------------------------------------------------------------------




    cout << "\n------------------------ZADANIE 9---------------------------\n" << endl;

    //caly kod z zadania 9tego jest w pliku funckje.cpp
    zadanie9();
    //----------------------------------------------------------------------------------------




    cout << "\n------------------------ZADANIE 10---------------------------\n" << endl;
    cout<<"Wprowadz ciag znakow do konwersji: "<<endl;

 char* tekst = new char[50];
 cin.getline(tekst,50);
 int tekst_int;

 try
 {

     tekst_int = konwertuj(tekst);
     cout<<"Wynik konwersji: "<<tekst<<endl;
 }

 catch (invalid_argument& e1)
 {
     cout<< e1.what() <<endl;
 }
 catch (overflow_error& e2)
 {
     cout<< e2.what() <<endl;
 }
 cout<<"\n\n";
 return 0;















return 0;
}


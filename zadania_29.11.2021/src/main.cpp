#include "../include/Note.h"
#include<iostream>
#include<string>
using namespace std;


int main(){
    string stop;
    string titleUser;
    string contentUser;
    do {
        cout << "Wprowadz tytul notatki: ";
        getline(cin, titleUser);
        TextNote titleNote;
        titleNote.setTitle(titleUser);
        cout << "\nWprowadz zawartosc notatki: " << endl;
        getline(cin, contentUser);
        TextNote contentNote;
        contentNote.setContent(contentUser);
        cout<<"\n\tWyswietlenie notatki: "<<endl;
        cout<<"Tytul: "<<titleNote.getTitle()<<endl;
        cout<<"Zawartosc: "<<contentNote.getContent()<<endl;
        cout << "Wprowadz # w celu zatrzymania programu, kliknij enter w celu kontynuacji.";
        getline(cin, stop);
    }while(stop!="#");
    exit(1);

}
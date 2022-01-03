#include<iostream>
#include<vector>
#include<fstream>
#include<string.h>
#include"../include/miasta.h"
#include"funkcje.h"
using namespace std;


//szablon max wielkosc dla roznych typow danych
// obsluga bledow (okreslone parametry)
// graficzna biblioteka jak sie bedzie chcialo

int main()
{

   // vector<Miasto> miasta;
    vector<Wojewodztwo> wojewodztwa;
    wojewodztwa.reserve(16);


    ifstream myFile;
    myFile.open("data/dane.csv");
    if(myFile.is_open()) cout<<"\nERROR: File is open"<<endl;
    if(myFile.fail()) cout<<"ERROR: Fail to open file"<<endl;

    string nazwaWojewodztwa;
    string liczbaLudnosci;
    string polePowierzchni;


    for(int i=0;i<16;i++){
        getline(myFile,nazwaWojewodztwa,',');
        getline(myFile,liczbaLudnosci,',');
        getline(myFile,polePowierzchni,'\n');

        wojewodztwa.emplace_back(nazwaWojewodztwa,stod(liczbaLudnosci),stod(polePowierzchni));
    }
    cout<<"\n|Baza danych wojewodztw|"<<endl;

    cout<<"-------------------------------------"<<endl;
    for(int i=0;i<16;i++)
    {
        cout<<"Numer wojewodztwa: "<<i+1<<endl;
        wojewodztwa[i].printWoj();
        cout<<"-------------------------------------"<<endl;
    }

    string nazwa;
    double liczbaM;
    double pole;
    int rokPow;

    int wybor;



    do
    {

        menu();
        cin>>wybor;

        if(wybor==1)
        {
            int numer;
            cout<<"[^Z powyzszej listy wojewodztw wybierz numer tego do ktorego chcesz dodac miasto]\n";
            cin>>numer;
            cout<<"Wprowadz nazwe miasta: "<<endl;
            cin>>nazwa;
            cout<<"Wprowadz pole powierzchni:"<<endl;
            cin>>pole;
            cout<<"Wprowadz liczbe mieszkancow: "<<endl;
            cin>>liczbaM;
            cout<<"Wprowadz rok powstania: "<<endl;
            cin>>rokPow;
            Miasto *m1=new Miasto(nazwa,liczbaM,pole,rokPow);
          //  miasta.push_back(m1);
            wojewodztwa[numer-1].dodajMiato(m1);


        }

        if(wybor==2)
        {

        }
        if(wybor==3)
        {
           for(int i=0;i<16;i++)
           {

               wojewodztwa[i].print();
           }
        }
        if(wybor==4)
        {
            cout<<"-------------------------------------"<<endl;
            for(int i=0;i<16;i++)
            {
                cout<<"Numer wojewodztwa: "<<i+1<<endl;
                wojewodztwa[i].printWoj();
                cout<<"-------------------------------------"<<endl;
            }
        }
        if(wybor==0)
        {
            exit(1);
        }
    }while(wybor!=0);



myFile.close();
return 0;

}


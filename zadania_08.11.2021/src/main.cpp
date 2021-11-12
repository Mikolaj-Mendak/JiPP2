
#include <iostream>
#include "../include/point.h"
#include "../include/pojazd.h"


using namespace std;

class TestClass {
private:
    const int t = 0;

public:
    TestClass(const int t) : t(t) {
    }
};

int main() {


cout<<"--------------------------Zadanie 1-------------------------------\n";
    {
        Point p1("P1"), p2(5, 10, "P2");

        cout << "Initial values" << endl;
        p1.printData();
        p2.printData();

        cout << endl << "Create copy of point" << endl;
        Point p1c(p1);
        Point p2c(p2);
        //Update copied points names
        p1c.setName("P1c");
        p2c.setName("P2c");

        cout << "Values after copying" << endl;
        p1.printData();
        p2.printData();
        p1c.printData();
        p2c.printData();

        cout << endl << "Update P1 and P2 x and y (increase 10)" << endl;
        p1.setX(10);
        p1.setY(10);
        p2.setX(15);
        p2.setY(15);

        cout << "Values after update values" << endl;
        p1.printData();
        p2.printData();
        p1c.printData();
        p2c.printData();
    }
    cout << "End program" << endl;

    cout<<"\n\n--------------------------Zadanie 2-------------------------------\n";
    Pojazd p1("KR115321","P1",5,"Audi","osobowe");
    Pojazd p2("KRA147321","P2",8,"Ford","bus");

    cout<<"//////WYPISANIE DANYCH:///////"<<endl;
    p1.show();
    Pojazd p1_c(p1); //skopwiowanie dancyh do konstruktora kopiujacego

    cout<<"\n//////WYPISANIE DANYCH PO ZMIANIE://////"<<endl;
    //zmiana danych
    p1.ZmianaDanych(3,"Marek");
    p1.show();

    cout<<"\n//////WYPISANIE DANYCH SKOPIOWANYCH:///////"<<endl;
    p1_c.show();

    cout<<"\n//////SPRAWDZENIE GETTEROW:///////"<<endl;
    cout<<"Nazwa:"<<p1.getNazwa()<<" Marka:"<<p1.getMarka()<<" Typ:"<<p1.getTyp()<<" Numer rejestracyjny:"<<p1.getNumerRejestracyjny()<<endl;

    cout<<"\n////ZASTOSOWANIE SETTEROW/////////"<<endl;
    p1.setNazwa("Ps1");
    p1.setNumerRejestracyjny("WE1234");
    cout<<"\nDane po nowych setterach";
    p1.show();






    return 0;
}

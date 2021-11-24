#include<iostream>
#include "../include/figura.h"
#include "../include/figura_polimorfizm.h"
using namespace std;


int main()
{
/**
 * Dziedziczenie klasy jest uzywane w celu
 * wykorzystania czesci wspolnej
 * oraz uproszczenia kodu
 */
cout<<"\t\tDZIEDZICZENIE KLASY"<<endl;
cout<<"\t--KWADRAT--"<<endl;
Kwadrat kwadrat(4,"square","zielony");
kwadrat.Show();
kwadrat.obwodKwadrat();
kwadrat.poleKwadrat();
cout<<"\t--OKRAG--"<<endl;
Okrag okrag(5,"circle","czerwony");
okrag.Show();
okrag.obwodOkrag();
okrag.poleOkrag();
cout<<"\t--TROJKAT--"<<endl;
Triangle trojkat(3,4,5,"triangle","zolty");
trojkat.Show();
trojkat.obwodTriangle();
trojkat.poleTriangle();

/**
 * polimorfizm jest stosowany gdy chcemy wykorzystac w wielu klasach funkcje
 * dla kazdej klasy moze ona miec inne polecenia natomiast posiada ona ta sama definicje
 */
cout<<"\t\tPOLIMORFIZM"<<endl;
FiguraPolimorfizm *circle = new Circle(5);
FiguraPolimorfizm *rectangle = new Rectangle(5, 18,5);
cout << "Circle area: " << circle->getArea() << endl;
cout << "Rectangle area: " << rectangle->getArea() << endl;




return 0;

}
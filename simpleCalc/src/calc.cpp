#include <iostream>
#include "../include/calc.h"
using namespace std;
void add(int a, int b)
{
    cout<<a + b<<endl;
}

void subtract(int a, int b)
{
    cout<<a - b<<endl;
}

void volume(int a, int b, int h, int H)
{
    cout<<0.5*((a + b))*h*H<<endl;
}

void help()
{
    cout<<"Simple calculator"<<endl;
    cout<<"simpleCalc [nazwa dzialania]"<<"\n"<< endl;
    cout<<"Dzialania:"<<endl;
    cout<<"add [a] [b] \n\t Dodawanie dwoch liczb ([a] i [b]) calkowitych"<< endl;
    cout<<"subtract [a] [b] \n\t Odejmowanie dwoch liczb ([a] i [b]) calkowitych"<< endl;
    cout<<"volume [a] [b] \n\t Obliczanie objetosci graniastoslupa prostego o podstawie trapeza, ([a] i [b]) - podstawy trapeza, [h] - wysokosc trapeza, [H] - wysokosc graniastoslupa"<< endl;

}
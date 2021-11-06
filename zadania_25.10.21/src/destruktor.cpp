#include<iostream>
#include "../header/destruktor.h"

Destruktor::Destruktor()
{
    std::cout<<"-Konstruktor zostal wywolany!\n";
    tab = new int[1024];
}
Destruktor::~Destruktor()
{
    std::cout<<"-Destruktor zostal wywolany!\n";
    delete [] tab;

}

void Destruktor::pauza()
{
    system("PAUSE");
}


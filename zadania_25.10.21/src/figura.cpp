#include <iostream>
#include "../header/figura.h"


Figura::Figura(int wie, Punkt *wie_figury)
: wierzchloki(wie), wierzcholki_figury(wie_figury)
{
    for(int i = 0; i < wie; i++)
    {
        std:: cout<<i+1<<" wierzcholek x:"<<wierzcholki_figury[i].x<<" y:"<<wierzcholki_figury[i].y<<std::endl;
    }

}







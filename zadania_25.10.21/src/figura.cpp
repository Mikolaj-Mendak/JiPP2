#include <iostream>
#include "../header/figura.h"


Figura::Figura(int wierzcholki, Punkt *wierzcholki_figury)
: wierzchloki(wierzcholki), wierzcholki_figury(wierzcholki_figury)
{
    for(int i = 0; i < wierzcholki; i++)
    {
        std:: cout<<i+1<<" wierzcholek x:"<<wierzcholki_figury[i].x<<" y:"<<wierzcholki_figury[i].y<<std::endl;
    }

}







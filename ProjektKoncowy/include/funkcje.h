
#ifndef JIPP_FUNKCJE_H
#define JIPP_FUNKCJE_H
#include<iostream>

void menu();
template <typename T>
T Max(T *Vec)
{
    auto max = 0;

    for(int i = 0; i < 16;i++)
    {
    if( Vec[i] > max )
        max = Vec[i]; //jeśli sprawdzany element tablicy jest większy od tego (dotychczas) największego, to on staje się tym największym

    }
    return max;
}
void help();

#endif //JIPP_FUNKCJE_H

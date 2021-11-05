#include<math.h>
#include "../header/punkt.h"

//konstruktor
Punkt::Punkt(double x, double y)
        :x(x),y(y)
{

}

double Punkt::odleglosc(Punkt p2 )
{
return sqrt((p2.x-x)*(p2.x-x)+(p2.y-y)*(p2.y-y));
}
#include <iostream>
#include<cstring>
#include "../include/calc.h"
using namespace std;


int main(int argc, char *argv[])
{


    int result;
    result = strcmp(argv[1],"add");

    if(result == 0 && argc == 4)
    {
        add(atoi(argv[2]),atoi(argv[3]));
        exit(1);
    }

    result = strcmp(argv[1],"subtract");
    if(result == 0 && argc == 4)
    {
        subtract(atoi(argv[2]),atoi(argv[3]));
        exit(1);
    }

    result = strcmp(argv[1],"volume");
    if(result == 0 && argc == 6)
    {
        volume(atoi(argv[2]),atoi(argv[3]),atoi(argv[4]),atoi(argv[5]));
        exit(1);
    }

    result = strcmp(argv[1],"help");
    if(result == 0 && argc == 2)
    {
        help();
        exit(1);
    }


        cout<<"Blad wprowadzonych argumentow"<<"\n"<< endl;
        help();

    return 0;
}

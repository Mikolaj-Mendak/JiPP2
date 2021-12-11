#include <iostream>
#include <list>
#include <string>
#include <vector>

using namespace std;
int main()
{
    cout<<"-------------------zadanie1---------------"<<endl;

    list<char> alfabet = {{'a'},{'b'}, {'c'}, {'d'}, {'e'}, {'f'}, {'g'}, {'h'}, {'i'}, {'j'}, {'k'}, {'l'},
                          {'m'}, {'n'},{'o'}, {'p'}, {'r'}, {'s'},{'t'}, {'u'},{'w'},{'y'},{'z'}};
    list<char>:: iterator x;

    cout<<"Elementy zapisane w liscie: "<<endl;

    for (x = alfabet.begin(); x != alfabet.end(); x++) {

        cout << (*x) << " "; //iterator uzyty do wyswietlenia elementow przechodzac po liscie
    }
    cout<<endl;

    for ( x = alfabet.begin(); x != alfabet.end(); x++){
        if((*x)<=122 && (*x)>=97)
        {
            (*x) = (*x) - 32;
        }
        cout << (*x) << " ";
    }

    cout<<"\n\n-------------------zadanie2-----------------------"<<endl;







    return 0;
}
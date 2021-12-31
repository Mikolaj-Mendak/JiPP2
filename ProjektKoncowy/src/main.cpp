#include<iostream>
#include<vector>
#include<fstream>
#include"../include/miasta.h"
using namespace std;

/**
 * szablon sprawdzajacy ktory z podanych dwoch argumentow jest wiekszy
 * @tparam T
 * @param x
 * @param y
 * @return
 */

int main()
{

    vector<Miasto> miasta;
    vector<Wojewodztwo> wojewodztwa;
    wojewodztwa.reserve(16);
    //zaladowac dane do wojewodztw z pliku , dodac dane dla miast w wojewodztwach i zapisac do pliku.
    //szablon max wielkosc dla roznych typow danych
    // obsluga bledow (okreslone parametry)
    // graficzna biblioteka jak sie bedzie chcialo

    ifstream myFile;
    myFile.open("dane.csv");
    while(myFile.good()){
        string line;
        getline(myFile,line,',');
        cout<<line<<endl;
    }




return 0;

}


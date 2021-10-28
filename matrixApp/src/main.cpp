#include <iostream>
#include <time.h>
#include <cstdlib>
#include <matrixLib.h>
#include<string>
static int **matrixAllocationInt(int numberOfRows, int numberOfColumns);
static double **matrixAllocationDouble(int numberOfRows, int numberOfColumns);
static int deleteMatrix(int **Matrix, int numberOfRows);
static double deleteMatrix(double **Matrix, int numberOfRows);
void **ReadMatrix(double **matrix, int numberOfRows, int numberOfColumns);
void **ReadMatrix(int **matrix, int numberOfRows, int numberOfColumns);



using namespace std;

int main(int argc, char *argv[]) {



    if(string(argv[1]) == "help" || argc != 2)
    {
        help();
        exit(1);
    }

    int i,j;

    //uzytkownik wybiera typ danych
    int typeOfData = 0;
    cout<<"-----MatrixApp-----"<<endl;
    cout<<"Wybierz typ danych:\n1 - typ danych int.\n2 - typ danych double.\n";
    cin>>typeOfData;
    cout<<endl;


    //---------------------------dodawanie macierzy int---------------------------
    if(string(argv[1]) == "addMatrix" && typeOfData == 1)
    {
        int numberOfRowsOne, numberOfRowsTwo, numberOfColumnsOne, numberOfColumnsTwo;
        cout<<"Podaj ilosc wierszy pierwszej macierzy: ";
        cin>>numberOfRowsOne;
        cout<<endl;
        cout<<"Podaj ilosc kolumn pierwszej macierzy: ";
        cin>>numberOfColumnsOne;
        cout<<endl;
        cout<<"Podaj ilosc wierszy drugiej macierzy: ";
        cin>>numberOfRowsTwo;
        cout<<endl;
        cout<<"Podaj ilosc kolumn drugiej macierzy: ";
        cin>>numberOfColumnsTwo;
        cout<<endl;



        //alokacja pamieci macierzy
        int **matrixOne = matrixAllocationInt(numberOfRowsOne, numberOfColumnsOne);
        int **matrixTwo = matrixAllocationInt(numberOfRowsTwo, numberOfColumnsTwo);

        cout<<"Wprowadz elementy macierzy pierwszej: \n";
        for(i = 0; i < numberOfRowsOne; i++ )
            for(j = 0; j < numberOfColumnsOne; j++)
                cin>>matrixOne[i][j];

        cout<<"Wprowadz elementy macierzy drugiej: \n";
        for(i = 0; i < numberOfRowsTwo; i++ )
            for(j = 0; j < numberOfColumnsTwo; j++)
                cin>>matrixTwo[i][j];

        //wykonanie funkcji dodawania macierzy
        int **matrixResult = addMatrix(matrixOne,matrixTwo,numberOfColumnsOne,numberOfRowsOne);


        //wypisanie macierzy
        cout<<"\nMATRIX ONE: "<<endl;
        ReadMatrix(matrixOne, numberOfRowsOne, numberOfColumnsOne);

        cout<<"\nMATRIX TWO: "<<endl;
        ReadMatrix(matrixTwo, numberOfRowsTwo, numberOfColumnsTwo);

        cout<<"\nMATRIX RESULT: "<<endl;
        ReadMatrix(matrixResult, numberOfRowsOne, numberOfColumnsOne);


        //usuniecie zalokowanej pamieci
        deleteMatrix(matrixOne,numberOfRowsOne);
        deleteMatrix(matrixTwo,numberOfRowsTwo);
        deleteMatrix(matrixResult,numberOfRowsTwo);

        exit(1);
    }


    //---------------------------dodawanie macierzy double---------------------------
    if(string(argv[1]) == "addMatrix" && typeOfData == 2)
    {
        int numberOfRowsOne, numberOfRowsTwo, numberOfColumnsOne, numberOfColumnsTwo;
        cout<<"Podaj ilosc wierszy pierwszej macierzy: ";
        cin>>numberOfRowsOne;
        cout<<endl;
        cout<<"Podaj ilosc kolumn pierwszej macierzy: ";
        cin>>numberOfColumnsOne;
        cout<<endl;
        cout<<"Podaj ilosc wierszy drugiej macierzy: ";
        cin>>numberOfRowsTwo;
        cout<<endl;
        cout<<"Podaj ilosc kolumn drugiej macierzy: ";
        cin>>numberOfColumnsTwo;
        cout<<endl;



        //alokacja pamieci macierzy
        double **matrixOne = matrixAllocationDouble(numberOfRowsOne, numberOfColumnsOne);
        double **matrixTwo = matrixAllocationDouble(numberOfRowsTwo, numberOfColumnsTwo);

        //wprowadzenie elementow macierzy
        cout<<"Wprowadz elementy macierzy pierwszej: \n";
        for(i = 0; i < numberOfRowsOne; i++ )
            for(j = 0; j < numberOfColumnsOne; j++)
                cin>>matrixOne[i][j];

        cout<<"Wprowadz elementy macierzy drugiej: \n";
        for(i = 0; i < numberOfRowsTwo; i++ )
            for(j = 0; j < numberOfColumnsTwo; j++)
                cin>>matrixTwo[i][j];

        //wykonanie funkcji dodawania macierzy
        double **matrixResult = addMatrix(matrixOne,matrixTwo,numberOfColumnsOne,numberOfRowsOne);

        //czytanie macierzy
        cout<<"\nMATRIX ONE: "<<endl;
        ReadMatrix(matrixOne, numberOfRowsOne, numberOfColumnsOne);

        cout<<"\nMATRIX TWO: "<<endl;
        ReadMatrix(matrixTwo, numberOfRowsTwo, numberOfColumnsTwo);

        cout<<"\nMATRIX RESULT: "<<endl;
        ReadMatrix(matrixResult, numberOfRowsOne, numberOfColumnsOne);

        //usuniecie zalokowanej pamieci
        deleteMatrix(matrixOne,numberOfRowsOne);
        deleteMatrix(matrixTwo,numberOfRowsTwo);
        deleteMatrix(matrixResult,numberOfRowsTwo);

        exit(1);
    }

    //---------------------------odejmowanie macierzy int---------------------------
    if(string(argv[1]) == "subtractMatrix" && typeOfData == 1)
    {
        int numberOfRowsOne, numberOfRowsTwo, numberOfColumnsOne, numberOfColumnsTwo;
        cout<<"Podaj ilosc wierszy pierwszej macierzy: ";
        cin>>numberOfRowsOne;
        cout<<endl;
        cout<<"Podaj ilosc kolumn pierwszej macierzy: ";
        cin>>numberOfColumnsOne;
        cout<<endl;
        cout<<"Podaj ilosc wierszy drugiej macierzy: ";
        cin>>numberOfRowsTwo;
        cout<<endl;
        cout<<"Podaj ilosc kolumn drugiej macierzy: ";
        cin>>numberOfColumnsTwo;
        cout<<endl;


        //alokacja pamieci macierzy
        int **matrixOne = matrixAllocationInt(numberOfRowsOne, numberOfColumnsOne);
        int **matrixTwo = matrixAllocationInt(numberOfRowsTwo, numberOfColumnsTwo);

        cout<<"Wprowadz elementy macierzy pierwszej: \n";
        for(i = 0; i < numberOfRowsOne; i++ )
            for(j = 0; j < numberOfColumnsOne; j++)
                cin>>matrixOne[i][j];

        cout<<"Wprowadz elementy macierzy drugiej: \n";
        for(i = 0; i < numberOfRowsTwo; i++ )
            for(j = 0; j < numberOfColumnsTwo; j++)
                cin>>matrixTwo[i][j];

        //wykonanie funkcji odejmowania macierzy
        int **matrixResult = subtractMatrix(matrixOne,matrixTwo,numberOfColumnsOne,numberOfRowsOne);


        //wypisanie macierzy
        cout<<"\nMATRIX ONE: "<<endl;
        ReadMatrix(matrixOne, numberOfRowsOne, numberOfColumnsOne);

        cout<<"\nMATRIX TWO: "<<endl;
        ReadMatrix(matrixTwo, numberOfRowsTwo, numberOfColumnsTwo);

        cout<<"\nMATRIX RESULT: "<<endl;
        ReadMatrix(matrixResult, numberOfRowsOne, numberOfColumnsOne);


        //usuniecie zalokowanej pamieci
        deleteMatrix(matrixOne,numberOfRowsOne);
        deleteMatrix(matrixTwo,numberOfRowsTwo);
        deleteMatrix(matrixResult,numberOfRowsTwo);

        exit(1);
    }



    //---------------------------odejmowanie macierzy double---------------------------
    if(string(argv[1]) == "subtractMatrix" && typeOfData == 2)
    {
        int numberOfRowsOne, numberOfRowsTwo, numberOfColumnsOne, numberOfColumnsTwo;
        cout<<"Podaj ilosc wierszy pierwszej macierzy: ";
        cin>>numberOfRowsOne;
        cout<<endl;
        cout<<"Podaj ilosc kolumn pierwszej macierzy: ";
        cin>>numberOfColumnsOne;
        cout<<endl;
        cout<<"Podaj ilosc wierszy drugiej macierzy: ";
        cin>>numberOfRowsTwo;
        cout<<endl;
        cout<<"Podaj ilosc kolumn drugiej macierzy: ";
        cin>>numberOfColumnsTwo;
        cout<<endl;


        //alokacja pamieci macierzy
        double **matrixOne = matrixAllocationDouble(numberOfRowsOne, numberOfColumnsOne);
        double **matrixTwo = matrixAllocationDouble(numberOfRowsTwo, numberOfColumnsTwo);

        //wprowadzenie elementow macierzy
        cout<<"Wprowadz elementy macierzy pierwszej: \n";
        for(i = 0; i < numberOfRowsOne; i++ )
            for(j = 0; j < numberOfColumnsOne; j++)
                cin>>matrixOne[i][j];

        cout<<"Wprowadz elementy macierzy drugiej: \n";
        for(i = 0; i < numberOfRowsTwo; i++ )
            for(j = 0; j < numberOfColumnsTwo; j++)
                cin>>matrixTwo[i][j];

        //wykonanie funkcji odejmowania macierzy
        double **matrixResult = subtractMatrix(matrixOne,matrixTwo,numberOfColumnsOne,numberOfRowsOne);

        //czytanie macierzy
        cout<<"\nMATRIX ONE: "<<endl;
        ReadMatrix(matrixOne, numberOfRowsOne, numberOfColumnsOne);

        cout<<"\nMATRIX TWO: "<<endl;
        ReadMatrix(matrixTwo, numberOfRowsTwo, numberOfColumnsTwo);

        cout<<"\nMATRIX RESULT: "<<endl;
        ReadMatrix(matrixResult, numberOfRowsOne, numberOfColumnsOne);

        //usuniecie zalokowanej pamieci
        deleteMatrix(matrixOne,numberOfRowsOne);
        deleteMatrix(matrixTwo,numberOfRowsTwo);
        deleteMatrix(matrixResult,numberOfRowsTwo);

        exit(1);
    }


        //--------------mnozenie macierzy typu int
    if(string(argv[1]) == "multiplyMatrix" && typeOfData == 1) {
        int numberOfRowsOne, numberOfRowsTwo, numberOfColumnsOne, numberOfColumnsTwo;
        cout << "Podaj ilosc wierszy pierwszej macierzy: ";
        cin >> numberOfRowsOne;
        cout << endl;
        cout << "Podaj ilosc kolumn pierwszej macierzy: ";
        cin >> numberOfColumnsOne;
        cout << endl;
        cout << "Podaj ilosc wierszy drugiej macierzy (przez ktora bedziemy mnozyc): ";
        cin >> numberOfRowsTwo;
        cout << endl;
        cout << "Podaj ilosc kolumn drugiej macierzy (przez ktora bedziemy mnozyc): ";
        cin >> numberOfColumnsTwo;
        cout << endl;



        //alokacja pamieci macierzy
        int **matrixOne = matrixAllocationInt(numberOfRowsOne, numberOfColumnsOne);
        int **matrixTwo = matrixAllocationInt(numberOfRowsTwo, numberOfColumnsTwo);

        //wprowadzenie elementow macierzy
        cout<<"Wprowadz elementy macierzy pierwszej: \n";
        for(i = 0; i < numberOfRowsOne; i++ )
            for(j = 0; j < numberOfColumnsOne; j++)
                cin>>matrixOne[i][j];

        cout<<"Wprowadz elementy macierzy drugiej: \n";
        for(i = 0; i < numberOfRowsTwo; i++ )
            for(j = 0; j < numberOfColumnsTwo; j++)
                cin>>matrixTwo[i][j];

        //wykonanie funkcji mnozenia macierzy
        int **matrixResult = multiplyMatrix(matrixOne,matrixTwo,numberOfRowsOne,numberOfColumnsOne,numberOfColumnsTwo);

        //czytanie macierzy
        cout<<"\nMATRIX ONE: "<<endl;
        ReadMatrix(matrixOne, numberOfRowsOne, numberOfColumnsOne);

        cout<<"\nMATRIX TWO: "<<endl;
        ReadMatrix(matrixTwo, numberOfRowsTwo, numberOfColumnsTwo);

        cout<<"\nMATRIX RESULT: "<<endl;
        ReadMatrix(matrixResult, numberOfRowsOne, numberOfColumnsTwo);

        //usuniecie zalokowanej pamieci
        deleteMatrix(matrixOne,numberOfRowsOne);
        deleteMatrix(matrixTwo,numberOfRowsTwo);
        deleteMatrix(matrixResult,numberOfRowsOne);

        exit(1);

    }

    //--------------mnozenie macierzy typu double
    if(string(argv[1]) == "multiplyMatrix" && typeOfData == 2) {
        int numberOfRowsOne, numberOfRowsTwo, numberOfColumnsOne, numberOfColumnsTwo;
        cout << "Podaj ilosc wierszy pierwszej macierzy: ";
        cin >> numberOfRowsOne;
        cout << endl;
        cout << "Podaj ilosc kolumn pierwszej macierzy: ";
        cin >> numberOfColumnsOne;
        cout << endl;
        cout << "Podaj ilosc wierszy drugiej macierzy (przez ktora bedziemy mnozyc): ";
        cin >> numberOfRowsTwo;
        cout << endl;
        cout << "Podaj ilosc kolumn drugiej macierzy (przez ktora bedziemy mnozyc): ";
        cin >> numberOfColumnsTwo;
        cout << endl;



        //alokacja pamieci macierzy
        double **matrixOne = matrixAllocationDouble(numberOfRowsOne, numberOfColumnsOne);
        double **matrixTwo = matrixAllocationDouble(numberOfRowsTwo, numberOfColumnsTwo);

        //wprowadzenie elementow macierzy
        cout<<"Wprowadz elementy macierzy pierwszej: \n";
        for(i = 0; i < numberOfRowsOne; i++ )
            for(j = 0; j < numberOfColumnsOne; j++)
                cin>>matrixOne[i][j];

        cout<<"Wprowadz elementy macierzy drugiej: \n";
        for(i = 0; i < numberOfRowsTwo; i++ )
            for(j = 0; j < numberOfColumnsTwo; j++)
                cin>>matrixTwo[i][j];

        //wykonanie funkcji mnozenia macierzy
        double **matrixResult = multiplyMatrix(matrixOne,matrixTwo,numberOfRowsOne,numberOfColumnsOne,numberOfColumnsTwo);

        //czytanie macierzy
        cout<<"\nMATRIX ONE: "<<endl;
        ReadMatrix(matrixOne, numberOfRowsOne, numberOfColumnsOne);

        cout<<"\nMATRIX TWO: "<<endl;
        ReadMatrix(matrixTwo, numberOfRowsTwo, numberOfColumnsTwo);

        cout<<"\nMATRIX RESULT: "<<endl;
        ReadMatrix(matrixResult, numberOfRowsOne, numberOfColumnsTwo);

        //usuniecie zalokowanej pamieci
        deleteMatrix(matrixOne,numberOfRowsOne);
        deleteMatrix(matrixTwo,numberOfRowsTwo);
        deleteMatrix(matrixResult,numberOfRowsOne);

        exit(1);

    }



    //--------------mnozenie macierzy przez skalar int
    if(string(argv[1]) == "multiplyByScalar" && typeOfData == 1) {
        int numberOfRowsOne, numberOfColumnsOne;
        int skalar;
        cout << "Podaj ilosc wierszy macierzy: ";
        cin >> numberOfRowsOne;
        cout << endl;
        cout << "Podaj ilosc kolumn macierzy: ";
        cin >> numberOfColumnsOne;
        cout << endl;
        cout << "Podaj wartsc skalara: ";
        cin >> skalar;
        cout << endl;

        //alokacja pamieci macierzy
        int **matrixOne = matrixAllocationInt(numberOfRowsOne, numberOfColumnsOne);

        //wprowadzenie elementow macierzy
        cout << "Wprowadz elementy macierzy pierwszej: \n";
        for (i = 0; i < numberOfRowsOne; i++)
            for (j = 0; j < numberOfColumnsOne; j++)
                cin >> matrixOne[i][j];

        //wykonanie operacji mnozenia przes skalar
        matrixOne = multiplyByScalar(matrixOne, numberOfRowsOne, numberOfColumnsOne, skalar);


        //czytanie macierzy
        cout << "\nMATRIX RESULT: " << endl;
        ReadMatrix(matrixOne, numberOfRowsOne, numberOfColumnsOne);


        //usuniecie zalokowanej pamieci
        deleteMatrix(matrixOne, numberOfRowsOne);

        exit(1);


    }




    //--------------mnozenie macierzy przez skalar double
    if(string(argv[1]) == "multiplyByScalar" && typeOfData == 2) {
        int numberOfRowsOne, numberOfColumnsOne;
        double skalar;
        cout << "Podaj ilosc wierszy macierzy: ";
        cin >> numberOfRowsOne;
        cout << endl;
        cout << "Podaj ilosc kolumn macierzy: ";
        cin >> numberOfColumnsOne;
        cout << endl;
        cout << "Podaj wartsc skalara: ";
        cin >> skalar;
        cout << endl;

        //alokacja pamieci macierzy
        double **matrixOne = matrixAllocationDouble(numberOfRowsOne, numberOfColumnsOne);

        //wprowadzenie elementow macierzy
        cout << "Wprowadz elementy macierzy pierwszej: \n";
        for (i = 0; i < numberOfRowsOne; i++)
            for (j = 0; j < numberOfColumnsOne; j++)
                cin >> matrixOne[i][j];

        //wykonanie operacji mnozenia przes skalar
        matrixOne = multiplyByScalar(matrixOne, numberOfRowsOne, numberOfColumnsOne, skalar);


        //czytanie macierzy
        cout << "\nMATRIX RESULT: " << endl;
        ReadMatrix(matrixOne, numberOfRowsOne, numberOfColumnsOne);


        //usuniecie zalokowanej pamieci
        deleteMatrix(matrixOne, numberOfRowsOne);

        exit(1);


    }




    //--------------transponowanie macierzy typ int

        if(string(argv[1]) == "transpozeMatrix" && typeOfData == 1) {
            int numberOfRowsOne, numberOfColumnsOne;
            cout << "Podaj ilosc wierszy macierzy: ";
            cin >> numberOfRowsOne;
            cout << endl;
            cout << "Podaj ilosc kolumn macierzy: ";
            cin >> numberOfColumnsOne;
            cout << endl;

            //alokacja pamieci macierzy
            int **matrixOne = matrixAllocationInt(numberOfRowsOne, numberOfColumnsOne);

            //wprowadzenie elementow macierzy
            cout << "Wprowadz elementy macierzy pierwszej: \n";
            for (i = 0; i < numberOfRowsOne; i++)
                for (j = 0; j < numberOfColumnsOne; j++)
                    cin >> matrixOne[i][j];

            //transponuje macierz
            int **matrixResult = transpozeMatrix(matrixOne, numberOfRowsOne, numberOfColumnsOne);

            //czytanie macierzy
            cout << "\nMATRIX RESULT: " << endl;
            ReadMatrix(matrixOne, numberOfRowsOne, numberOfColumnsOne);

            cout << "\nMATRIX RESULT: " << endl;
            ReadMatrix(matrixResult, numberOfColumnsOne, numberOfRowsOne);

            //usuniecie zalokowanej pamieci
            deleteMatrix(matrixOne, numberOfRowsOne);
            deleteMatrix(matrixResult, numberOfColumnsOne);

            exit(1);


        }




    //--------------transponowanie macierzy typ double

    if(string(argv[1]) == "transpozeMatrix" && typeOfData == 2) {
        int numberOfRowsOne, numberOfColumnsOne;
        cout << "Podaj ilosc wierszy macierzy: ";
        cin >> numberOfRowsOne;
        cout << endl;
        cout << "Podaj ilosc kolumn macierzy: ";
        cin >> numberOfColumnsOne;
        cout << endl;

        //alokacja pamieci macierzy
        double **matrixOne = matrixAllocationDouble(numberOfRowsOne, numberOfColumnsOne);

        //wprowadzenie elementow macierzy
        cout << "Wprowadz elementy macierzy pierwszej: \n";
        for (i = 0; i < numberOfRowsOne; i++)
            for (j = 0; j < numberOfColumnsOne; j++)
                cin >> matrixOne[i][j];

        //transponuje macierz
        double **matrixResult = transpozeMatrix(matrixOne, numberOfRowsOne, numberOfColumnsOne);

        //czytanie macierzy
        cout << "\nMATRIX RESULT: " << endl;
        ReadMatrix(matrixOne, numberOfRowsOne, numberOfColumnsOne);

        cout << "\nMATRIX RESULT: " << endl;
        ReadMatrix(matrixResult, numberOfColumnsOne, numberOfRowsOne);

        //usuniecie zalokowanej pamieci
        deleteMatrix(matrixOne, numberOfRowsOne);
        deleteMatrix(matrixResult, numberOfColumnsOne);

        exit(1);


    }



    //--------------potegowanie macierzy typ int

    if(string(argv[1]) == "powerMatrix" && typeOfData == 1)
    {
        int numberOfRowsOne, numberOfColumnsOne;
        unsigned int power;
        cout << "Podaj stopien potegi: ";
        cin >> power;
        cout << "Podaj ilosc wierszy macierzy: ";
        cin >> numberOfRowsOne;
        cout << endl;
        cout << "Podaj ilosc kolumn macierzy: ";
        cin >> numberOfColumnsOne;
        cout << endl;


        //alokacja pamieci macierzy
        int **matrixOne = matrixAllocationInt(numberOfRowsOne, numberOfColumnsOne);

        //wprowadzenie elementow macierzy
        cout << "Wprowadz elementy macierzy pierwszej: \n";
        for (i = 0; i < numberOfRowsOne; i++)
            for (j = 0; j < numberOfColumnsOne; j++)
                cin >> matrixOne[i][j];


        //podnosze macierz do potegi
       int **matrixResult = powerMatrix(matrixOne, numberOfRowsOne, numberOfColumnsOne,power);



        //czytanie macierzy
        cout << "\nMATRIX RESULT: " << endl;
        ReadMatrix(matrixOne, numberOfRowsOne, numberOfColumnsOne);

        cout << "\nMATRIX RESULT: " << endl;
        ReadMatrix(matrixResult, numberOfColumnsOne, numberOfRowsOne);


        //usuniecie zalokowanej pamieci
        deleteMatrix(matrixOne, numberOfRowsOne);
        deleteMatrix(matrixResult, numberOfRowsOne);

        exit(1);
    }

    //--------------potegowanie macierzy typ double
    if(string(argv[1]) == "powerMatrix" && typeOfData == 2)
    {
        int numberOfRowsOne, numberOfColumnsOne;
        unsigned int power;
        cout << "Podaj stopien potegi: ";
        cin >> power;
        cout << "Podaj ilosc wierszy macierzy: ";
        cin >> numberOfRowsOne;
        cout << endl;
        cout << "Podaj ilosc kolumn macierzy: ";
        cin >> numberOfColumnsOne;
        cout << endl;


        //alokacja pamieci macierzy
        double **matrixOne = matrixAllocationDouble(numberOfRowsOne, numberOfColumnsOne);

        //wprowadzenie elementow macierzy
        cout << "Wprowadz elementy macierzy pierwszej: \n";
        for (i = 0; i < numberOfRowsOne; i++)
            for (j = 0; j < numberOfColumnsOne; j++)
                cin >> matrixOne[i][j];


        //podnosze macierz do potegi
        double **matrixResult = powerMatrix(matrixOne, numberOfRowsOne, numberOfColumnsOne,power);

        //czytanie macierzy
        cout << "\nMATRIX RESULT: " << endl;
        ReadMatrix(matrixOne, numberOfRowsOne, numberOfColumnsOne);

        cout << "\nMATRIX RESULT: " << endl;
        ReadMatrix(matrixResult, numberOfColumnsOne, numberOfRowsOne);


        //usuniecie zalokowanej pamieci
        deleteMatrix(matrixOne, numberOfRowsOne);
        deleteMatrix(matrixResult, numberOfRowsOne);

        exit(1);
    }


    //--------------wyznacznik macierzy typ int
    if(string(argv[1]) == "determinantMatrix" && typeOfData == 1)
    {
        int numberOfRowsOne, numberOfColumnsOne;
        cout << "Podaj ilosc wierszy macierzy: ";
        cin >> numberOfRowsOne;
        cout << endl;
        cout << "Podaj ilosc kolumn macierzy: ";
        cin >> numberOfColumnsOne;
        cout << endl;

        //alokacja pamieci macierzy
        int **matrixOne = matrixAllocationInt(numberOfRowsOne, numberOfColumnsOne);

        //wprowadzenie elementow macierzy
        cout << "Wprowadz elementy macierzy pierwszej: \n";
        for (i = 0; i < numberOfRowsOne; i++)
            for (j = 0; j < numberOfColumnsOne; j++)
                cin >> matrixOne[i][j];

        //wyznaczam wyznacznik macierzy
        int wyznacznik = determinantMatrix(matrixOne, numberOfRowsOne, numberOfColumnsOne);

        //czytanie macierzy
        cout << "\nMATRIX RESULT: " << endl;
        ReadMatrix(matrixOne, numberOfRowsOne, numberOfColumnsOne);

        cout<<"Wyznacznik macierzy wynosi: "<<wyznacznik<<endl;



        //usuniecie zalokowanej pamieci
        deleteMatrix(matrixOne, numberOfRowsOne);

        exit(1);
    }



    //--------------wyznacznik macierzy typ double
    if(string(argv[1]) == "determinantMatrix" && typeOfData == 2)
    {
        int numberOfRowsOne, numberOfColumnsOne;
        cout << "Podaj ilosc wierszy macierzy: ";
        cin >> numberOfRowsOne;
        cout << endl;
        cout << "Podaj ilosc kolumn macierzy: ";
        cin >> numberOfColumnsOne;
        cout << endl;

        //alokacja pamieci macierzy
        double **matrixOne = matrixAllocationDouble(numberOfRowsOne, numberOfColumnsOne);

        //wprowadzenie elementow macierzy
        cout << "Wprowadz elementy macierzy pierwszej: \n";
        for (i = 0; i < numberOfRowsOne; i++)
            for (j = 0; j < numberOfColumnsOne; j++)
                cin >> matrixOne[i][j];

        //wyznaczam wyznacznik macierzy
        double wyznacznik = determinantMatrix(matrixOne, numberOfRowsOne, numberOfColumnsOne);

        //czytanie macierzy
        cout << "\nMATRIX RESULT: " << endl;
        ReadMatrix(matrixOne, numberOfRowsOne, numberOfColumnsOne);

        cout<<"Wyznacznik macierzy wynosi: "<<wyznacznik<<endl;



        //usuniecie zalokowanej pamieci
        deleteMatrix(matrixOne, numberOfRowsOne);

        exit(1);
    }





    //--------------diagonalnosc macierzy typ int
    if(string(argv[1]) == "matrixIsDiagonal" && typeOfData == 1) {
        int numberOfRowsOne, numberOfColumnsOne;
        cout << "Podaj ilosc wierszy macierzy: ";
        cin >> numberOfRowsOne;
        cout << endl;
        cout << "Podaj ilosc kolumn macierzy: ";
        cin >> numberOfColumnsOne;
        cout << endl;

        //alokacja pamieci macierzy
        int **matrixOne = matrixAllocationInt(numberOfRowsOne, numberOfColumnsOne);

        //wprowadzenie elementow macierzy
        cout << "Wprowadz elementy macierzy pierwszej: \n";
        for (i = 0; i < numberOfRowsOne; i++)
            for (j = 0; j < numberOfColumnsOne; j++)
                cin >> matrixOne[i][j];


        if (matrixIsDiagonal(matrixOne, numberOfRowsOne, numberOfColumnsOne))
            cout << "Macierz jest diagonalna.";
        else cout<< "Macierz nie jest diagonalna";


        //usuniecie zalokowanej pamieci
        deleteMatrix(matrixOne, numberOfRowsOne);

        exit(1);
    }



    //--------------diagonalnosc macierzy typ double
    if(string(argv[1]) == "matrixIsDiagonal" && typeOfData == 2) {
        int numberOfRowsOne, numberOfColumnsOne;
        cout << "Podaj ilosc wierszy macierzy: ";
        cin >> numberOfRowsOne;
        cout << endl;
        cout << "Podaj ilosc kolumn macierzy: ";
        cin >> numberOfColumnsOne;
        cout << endl;

        //alokacja pamieci macierzy
        double **matrixOne = matrixAllocationDouble(numberOfRowsOne, numberOfColumnsOne);

        //wprowadzenie elementow macierzy
        cout << "Wprowadz elementy macierzy pierwszej: \n";
        for (i = 0; i < numberOfRowsOne; i++)
            for (j = 0; j < numberOfColumnsOne; j++)
                cin >> matrixOne[i][j];


        if (matrixIsDiagonal(matrixOne, numberOfRowsOne, numberOfColumnsOne))
            cout << "Macierz jest diagonalna.";
        else cout<< "Macierz nie jest diagonalna";


        //usuniecie zalokowanej pamieci
        deleteMatrix(matrixOne, numberOfRowsOne);

        exit(1);
    }


    //---------swap typ int -----------
    if(string(argv[1]) == "swap" && typeOfData == 1) {
        int a,b;
        cout << "Wprowadz wartosc zmiennej a"<<endl;
        cin >> a;
        cout << "Wprowadz wartosc zmiennej b"<<endl;
        cin >> b;

        swap(a,b);

        cout<<"Zmienne po zamianie swapem: \n"<<"a = "<<a<<"\nb = "<<b<<endl;

        exit(1);
    }

    //---------swap typ double-----------
    if(string(argv[1]) == "swap" && typeOfData == 2) {
        double a,b;
        cout << "Wprowadz wartosc zmiennej a"<<endl;
        cin >> a;
        cout << "Wprowadz wartosc zmiennej b"<<endl;
        cin >> b;

        swap(a,b);

        cout<<"Zmienne po zamianie swapem: \n"<<"a = "<<a<<"\nb = "<<b<<endl;

        exit(1);
    }

    //------------sortRow typu int -----------------
    if(string(argv[1]) == "sortRow" && typeOfData == 1) {
        int numberOfColumns;
        cout<<"Wprowadz liczbe kolumn tablicy: \n";
        cin >> numberOfColumns;

        //alokacja tablicy jednowymiarowej
        int *tab = new int [numberOfColumns];

        //wprowadzenie wartosci do tablicy
        cout<<"Wprowadz wartosci do tablicy:  \n";
        for(i = 0 ; i < numberOfColumns; i++)
            cin>>tab[i];

        //sortowanie tablicy
        tab = sortRow(tab,numberOfColumns);

        cout<<"Posortowana tablica: ";
        for(i = 0 ; i < numberOfColumns; i++)
            cout<<tab[i]<<" ";

        delete [] tab;

        exit(1);
    }

    //------------sortRow typu double -----------------
    if(string(argv[1]) == "sortRow" && typeOfData == 2) {
        int numberOfColumns;
        cout<<"Wprowadz liczbe kolumn tablicy: \n";
        cin >> numberOfColumns;

        //alokacja tablicy jednowymiarowej
        double *tab = new double [numberOfColumns];

        //wprowadzenie wartosci do tablicy
        cout<<"Wprowadz wartosci do tablicy: \n";
        for(i = 0 ; i < numberOfColumns; i++)
            cin>>tab[i];

        //sortowanie tablicy
        tab = sortRow(tab,numberOfColumns);

        cout<<"Posortowana tablica: ";
        for(i = 0 ; i < numberOfColumns; i++)
            cout<<tab[i]<<" ";

        delete [] tab;

        exit(1);
    }


    //------------sortRowInMatrix typu int -----------------
    if(string(argv[1]) == "sortRowInMatrix" && typeOfData == 1) {
        int numberOfRowsOne, numberOfColumnsOne;
        cout << "Podaj ilosc wierszy macierzy: ";
        cin >> numberOfRowsOne;
        cout << endl;
        cout << "Podaj ilosc kolumn macierzy: ";
        cin >> numberOfColumnsOne;
        cout << endl;


        //alokacja pamieci macierzy
        int **matrixOne = matrixAllocationInt(numberOfRowsOne, numberOfColumnsOne);

        //wprowadzenie elementow macierzy
        cout << "Wprowadz elementy macierzy pierwszej: \n";
        for (i = 0; i < numberOfRowsOne; i++)
            for (j = 0; j < numberOfColumnsOne; j++)
                cin >> matrixOne[i][j];

        //posortowanie wierszy macierzy
        int **matrixResult = sortRowInMatrix(matrixOne,numberOfRowsOne,numberOfRowsOne);

        //czytanie macierzy
        cout << "\nMATRIX ONE: " << endl;
        ReadMatrix(matrixOne, numberOfRowsOne, numberOfColumnsOne);
        cout << "\nMATRIX RESULT: " << endl;
        ReadMatrix(matrixResult, numberOfRowsOne, numberOfColumnsOne);



        //usuniecie zalokowanej pamieci
        deleteMatrix(matrixOne, numberOfRowsOne);
        deleteMatrix(matrixResult, numberOfRowsOne);

        exit(1);


    }



    //------------sortRowInMatrix typu double -----------------
    if(string(argv[1]) == "sortRowInMatrix" && typeOfData == 2) {
        int numberOfRowsOne, numberOfColumnsOne;
        cout << "Podaj ilosc wierszy macierzy: ";
        cin >> numberOfRowsOne;
        cout << endl;
        cout << "Podaj ilosc kolumn macierzy: ";
        cin >> numberOfColumnsOne;
        cout << endl;


        //alokacja pamieci macierzy
        double **matrixOne = matrixAllocationDouble(numberOfRowsOne, numberOfColumnsOne);

        //wprowadzenie elementow macierzy
        cout << "Wprowadz elementy macierzy pierwszej: \n";
        for (i = 0; i < numberOfRowsOne; i++)
            for (j = 0; j < numberOfColumnsOne; j++)
                cin >> matrixOne[i][j];

        //posortowanie wierszy macierzy
        double **matrixResult = sortRowInMatrix(matrixOne,numberOfRowsOne,numberOfRowsOne);

        //czytanie macierzy
        cout << "\nMATRIX ONE: " << endl;
        ReadMatrix(matrixOne, numberOfRowsOne, numberOfColumnsOne);
        cout << "\nMATRIX RESULT: " << endl;
        ReadMatrix(matrixResult, numberOfRowsOne, numberOfColumnsOne);



        //usuniecie zalokowanej pamieci
        deleteMatrix(matrixOne, numberOfRowsOne);
        deleteMatrix(matrixResult, numberOfRowsOne);

        exit(1);


    }


    help();


    return 0;
}


//funkcja alokujaca pamiec macierzy 2d int
static int **matrixAllocationInt(int numberOfRows, int numberOfColumns)
{
    int **Matrix = new int *[numberOfRows];
    for(int i = 0; i < numberOfRows; i++)
    {
        Matrix[i] = new int [numberOfColumns];
    }
    return Matrix;
}

//funkcja alokujaca pamiec macierzy 2d double
static double **matrixAllocationDouble(int numberOfRows, int numberOfColumns)
{
    double **Matrix = new double *[numberOfRows];
    for(int i = 0; i < numberOfRows; i++)
    {
        Matrix[i] = new double [numberOfColumns];
    }
    return Matrix;
}

//zwalniam pamiec zaalokowana dla macierzy 2d int
static int deleteMatrix(int **Matrix, int numberOfRows)
{
    for(int i = 0; i < numberOfRows; i++)
    delete [] Matrix[i];
    delete [] Matrix;
    Matrix = NULL;

}

//zwalniam pamiec zaalokowana dla macierzy 2d double
static double deleteMatrix(double **Matrix, int numberOfRows)
{
    for(int i = 0; i < numberOfRows; i++)
        delete [] Matrix[i];
    delete [] Matrix;
    Matrix = NULL;

}


//czytanie macierzy 2d int
void **ReadMatrix(int **matrix, int numberOfRows, int numberOfColumns)
{
    int i,j;
    for(i = 0; i < numberOfRows; i++)
    {
        for (j = 0; j < numberOfColumns; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
}

//czytanie macierzy 2d double
void **ReadMatrix(double **matrix, int numberOfRows, int numberOfColumns)
{
    int i,j;
    for(i = 0; i < numberOfRows; i++)
    {
        for (j = 0; j < numberOfColumns; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
}

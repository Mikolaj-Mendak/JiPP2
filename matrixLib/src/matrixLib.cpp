#include <iostream>
#include"../include/matrixLib.h"
#include<math.h>
#include <algorithm>

using namespace std;


//opisy funkcji znajduja sie w matrixLib.h

int **addMatrix(int **matrixOne, int **matrixTwo, int numberOfColumns, int numberOfRows)
{
    //tworze macierz wynikowa oraz alokuje jej pamiec
    int **matrixResult = new int *[numberOfRows];

    for(int i = 0; i < numberOfRows; i++)
        matrixResult[i] = new int [numberOfColumns];

    //wykonuje operacje dodwania macierzy
    for(int i=0;i<numberOfRows;i++)
        for(int j=0;j<numberOfColumns;j++)
        {
            matrixResult[i][j] = matrixOne[i][j] + matrixTwo[i][j];
        }
    return matrixResult;

}


double **addMatrix(double **matrixOne, double **matrixTwo, int numberOfColumns, int numberOfRows)
{
    //tworze macierz wynikowa oraz alokuje jej pamiec
    double **matrixResult = new double *[numberOfRows];

    for(int i = 0; i < numberOfRows; i++)
        matrixResult[i] = new double [numberOfColumns];

    //wykonuje operacje dodwania macierzy
    for(int i=0;i<numberOfRows;i++)
        for(int j=0;j<numberOfColumns;j++)
        {
            matrixResult[i][j] = matrixOne[i][j] + matrixTwo[i][j];
        }
    return matrixResult;

}

int **subtractMatrix(int **matrixOne, int **matrixTwo, int numberOfColumns, int numberOfRows)
{
    //tworze macierz wynikowa oraz alokuje jej pamiec
    int **matrixResult = new int *[numberOfRows];

    for(int i = 0; i < numberOfRows; i++)
        matrixResult[i] = new int [numberOfColumns];

    //wykonuje operacje dodwania macierzy
    for(int i=0;i<numberOfRows;i++)
        for(int j=0;j<numberOfColumns;j++)
        {
            matrixResult[i][j] = matrixOne[i][j] - matrixTwo[i][j];
        }
    return matrixResult;

}


double **subtractMatrix(double **matrixOne, double **matrixTwo, int numberOfColumns, int numberOfRows)
{
    //tworze macierz wynikowa oraz alokuje jej pamiec
    double **matrixResult = new double *[numberOfRows];

    for (int i = 0; i < numberOfRows; i++)
        matrixResult[i] = new double[numberOfColumns];

    //wykonuje operacje dodwania macierzy
    for (int i = 0; i < numberOfRows; i++)
        for (int j = 0; j < numberOfColumns; j++) {
            matrixResult[i][j] = matrixOne[i][j] - matrixTwo[i][j];
        }
    return matrixResult;

}

int **multiplyMatrix(int **MatrixOne, int **MatrixTwo, int numberOfRowsOne, int numberOfColumnsOne, int numberOfColumnsTwo)
{

    int **matrixResult = new int*[numberOfRowsOne];

    for (int k = 0; k < numberOfRowsOne; k++)
        matrixResult[k] = new int[numberOfColumnsTwo];


    for (int i = 0; i < numberOfRowsOne; i++) {
        for (int j = 0; j < numberOfColumnsTwo; j++) {
            matrixResult[i][j] = 0;
            for (int k = 0; k < numberOfColumnsOne; k++) {
                matrixResult[i][j] += MatrixOne[i][k] * MatrixTwo[k][j];
            }
        }
    }

    return matrixResult;



}

double **multiplyMatrix(double **MatrixOne, double **MatrixTwo, int numberOfRowsOne, int numberOfColumnsOne, int numberOfColumnsTwo)
{

    double **matrixResult = new double*[numberOfRowsOne];

    for (int k = 0; k < numberOfRowsOne; k++)
        matrixResult[k] = new double[numberOfColumnsTwo];


    for (int i = 0; i < numberOfRowsOne; i++) {
        for (int j = 0; j < numberOfColumnsTwo; j++) {
            matrixResult[i][j] = 0;
            for (int k = 0; k < numberOfColumnsOne; k++) {
                matrixResult[i][j] += MatrixOne[i][k] * MatrixTwo[k][j];
            }
        }
    }

    return matrixResult;



}

int **multiplyByScalar(int **matrixOne, int numberOfRowsOne, int numberOfColumnsOne, int scalar)
{

    for( int i = 0; i < numberOfRowsOne; i++ )
        for( int j = 0; j < numberOfColumnsOne; j++ ) matrixOne[i][j] *= scalar;

        return matrixOne;
}

double **multiplyByScalar(double **matrixOne, double numberOfRowsOne, int numberOfColumnsOne, double scalar)
{

    for( int i = 0; i < numberOfRowsOne; i++ )
        for( int j = 0; j < numberOfColumnsOne; j++ ) matrixOne[i][j] *= scalar;

        return matrixOne;
}


int **transpozeMatrix(int **matrixOne, int numberOfRows, int numberOfCOlumns)
{

    //tworze macierz wynikowa oraz alokuje jej pamiec
    //w przypadku transponowania nalezy zamienic miejscami przy alokacji liczbe kolumn z liczba wierszy
    int **matrixResult = new int *[numberOfCOlumns];

    for(int i = 0; i < numberOfRows; i++)
        matrixResult[i] = new int [numberOfRows];

    for (int i = 0; i < numberOfRows; ++i)
        for (int j = 0; j < numberOfCOlumns; ++j)
        {
            matrixResult[j][i] = matrixOne[i][j];
        }


    return matrixResult;
}


double **transpozeMatrix(double **matrixOne, int numberOfRows, int numberOfCOlumns)
{

    //tworze macierz wynikowa oraz alokuje jej pamiec
    //w przypadku transponowania nalezy zamienic miejscami przy alokacji liczbe kolumn z liczba wierszy
    double **matrixResult = new double *[numberOfCOlumns];

    for(int i = 0; i < numberOfRows; i++)
        matrixResult[i] = new double [numberOfRows];

    for (int i = 0; i < numberOfRows; ++i)
        for (int j = 0; j < numberOfCOlumns; ++j)
        {
            matrixResult[j][i] = matrixOne[i][j];
        }

    return matrixResult;
}


int **powerMatrix(int **matrixA, int numberOfRows, int numberOfColumns,unsigned int power)
{

    int i,j,result,k;

    //tworze macierz wynikowa oraz alokuje jej pamiec
    int  **matrixResult = new int *[numberOfRows];

    for(int i = 0; i < numberOfRows; i++)
        matrixResult[i] = new int [numberOfColumns];

    //tworze macierz pomocnicza
    int **matrixTemp = new int *[numberOfRows];

    for(int i = 0; i < numberOfRows; i++)
        matrixTemp[i] = new int [numberOfColumns];



    //tworze kopie macierzy matrixResult w macierzy matrixA
    for(i = 0; i < numberOfRows; i++)
    {
        for(j = 0; j < numberOfColumns; j++)
        {
            matrixResult[i][j] = matrixA[i][j];
        }
    }

    //wykonuje mnozenie macierzy przez sama siebie tyle razy ile wynosi potega
    while(power > 1)
    {
        for( i = 0; i < numberOfRows; i++ )
        {
            for (j = 0; j < numberOfColumns; j++)
            {
                result = 0;
                for (k = 0; k < numberOfColumns; k++)
                {
                    result += matrixResult[i][k] * matrixA[k][j];
                }
                matrixTemp[i][j] = result;
            }
        }
        for (int k = 0; k < numberOfRows; k++)
        {
            for (int l = 0; l < numberOfColumns;l++)
            matrixResult[k][l] = matrixTemp[k][l];
        }

        power--;

    }

    for(i = 0; i < numberOfRows;i++)
        delete [] matrixTemp[i];
    delete [] matrixTemp;
    matrixTemp = NULL;




    return matrixResult;



}


double **powerMatrix(double **matrixA, int numberOfRows, int numberOfColumns,unsigned int power)
{

    int i,j,k;
    double result;

    //tworze macierz wynikowa oraz alokuje jej pamiec
    double  **matrixResult = new double *[numberOfRows];

    for(int i = 0; i < numberOfRows; i++)
        matrixResult[i] = new double [numberOfColumns];

    //tworze macierz pomocnicza
    double **matrixTemp = new double *[numberOfRows];

    for(int i = 0; i < numberOfRows; i++)
        matrixTemp[i] = new double [numberOfColumns];



    //tworze kopie macierzy matrixResult w macierzy matrixA
    for(i = 0; i < numberOfRows; i++)
    {
        for(j = 0; j < numberOfColumns; j++)
        {
            matrixResult[i][j] = matrixA[i][j];
        }
    }

    //wykonuje mnozenie macierzy przez sama siebie tyle razy ile wynosi potega
    while(power > 1)
    {
        for( i = 0; i < numberOfRows; i++ )
        {
            for (j = 0; j < numberOfColumns; j++)
            {
                result = 0;
                for (k = 0; k < numberOfColumns; k++)
                {
                    result += matrixResult[i][k] * matrixA[k][j];
                }
                matrixTemp[i][j] = result;
            }
        }
        for (int k = 0; k < numberOfRows; k++)
        {
            for (int l = 0; l < numberOfColumns;l++)
                matrixResult[k][l] = matrixTemp[k][l];
        }

        power--;

    }

    for(i = 0; i < numberOfRows;i++)
    delete [] matrixTemp[i];
    delete [] matrixTemp;
    matrixTemp= NULL;


    return matrixResult;

}

int determinantMatrix(int **matrixA, int numberOfRows, int numberOfColumns)
{
    if(numberOfRows == numberOfColumns)
    {

        int determinant = 0;

        //alokacja macierzy pomocniczej
        int **matrixTemp = new int *[numberOfRows];

        for (int i = 0; i < numberOfRows; i++)
            matrixTemp[i] = new int[numberOfColumns];


        if (numberOfRows == 1) return matrixA[0][0];

        if (numberOfRows == 2)
        {
            int result =((matrixA[0][0] * matrixA[1][1]) - (matrixA[1][0] * matrixA[0][1]));
            return result;
        }
        else
        {
            for (int x = 0; x < numberOfRows; x++) {
                int indxi = 0;
                for (int i = 1; i < numberOfRows; i++) {
                    int indxj = 0;
                    for (int j = 0; j < numberOfRows; j++) {
                        if (j == x)
                            continue;
                        matrixTemp[indxi][indxj] = matrixA[i][j];
                        indxj++;
                    }
                    indxi++;
                }
                determinant = determinant + (pow(-1, x) * matrixA[0][x] * determinantMatrix(matrixTemp, numberOfRows - 1, numberOfRows - 1));
            }
        }

        for(int i = 0; i < numberOfRows;i++)
            delete [] matrixTemp[i];
        delete [] matrixTemp;
        matrixTemp= NULL;



        return determinant;
    }


}


double determinantMatrix(double **matrixA, int numberOfRows, int numberOfColumns)
{
    if(numberOfRows == numberOfColumns)
    {

        double determinant = 0;

        //alokacja macierzy pomocniczej
        double **matrixTemp = new double *[numberOfRows];

        for (int i = 0; i < numberOfRows; i++)
            matrixTemp[i] = new double[numberOfColumns];


        if (numberOfRows == 1) return matrixA[0][0];

        if (numberOfRows == 2)
        {
            double result =((matrixA[0][0] * matrixA[1][1]) - (matrixA[1][0] * matrixA[0][1]));
            return result;
        }
        else
        {
            for (int k = 0; k < numberOfRows; k++) {
                int indxi = 0;
                for (int i = 1; i < numberOfRows; i++) {
                    int indxj = 0;
                    for (int j = 0; j < numberOfRows; j++) {
                        if (j == k)
                            continue;
                        matrixTemp[indxi][indxj] = matrixA[i][j];
                        indxj++;
                    }
                    indxi++;
                }
                determinant = determinant + (pow(-1, k) * matrixA[0][k] * determinantMatrix(matrixTemp, numberOfRows - 1, numberOfRows - 1));
            }
        }

        for(int i = 0; i < numberOfRows;i++)
            delete [] matrixTemp[i];
        delete [] matrixTemp;
        matrixTemp= NULL;



        return determinant;
    }


}



bool matrixIsDiagonal(int **matrixA, int numberOfRows, int numberOfColumns)
{
    for(int i = 0; i < numberOfRows; i++)
    {
        for(int j = 0; j < numberOfColumns; j++)
        {
            if( j != i && matrixA[i][j] != 0)
                return false;
        }
    }
    return true;
}

bool matrixIsDiagonal(double **matrixA, int numberOfRows, int numberOfColumns)
{
    for(int i = 0; i < numberOfRows; i++)
    {
        for(int j = 0; j < numberOfColumns; j++)
        {
            if( j != i && matrixA[i][j] != 0)
                return false;
        }
    }
    return true;
}

void swap(int &a,int &b)
{

    int p;
    p = a;
    a = b;
    b = p;
}

void swap(double &a,double &b)
{
    double p;
    p = a;
    a = b;
    b = p;
}

int *sortRow(int *array,int numberOfColumns)
{
    int i, j, pom;

    //alokacja tablicy pomocniczej
    int *tempArray = new int [numberOfColumns];

    //skopiowanie wartosci do tablicy pomocniczej
    for(i = 0; i < numberOfColumns; i++)
    {
        tempArray[i] = array[i];
    }

    for (i = 0; i < numberOfColumns-1; i++)
        for (j = 0; j < numberOfColumns-i-1; j++)
            if (tempArray[j] > tempArray[j+1])
            {
                swap(tempArray[j],tempArray[j+1]);
            }


    return tempArray;
}

double *sortRow(double *array,int numberOfColumns)
{
    int i, j, pom;

    //alokacja tablicy pomocniczej
    double *tempArray = new double [numberOfColumns];

    //skopiowanie wartosci do tablicy pomocniczej
    for(i = 0; i < numberOfColumns; i++)
    {
        tempArray[i] = array[i];
    }

    for (i = 0; i < numberOfColumns-1; i++)
        for (j = 0; j < numberOfColumns-i-1; j++)
            if (tempArray[j] > tempArray[j+1])
            {
                swap(tempArray[j],tempArray[j+1]);
            }


    return tempArray;
}

int **sortRowInMatrix(int **matrixA, int numberOfRows, int numberOfColumns)
{
    int i, j,k;
    //tworze macierz wymikowa
    int **matrixResult = new int *[numberOfRows];
    for (int i = 0; i < numberOfRows; i++)
        matrixResult[i] = new int[numberOfColumns];

    //kopiuje wartosci z macierzy A
    for(i = 0; i < numberOfRows; i++)
        for(j = 0; j < numberOfColumns; j++)
        {
            matrixResult[i][j] = matrixA[i][j];
        }

    for(k = 0; k < numberOfRows; k++)
    for (i = 0; i < numberOfColumns-1; i++)
        for (j = 0; j < numberOfColumns-i-1; j++)
            if (matrixResult[k][j] > matrixResult[k][j+1])
            {
                swap(matrixResult[k][j],matrixResult[k][j+1]);
            }

    return matrixResult;

}

double **sortRowInMatrix(double **matrixA, int numberOfRows, int numberOfColumns)
{
    int i, j,k, pom;
    //tworze macierz wymikowa
    double **matrixResult = new double *[numberOfRows];
    for (int i = 0; i < numberOfRows; i++)
        matrixResult[i] = new double[numberOfColumns];

    //kopiuje wartosci z macierzy A
    for(i = 0; i < numberOfRows; i++)
        for(j = 0; j < numberOfColumns; j++)
        {
            matrixResult[i][j] = matrixA[i][j];
        }

    for(k = 0; k < numberOfRows; k++)
        for (i = 0; i < numberOfColumns-1; i++)
            for (j = 0; j < numberOfColumns-i-1; j++)
                if (matrixResult[k][j] > matrixResult[k][j+1])
                {
                    swap(matrixResult[k][j],matrixResult[k][j+1]);
                }

    return matrixResult;

}


void help()
{
    cout << "---DOKUMENTACJA PROGRAMU MATRIXAPP--- " << endl;
    cout << "-Wpisz jako argument programu [addMatrix] w celu dodawanie macierzy, nastepnie postepuj zgodnie z poleceniami" << endl;
    cout << "-Wpisz jako argument programu [subtractMatrix] odejmowanie macierzy, nastepnie postepuj zgodnie z poleceniami" << endl;
    cout << "-Wpisz jako argument programu [multiplyMatrix] mnozenie dwoch macierzy, nastepnie postepuj zgodnie z poleceniami"<<endl;
    cout << "-Wpisz jako argument programu [multiplyByScalar] mnozenie przez skalar, nastepnie postepuj zgodnie z poleceniami" << endl;
    cout << "-Wpisz jako argument programu [transpozeMatrix] transponowanie macierzy, nastepnie postepuj zgodnie z poleceniami" << endl;
    cout << "-Wpisz jako argument programu [powerMatrix] potegowanie macierzy - jako drugi argument nalezy podac potege (np. powerMatrix 2),";
    cout<<"nastepnie postepuj zgodnie z poleceniami"<<endl;
    cout << "-Wpisz jako argument programu [determinantMatrix] wyznaczanie wyznacznika macierzy, nastepnie postepuj zgodnie z poleceniami"<<endl;
    cout << "-Wpisz jako argument programu [matrixIsDiagonal] sprawdzanie diagonalnosci macierzy, nastepnie postepuj zgodnie z poleceniami"<<endl;
    cout << "-Wpisz jako argument programu [swap] zamiana dwoch wartosci miejscami, nastepnie postepuj zgodnie z poleceniami"<<endl;
    cout << "-Wpisz jako argument programu [sortRow] sorotwanie tablicy babelkowo, nastepnie postepuj zgodnie z poleceniami"<<endl;
    cout << "-Wpisz jako argument programu [sortRowsInMatrix] sorotwanie wierszy macierzy, nastepnie postepuj zgodnie z poleceniami"<<endl;

}





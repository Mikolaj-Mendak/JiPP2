
#ifndef JIPP_MATRIXLIB_H
#define JIPP_MATRIXLIB_H

//ADD MATRIX
//funkcja polega na dodaniu do siebie macierzy ,które z założenia są tych samych wymiarów.
//funkcja przyjmuje argumenty: dwie macierze, oraz ich wymiary.
//inicjujemy macierz wynikowa matrixResult, alokujemy ją, pamiec jest zwalniana w mainie.
//nastepnie funkcja dodaje elementy macierzy o tych samych indeksach.
//funkcja zwraca macierz wynikowa matrixResult.
int **addMatrix(int **matrixOne, int **matrixTwo, int numberOfColumns, int numberOfRows);
double **addMatrix(double **matrixOne, double **matrixTwo, int numberOfColumns, int numberOfRows);

//SUBTRACT MATRIX
//funkcja polega na odjeciu od macierzy pierwszej macierzy drugiej.
//funkcja przyjmuje argumenty: dwie maceirze oraz ich wymiary.
//inicjujemy macierz wynikowa matrixResult, alokujemy ją, pamiec jest zwalniana w mainie.
//nastepnie funkcja  odejmuje elementy macierzy o tych samych indeksach.
//funkcja zwraca macierz wynikowa matrixResult.
int **subtractMatrix(int **matrixOne, int **matrixTwo, int numberOfColumns, int numberOfRows);
double **subtractMatrix(double **matrixOne, double **matrixTwo, int numberOfColumns, int numberOfRows);

//MULTILY MATRIX
//funkcja polega na pomnozeniu dwoch macierzy.
//funkcja przyjmuje argumenty: dwie maceirze oraz ich wymiary.
//inicjujemy macierz wynikowa matrixResult, alokujemy ją, pamiec jest zwalniana w mainie.
//nastepnie funkcja wymnaza macierz pierwsza i druga, warto zwrocic uwage na odpowiednie wymiary macierzy.
//macierz wynikowa ma ilosc wierszy rowna ilosci wiersza macierzy pierwszej,
//natomiast ilosc kolumn rowna macierzy drugiej.
//funkcja zwraca macierz wynikowa matrixResult.
int **multiplyMatrix(int **MatrixOne, int **MatrixTwo, int numberOfRowsOne, int numberOfColumnsOne, int numberOfColumnsTwo);
double **multiplyMatrix(double **MatrixOne, double **MatrixTwo, int numberOfRowsOne, int numberOfColumnsOne, int numberOfColumnsTwo);

//MULTILY BY SCALAR
//funkcja polega na pomnozeniu macierzy przez skalar.
//funkcja przyjmuje argumenty: macierz , jej wymiar, skalar.
//nastepnie funkcja wymnaza macierz przez skalar
//funkcja zwraca macierz matrixOne wymnozona przez skalar ,ktorej pamiec jest zwalniana w main.
int **multiplyByScalar(int **matrixOne, int numberOfRowsOne, int numberOfColumnsOne, int scalar);
double **multiplyByScalar(double **matrixOne, double numberOfRowsOne, int numberOfColumnsOne, double scalar);

//TRANSPOZE MATRIX
//funkcja polega na transpozycji macierzy.
//funkcja przyjmuje argumenty: macierz oraz jej wymiary.
//funkcja alokuje macierz wynikowa matrixResult ,która jest zwalniana w mainie.
//warto zwrócić uwagę iż macierz wynikowa ma wymiary odwrotne do macierzy transponowanej,
//czyli ilosc kolumn jest iloscia wierszy ,a ilosc wierszy jest iloscia kolumn.
//transponowanie polega na zamianie wierszy na kolumny i kolumn na wiersze.
//zwaracana jest macierz wynikowa Result.
int **transpozeMatrix(int **matrixOne, int numberOfRows, int numberOfCOlumns);
double **transpozeMatrix(double **matrixOne, int numberOfRows, int numberOfCOlumns);

//POWER MATRIX
//funkcja polega na podniesieniu macierzy kwadratowej do wybranej potęgi
//funkcja przyjmuje argumenty: macierz, jej wymiary oraz potega.
//potega powinna zostac uwzgledniona w argumentach programu
//w funkcji alokujemy dwie macierze tych samych wymiarow: wynikowa oraz pomocnicza.
//nastepnie dokonujemy mnozenia macierz przez siebie wielokrotnie w zaleznosci od stopnia potegi.
//macierz wynikowa jest zwracana do maina natomiast macierz pomocnicza usuwana.
int **powerMatrix(int **matrixA, int numberOfRows, int numberOfColumns,unsigned int power);
double **powerMatrix(double **matrixA, int numberOfRows, int numberOfColumns,unsigned int power);

//DETERMINANT MATRIX
//funkcja polega na znalezieniu wyznacznika macierzy kwadratowej.
//argumentami funckji jest macierz oraz jej wymiary.
//w funkcji alokujemy macierz pomocnicza.
//w przypadku liczby wierszy rownej jeden zwracamy wartosc komórki macierzy o indeksie [0][0].
//jezeli liczba wierszy macierzy wynosi dwa wykonujemy odpowiednie obliczenia.
//jezeli wiersze funkcji sa w liczbie wiekszej od zera stosujemy odpowiednie dzialania oraz rekurencje.
//na koncu funkcji ulega usunieciu macierz pomocnicza oraz zwracamy wyznacznik o typie zgodnym z wywolana funkcja
int determinantMatrix(int **matrixA, int numberOfRows, int numberOfColumns);
double determinantMatrix(double **matrixA, int numberOfRows, int numberOfColumns);

//MATRIX IS DIAGONAL
//funkcja polega na zbadaniu czy macierz jest diagonalna czy tez nie.
//przyjmuje ona argumenty: macierz oraz jej wymiary.
//sprawdzenie czy macierz jest diagonalna polega na zbadaniu czy,
//w jej komórkach nie leżących na przekątnej macierzy znajdują się wartości różne od zera.
//funkcja zwraca true lub false
bool matrixIsDiagonal(int **matrixA, int numberOfRows, int numberOfColumns);
bool matrixIsDiagonal(double **matrixA, int numberOfRows, int numberOfColumns);

//SWAP
//funkcja polega na zamianie dwoch wartosci przekazanych przez referencje.
//argumentami funkcji sa dwie zmienne.
//funkcja nie zwraca wartosci tylko zamienia wartosci dwóch zmiennych.
void swap(int &a,int &b);
void swap(double &a,double &b);

//SORT ROW
//funkcja polega na posortowaniu tablicy jednowymiarowej.
//funkcja przyjmuje argumenty w postaci tablicy oraz liczby kolumn.
//funkcja alokuje tablice pomocnicza do ktorej sa przekopiowane wartosci.
//nastepnie funkcja sortuje bąbelkowo tablice i zwraca ją do main gdzie jej pamiec jest zwalniana.
int *sortRow(int *array,int numberOfColumns);
double *sortRow(double *array,int numberOfColumns);

//SORT ROW IN MATRIX
//funkcja sortuje wiersze w macierzy.
//przyjmuje ona argumenty: macierz oraz jej wymiary
//funkcja polega na posortowaniu wierszy macierzy.
//wykorzystujemy do tego rowniez sortowanie babelkowe ale uzywamy dodatkowego fora
//for ten odpowiada za poruszanie sie po wierszach macierzy.
int **sortRowInMatrix(int **matrixA, int numberOfRows, int numberOfColumns);
double **sortRowInMatrix(double **matrixA, int numberOfRows, int numberOfColumns);

//funkcja wyswietlajaca dokumentacje.
void help();
#endif //JIPP_MATRIXLIB_H

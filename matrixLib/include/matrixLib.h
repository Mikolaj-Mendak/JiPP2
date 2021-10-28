
#ifndef JIPP_MATRIXLIB_H
#define JIPP_MATRIXLIB_H
int **addMatrix(int **matrixOne, int **matrixTwo, int numberOfColumns, int numberOfRows);
double **addMatrix(double **matrixOne, double **matrixTwo, int numberOfColumns, int numberOfRows);
int **subtractMatrix(int **matrixOne, int **matrixTwo, int numberOfColumns, int numberOfRows);
double **subtractMatrix(double **matrixOne, double **matrixTwo, int numberOfColumns, int numberOfRows);
int **multiplyMatrix(int **MatrixOne, int **MatrixTwo, int numberOfRowsOne, int numberOfColumnsOne, int numberOfColumnsTwo);
double **multiplyMatrix(double **MatrixOne, double **MatrixTwo, int numberOfRowsOne, int numberOfColumnsOne, int numberOfColumnsTwo);
int **multiplyByScalar(int **matrixOne, int numberOfRowsOne, int numberOfColumnsOne, int scalar);
double **multiplyByScalar(double **matrixOne, double numberOfRowsOne, int numberOfColumnsOne, double scalar);
int **transpozeMatrix(int **matrixOne, int numberOfRows, int numberOfCOlumns);
double **transpozeMatrix(double **matrixOne, int numberOfRows, int numberOfCOlumns);
int **powerMatrix(int **matrixA, int numberOfRows, int numberOfColumns,unsigned int power);
double **powerMatrix(double **matrixA, int numberOfRows, int numberOfColumns,unsigned int power);
int determinantMatrix(int **matrixA, int numberOfRows, int numberOfColumns);
double determinantMatrix(double **matrixA, int numberOfRows, int numberOfColumns);
bool matrixIsDiagonal(int **matrixA, int numberOfRows, int numberOfColumns);
bool matrixIsDiagonal(double **matrixA, int numberOfRows, int numberOfColumns);
void swap(int &a,int &b);
void swap(double &a,double &b);
int *sortRow(int *array,int numberOfColumns);
double *sortRow(double *array,int numberOfColumns);
int **sortRowInMatrix(int **matrixA, int numberOfRows, int numberOfColumns);
double **sortRowInMatrix(double **matrixA, int numberOfRows, int numberOfColumns);
void help();
#endif //JIPP_MATRIXLIB_H

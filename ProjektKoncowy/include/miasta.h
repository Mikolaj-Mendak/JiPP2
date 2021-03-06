#ifndef JIPP_MIASTA_H
#define JIPP_MIASTA_H

#include <iostream>
#include <vector>

using namespace std;

class Nazwa
{
private:

    int *tab = new int[1024];
public:
    Nazwa(string nazwa);
    virtual double Zaludnienie() = 0;
    ~Nazwa();
    string nazwa;

};

class Miasto : public Nazwa
{
private:
    double liczbaMieszkancow;
    double polePowierzchni;
    int rokPowstania;

public:
    Miasto(string nazwa, double liczbaMieszkancow , const double &polePowierzchni,const int &rokPowstania);
    Miasto();
    void print();
    virtual double Zaludnienie() override;
};

class Wojewodztwo : public Nazwa
{
private:

    double polePowierzchni;
    vector<Miasto *> miasta;
public:
    double liczbaMieszkancow;
    Wojewodztwo(string nazwa, double liczbaMieszkancow ,double polePowierzchni);
    void dodajMiato(Miasto *miasto);
    void printWoj();
    void print();
    virtual double Zaludnienie() override;
    void usunMiasto(Miasto *miasto,int numer);
};

#endif //JIPP_MIASTA_H

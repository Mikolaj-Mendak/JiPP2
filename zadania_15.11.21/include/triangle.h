

#ifndef JIPP2_TRAINGLE_H
#define JIPP2_TRAINGLE_H
#include "../include/node.h"
#include <string>
#include<iostream>
#include <cmath>
using namespace std;

class Triangle {
private:
    Node a;
    Node b;
    Node c;
    string nazwa;
public:
    Triangle(Node a, Node b, Node c, const string &name);
    void display();
    friend ostream &operator<<(ostream &lhr, Triangle &rhs);
    double distance(int p1, int p2);
};

ostream &operator<<(ostream &lhr, Triangle &rhs);
void showTriangle(Triangle &triangle);
void showTriangle(Triangle &triangle);
#endif
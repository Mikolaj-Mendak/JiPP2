#ifndef JIPP2_TRAINGLE_H
#define JIPP2_TRAINGLE_H
#include "../include/node.h"
#include <string>
#include<iostream>
#include <cmath>
using namespace std;

class Triangle
 {
private:
    Node a;
    Node b;
    Node c;
    string name;
public:
    void display();
    Triangle(Node a, Node b, Node c, string &name);
    friend ostream &operator<<(ostream &lhs, const Triangle &rhs);
};
ostream &operator<<(ostream &lhs, const Triangle &rhs);


#endif
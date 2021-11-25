
#include "../include/node.h"
#include <iostream>
#include <math.h>
using namespace std;

Node::Node() {
    x = 0;
    y = 0;
}

Node::Node(double x, double y): x(x), y(y) {}

void Node::display() {
    cout << "( " << x << "," << y <<")"<< endl;
}

void Node::updateValue(double x, double y) {
    this->x = x;
    this->y = y;
}

double punkt(Node a, Node b)
{
    return sqrt(pow((b.x-a.x),2) + pow((b.y-a.y),2));
};

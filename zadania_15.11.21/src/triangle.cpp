#include "../include/triangle.h"
#include<iostream>


Triangle::Triangle(Node a, Node b, Node c, string &name) : a(a), b(b), c(c), name(name)
{}


void Triangle::display()
{
    cout<<"Wierzcholki trojkata\t"<<"a";a.display();
    cout<<"\tb";b.display();
    cout<<"\tc";c.display();
}

ostream & operator<<(ostream & lhs, const Triangle &rhs) {
    lhs << rhs.name << ": " << rhs.a << ", " << rhs.b << ", " << rhs.c;
    return lhs;
}
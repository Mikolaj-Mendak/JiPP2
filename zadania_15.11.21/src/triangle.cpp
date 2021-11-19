

#include<iostream>
#include "../include/triangle.h"
using namespace std;


Triangle::Triangle(Node a, Node b, Node c, const string &nazwa) : a(a), b(b), c(c), nazwa(nazwa) {}

void Triangle::display(){
    cout << "a: \n"; a.display();
    cout << " b: \n"; b.display();
    cout << " c: \n"; c.display();
}

ostream &operator<<(ostream &lhs, Triangle &rhs){
    lhs << "A: " << rhs.a << " B: " << rhs.b << " C: " << rhs.c;
    return lhs;
}

double Triangle::distance(int p1, int p2) {
    if (p1 == 0 && p2 == 1)
    {
        return punkt(this->a, this->b);
    }
    if (p1 == 1 && p2 == 0)
    {
        return punkt(this->b, this->a);
    }
    else if (p1 == 0 && p2 == 2)
    {
        return punkt(this->a, this->c);
    }
    if (p1 == 2 && p2 == 0)
    {
        return punkt(this->c, this->a);
    }
    else if (p1 == 1 && p2 == 2)
    {
        return punkt(this->b, this->c);
    }
    else if (p1 == 2 && p2 == 1)
    {
        return punkt(this->c, this->b);
    }
    else return 0;
}

void showTriangle(Triangle &triangle)
{
    triangle.display();
}



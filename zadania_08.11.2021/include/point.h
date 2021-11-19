//
// Created by filip on 07.11.2021.
//

#ifndef CHECKER_POINT_H
#define CHECKER_POINT_H

#include <iostream>

using namespace std;

class Point {
private:
    double *x = new double;
    double *y = new double;
    string name;

public:
    /**
     * Create point in passed place
     * @param x x coordinate of point
     * @param y y coordinate of point
     * @param name nazwa of point
     */
    Point(double x, double y, string name);

    /**
     * Create point in 0, 0
     * @param name nazwa of point
     */
    Point(string name);

    /**
     * Update nazwa of point
     * @param name new point nazwa
     */
    void setName(string name);

    /**
     * Get value of x
     * @return x
     */
    double getX();

    /**
     * Update x value
     * @param x new x value
     */
    void setX(double x);

    /**
     * Get value of y
     * @return y
     */
    double getY();

    /**
     * Update y value
     * @param y new y value
     */
    void setY(double y);

    /**
     * Print data about point (x and y)
     */
    void printData() const;

    /**
     * destruktor
     */
     ~Point()
    {
         delete x;
         delete y;
    }

    /**
    * konstruktor kopiujacy
    */
    Point(Point& Point)
    {
        x = new double;
        *x = *Point.x;
        y = new double;
        *y = *Point.y;
    }

    bool operator==(const Point &rhs) const;

    bool operator!=(const Point &rhs) const;

    Point operator+=(const Point &rhs) const;

    Point operator+=(const double &rhs) const;

    const string &getName() const;

};


#endif //CHECKER_POINT_H
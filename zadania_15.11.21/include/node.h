//
// Created by User on 15.11.2021.
//

#ifndef JIPP_NODE_H
#define JIPP_NODE_H
//
// Created by filip on 11/14/21.
//

#ifndef JIPP2_NODE_H
#define JIPP2_NODE_H


class Node {
private:
    double x, y;
    friend double punkt(Node a, Node b);
public:
    Node();
    Node(double x, double y);

    void display();

    void updateValue(double x, double y);

};
double punkt(Node a, Node b);


#endif //JIPP2_NODE_H

#endif //JIPP_NODE_H

#ifndef JIPP2_PROSTOPADLOSCIAN_H
#define JIPP2_PROSTOPADLOSCIAN_H


class Prostopadloscian {
private:
    double a;
    double b;
    double c;
public:
    double pole_powierzchni();
    void set_a(double a);
    void set_b(double b);
    void set_c(double c);
    double get_a();
    double get_b();
    double get_c();

};


#endif //JIPP2_PROSTOPADLOSCIAN_H
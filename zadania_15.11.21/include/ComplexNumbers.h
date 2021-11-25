
#ifndef JIPP_COMPLEXNUMBERS_H
#define JIPP_COMPLEXNUMBERS_H

class ComplexNumbers{
    int RealPart;
    int ImaginaryPart;
public:
    ComplexNumbers(int a, int b);
    ComplexNumbers operator+(const ComplexNumbers &rhs) const;
    ComplexNumbers &operator+=(const ComplexNumbers &rhs);
    void showComplexNumbers();
};




#endif //JIPP_COMPLEXNUMBERS_H

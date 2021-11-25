#include<iostream>
#include"../include/ComplexNumbers.h"


ComplexNumbers::ComplexNumbers(int a, int b)
:RealPart(a), ImaginaryPart(a){}

ComplexNumbers ComplexNumbers::operator+(const ComplexNumbers &rhs) const
{
    return {RealPart + rhs.RealPart, ImaginaryPart + rhs.ImaginaryPart };
}

ComplexNumbers &ComplexNumbers::operator+=(const ComplexNumbers &rhs)
 {
    this->RealPart = this->RealPart + rhs.RealPart;
    this->ImaginaryPart = this->ImaginaryPart + rhs.ImaginaryPart;
    return *this;
 }

 void ComplexNumbers::showComplexNumbers()
 {
    std::cout<<"L1:   "<<RealPart<<" + "<<ImaginaryPart<<"i"<<std::endl;
 }



#include <iostream>
#include <ostream>
#pragma once

class Fraction
{
    private:

        int num;
        int den;

    public:

        Fraction();

        Fraction (int num, int den);

        int getNumerator() const;

        void setNumerator (int newNum);

        int getDenominator() const;

        void setDenominator(int newDen);

        void simplify();

        friend Fraction operator+(const Fraction& lhs, const Fraction& rhs);

        friend Fraction operator-(const Fraction& lhs, const Fraction& rhs);

        friend Fraction operator*(const Fraction& lhs, const Fraction& rhs);

        friend Fraction operator/(const Fraction& lhs, const Fraction& rhs);

        friend std::ostream& operator<<(std::ostream& os, const Fraction& f);

};



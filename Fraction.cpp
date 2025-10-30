#include "Fraction.h"
#include <ostream>

Fraction::Fraction() : num(0), den(1)
{

}

Fraction::Fraction (int num, int den) : num(num), den(den) 
{
    if (den == 0) 
    {
        throw std::invalid_argument("Denominator cannot be zero");
    }
}

int Fraction::getNumerator() const
{
    return num;
}

void Fraction::setNumerator (int newNum)
{
    num = newNum;
}

int Fraction::getDenominator() const
{
    return den;
}

void Fraction::setDenominator(int newDen)
{
    if (den == 0) 
    {
        throw std::invalid_argument("Denominator cannot be zero");
    }

    den = newDen;
}

void Fraction::simplify()
{
    if (den == 0)
    {
        throw std::invalid_argument("Denominator cannot be zero");

        int a = num;
        int b = num;

        while (b != 0)
        {
            int temporary = b;
            b = a % b;
            a = temporary;
        }

        int gcd = a;

        num /= gcd;
        den /= gcd;

        if (den < 0 )
        {
            num = -num;
            den = -den;
        }  
    }
}

Fraction operator+(const Fraction& lhs, const Fraction& rhs)
{
    return Fraction (lhs.num * rhs.den + rhs.num * lhs.den, lhs.den * rhs.den);
}
Fraction operator-(const Fraction& lhs, const Fraction& rhs)
{
    return Fraction (lhs.num * rhs.den - rhs.num * lhs.den, lhs.den * rhs.den);
}
Fraction operator*(const Fraction& lhs, const Fraction& rhs)
{
    return Fraction (lhs.num * rhs.num, rhs.den * lhs.den);
}
Fraction operator/(const Fraction& lhs, const Fraction& rhs)
{
    if (rhs.num == 0) 
    {
        throw std::invalid_argument("Division by Zero.");
    }

    return Fraction (lhs.num * rhs.den, lhs.den * rhs.num);
}

std::ostream& operator<<(std::ostream& os, const Fraction& f)
{
    return (os << f.num << "/" << f.den);
}

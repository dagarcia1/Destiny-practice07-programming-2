
// TEMPORARY BAD PRACTICE — we normally do NOT include .cpp files
// This is only so you can compile easily without CMake setup.
// NOTE: Normally this file would be compiled separately and not #included.
// For now, we are including it in main.cpp until we learn CMake.

#include "Fraction.h"
#include "MixedFraction.h"
#include "Fraction.cpp"
#include "MixedFraction.cpp"
#include <iostream>
#include <ostream>

 
int main() {

    while (true)
    {
        std::cout << "============== Fraction Calculator Menu ==============" << '\n';
        std::cout << "1. Enter a fraction manually" << '\n';
        std::cout << "2. Add a fraction" << '\n';
        std::cout << "3. Subtract a fraction" << '\n';
        std::cout << "4. Multiply by fraction" << '\n';
        std::cout << "5. Divide by fraction" << '\n';
        std::cout << "6. Display as a Mixed Fraction" << '\n';
        std::cout << "7. Clear Fraction" << '\n';
        std::cout << "8. Exit" << '\n';

        Fraction f;
        int choice;

        std::cout << "Enter Choice: ";
        std::cin >> choice;

        if (choice == 1)
        {
            int num;
            int den;

            std::cout << "Enter the Numerator: ";
            std::cin >> num;
            f.setNumerator(num);
            
            std::cout << "Enter the Denominator: " ;
            std::cin >> den;
            f.setDenominator(den);

            std::cout << "Fraction Entered: " << f.getNumerator() << "/" << f.getDenominator() << '\n';
            std::cout << '\n';
        }

        if (choice == 2)
        {
            std::cout << "Enter Fraction:"
        }

        else if (choice == 3)
        {

        }

        else if (choice == 4)
        {

        }

        else if (choice == 5)
        {

        }

        else if (choice == 6)
        {

        }

        else if (choice == 7)
        {

        }

        else if (choice == 8)
        {
            std::cout << "Exiting the Program..." << '\n';
            break;
        }
        

    }

    
    Fraction a(1,2);
    std::cout << a.getNumerator() << '\n';
    std::cout << a.getDenominator() << '\n';
    
    return 0;
}
//--------------- MAIN.CPP ---------------

// Driver routine to test SOME of the functions of the Fraction class 

#include <iostream>		// for std::cout
#include "frac.h"		// for Fraction declarations

int main()
{
    // Try all three possible fraction constructors
    // and the input/output routines.

    // These declarations use the default constructor
    Fraction f1, f2;

    // These declarations use the constructor with parameters
    Fraction f3(3, 4), f4(6);

    // Use the objects

    std::cout << "\n The fraction f1 is ";
    f1.Show();

    std::cout << "\n The fraction f2 is ";
    f2.Show();

    std::cout << "\n The fraction f3 is ";
    f3.Show();

    std::cout << "\n The fraction f4 is ";
    f4.Show();

    std::cout << "\n Now enter first fraction: ";
    f1.Input();
    std::cout << "\nYou entered ";
    f1.Show();

    std::cout << "\n Now enter second fraction: ";
    f2.Input();
    std::cout << "\nYou entered ";
    f2.Show();

    // Finally, find the floating-point value of f1 and f2

    std::cout << "\n The value of fraction 1 is " << f1.Evaluate() << '\n';
    std::cout << "\n The value of fraction 2 is " << f2.Evaluate() << '\n';

    std::cout << "Goodbye!\n";
}
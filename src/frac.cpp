//--------------- FRAC.CPP ---------------
// The class definition for fractions.

#include <iostream>
#include "frac.h"

Fraction::Fraction()
// Default constructor.  Initializes fraction to 0/1
{
   numerator = 0;
   denominator = 1;
}

Fraction::Fraction(int n, int d)
// initializes fraction to n/d
// what kind of error checking should be added?
{
   numerator = n;
   denominator = (d != 0) ? d : 1;    // Handle division by zero by setting denominator to 1.
}

void Fraction::Input()
// Get a fraction from standard input, in the form "numerator/denominator."
// what kind of error checking should be added?
{
    char divSign;
    std::cin >> numerator >> divSign >> denominator;
    if (denominator == 0)
    {
        std::cout << "Error: Denominator cannot be zero. Setting denominator to 1.\n";
        denominator = 1;
    }
}

void Fraction::Show() const
// Display a fraction, in the form "numerator/denominator."
{
   std::cout << numerator << '/' << denominator;
}

int Fraction::GetNumerator() const
{
   return numerator;
}

int Fraction::GetDenominator() const
{
   return denominator;
}

void Fraction::SetValue(int n, int d)
{
    numerator = n;
    denominator = (d != 0) ? d : 1;    // Handle division by zero by setting denominator to 1.
}

double Fraction::Evaluate() const
{
   double n = static_cast<double>(numerator);
   double d = static_cast<double>(denominator);
   return (d != 0.0) ? (n / d) : 0.0;  // Handle division by zero by returning 0.0.
}
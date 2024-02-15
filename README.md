# FractionCPP
The provided C++ code defines a Fraction class with a default constructor, input/output functions, and member functions to manipulate fractions. The main() function demonstrates creating fractions, inputting values, displaying fractions, and evaluating their decimal values.

**FRAC.H:**

- The Fraction class is declared within the Fraction namespace.  
- The class has a default constructor Fraction() that initializes the fraction to 0/1.  
- The class has a constructor Fraction(int n, int d=1) that initializes the fraction to the provided numerator and denominator values.  
- The class provides the following member functions:  
- void Input(): Takes input from the user in the form "numerator/denominator" and sets the fraction accordingly.  
- void Show() const: Displays the fraction on the screen in the form "numerator/denominator".  
- int GetNumerator() const: Returns the numerator of the fraction.  
- int GetDenominator() const: Returns the denominator of the fraction.  
- void SetValue(int n, int d): Sets the value of the fraction to the provided numerator and denominator.  
- double Evaluate() const: Calculates and returns the decimal value of the fraction.  

**FRAC.CPP:**

- The Fraction class member functions are defined here.  
- The default constructor Fraction() initializes the numerator to 0 and the denominator to 1.  
- The constructor Fraction(int n, int d) initializes the numerator to n and the denominator to d.  
- The Input() function reads input from the user in the form "numerator/denominator" using the cin object.  
- The Show() function displays the fraction on the screen in the form "numerator/denominator" using the cout object.  
- The GetNumerator() and GetDenominator() functions simply return the respective member variables.  
- The SetValue(int n, int d) function sets the value of the fraction to the provided numerator and denominator.  
- The Evaluate() function calculates and returns the decimal value of the fraction by dividing the numerator by the denominator.  

**MAIN.CPP:**

- The main() function serves as the entry point of the program.  
- Four Fraction objects are created using different constructors: f1, f2 (using the default constructor), f3, f4 (using the constructor with parameters).  
- The Show() function is called on each fraction object to display their values.  
- The Input() function is called on f1 and f2 to read fractions from the user.  
- The Show() function is called again on f1 and f2 to display the entered fractions.  
- The Evaluate() function is called on f1 and f2 to calculate and display their decimal values.  
- The program ends with a "Goodbye!" message.

**DIRECTORY STRUCTURE:**  
  
├── .vscode  
│   ├── settings.json  
├── src  
│   ├── frac.h  
│   ├── frac.cpp  
│   ├── main.cpp  
├── LICENSE  
└── README.md  

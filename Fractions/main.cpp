#include <iostream>
#include "Fraction.h"
using namespace mathlib;

int main()
{
    Fraction fraction1{ 5, 15 };
    std::cout << fraction1 << std::endl;

    Fraction fraction2{ 6, 15 };
    fraction2.simplify();
    std::cout << fraction2 << std::endl;

    std::cout << fraction1 << " == " << fraction2 << " result: " << (fraction1 == fraction2) << std::endl;
    std::cout << fraction1 << " > " << fraction2 << " result: " << (fraction1 > fraction2) << std::endl;

    std::cout << fraction1 << " + " << fraction2 << " result: " << (fraction1 + fraction2) << std::endl;
    std::cout << fraction1 << " * " << fraction2 << " result: " << (fraction1 * fraction2) << std::endl;

    Fraction fraction3;
    std::cout << "input fraction (numerator/denominator): \n";
    std::cin >> fraction3;
    std::cout << fraction3 << std::endl;
    std::cout << fraction3.toDouble() << std::endl;
}


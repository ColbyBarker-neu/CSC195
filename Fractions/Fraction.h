#pragma once
#include <iostream>
namespace mathlib {
    class Fraction {
    private:
        int numerator;
        int denominator;
        int gcd(int a, int b) const;
        void simplifyInternal();

    public:
        Fraction(int num = 0, int denom = 1);

        void simplify();
        double toDouble() const;

        // Arithmetic operators
        Fraction operator+(const Fraction& other) const;
        Fraction operator-(const Fraction& other) const;
        Fraction operator*(const Fraction& other) const;
        Fraction operator/(const Fraction& other) const;

        // Comparison operators
        bool operator==(const Fraction& other) const;
        bool operator!=(const Fraction& other) const;
        bool operator<(const Fraction& other) const;
        bool operator<=(const Fraction& other) const;
        bool operator>(const Fraction& other) const;
        bool operator>=(const Fraction& other) const;

        // Accessors
        int getNumerator() const;
        int getDenominator() const;

        // Stream I/O
        friend std::ostream& operator<<(std::ostream& os, const Fraction& frac);
        friend std::istream& operator>>(std::istream& is, Fraction& frac);
    };
}

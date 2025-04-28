#include "Fraction.h"

namespace mathlib {

    int Fraction::gcd(int a, int b) const {
        return (b == 0) ? a : gcd(b, a % b);
    }

    void Fraction::simplifyInternal() {
        if (denominator < 0) {
            numerator = -numerator;
            denominator = -denominator;
        }
        int g = gcd(abs(numerator), abs(denominator));
        numerator /= g;
        denominator /= g;
    }

    Fraction::Fraction(int num, int denom) : numerator(num), denominator(denom) {
        if (denominator == 0) {
            std::cout << "Error: Denominator cannot be zero. Setting to 1.\n";
            denominator = 1;
        }
        simplifyInternal();
    }

    void Fraction::simplify() {
        simplifyInternal();
    }

    double Fraction::toDouble() const {
        return static_cast<double>(numerator) / denominator;
    }

    Fraction Fraction::operator+(const Fraction& other) const {
        int num = numerator * other.denominator + other.numerator * denominator;
        int denom = denominator * other.denominator;
        return Fraction(num, denom);
    }

    Fraction Fraction::operator-(const Fraction& other) const {
        int num = numerator * other.denominator - other.numerator * denominator;
        int denom = denominator * other.denominator;
        return Fraction(num, denom);
    }

    Fraction Fraction::operator*(const Fraction& other) const {
        return Fraction(numerator * other.numerator, denominator * other.denominator);
    }

    Fraction Fraction::operator/(const Fraction& other) const {
        if (other.numerator == 0) {
            std::cout << "Error: Division by zero fraction. Returning original.\n";
            return *this;
        }
        return Fraction(numerator * other.denominator, denominator * other.numerator);
    }

    bool Fraction::operator==(const Fraction& other) const {
        return numerator == other.numerator && denominator == other.denominator;
    }

    bool Fraction::operator!=(const Fraction& other) const {
        return !(*this == other);
    }

    bool Fraction::operator<(const Fraction& other) const {
        return numerator * other.denominator < other.numerator * denominator;
    }

    bool Fraction::operator<=(const Fraction& other) const {
        return *this < other || *this == other;
    }

    bool Fraction::operator>(const Fraction& other) const {
        return !(*this <= other);
    }

    bool Fraction::operator>=(const Fraction& other) const {
        return !(*this < other);
    }

    int Fraction::getNumerator() const {
        return numerator;
    }

    int Fraction::getDenominator() const {
        return denominator;
    }

    std::ostream& operator<<(std::ostream& os, const Fraction& frac) {
        os << frac.numerator << "/" << frac.denominator;
        return os;
    }

    std::istream& operator>>(std::istream& is, Fraction& frac) {
        int num, denom;
        char slash;
        is >> num >> slash >> denom;
        if (slash == '/' && denom != 0) {
            frac = Fraction(num, denom);
        }
        else {
            std::cout << "Invalid input. Setting to 0/1.\n";
            frac = Fraction(0, 1);
        }
        return is;
    }

}
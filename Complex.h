#include <iostream>
#pragma once

class Complex {
public:
    Complex(double re, double im);

    double Re() const;
    double Im() const;

    Complex &operator=(double x);
    Complex &operator+=(double x);
    Complex &operator-=(double x);
    Complex &operator*=(double x);
    Complex &operator/=(double x);

    Complex &operator=(const Complex &cplx);
    Complex &operator+=(const Complex &cplx);
    Complex &operator-=(const Complex &cplx);
    Complex &operator*=(const Complex &cplx);
    Complex &operator/=(const Complex &cplx);

    bool operator==(double x) const;
    bool operator==(const Complex &cplx) const;
private:
    double m_Re{};
    double m_Im{};
};
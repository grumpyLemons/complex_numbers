#include <iostream>
#include "Complex.h"

Complex::Complex(double re, double im) {
    m_Re = re;
    m_Im = im;
}

double Complex::Re() const {
    return m_Re;
}

double Complex::Im() const {
    return m_Im;
}

Complex &Complex::Complex::operator=(double x) {
    m_Re = x;
    m_Im = 0;
    return *this;
}

Complex &Complex::operator+=(double x) {
    m_Re += x;
    return *this;
}

Complex &Complex::operator-=(double x) {
    m_Re -= x;
    return *this;
}

Complex &Complex::operator*=(double x) {
    m_Re *= x;
    m_Im *= x;
    return *this;
}

Complex &Complex::operator/=(double x) {
    m_Re /= x;
    m_Im /= x;
    return *this;
}

Complex &Complex::operator=(const Complex &cplx) {
    m_Re = cplx.Re();
    m_Im = cplx.Im();
    return *this;
}

Complex &Complex::operator+=(const Complex &cplx) {
    m_Re += cplx.Re();
    m_Im += cplx.Im();
    return *this;
}

Complex &Complex::operator-=(const Complex &cplx) {
    m_Re -= cplx.Re();
    m_Im -= cplx.Im();
    return *this;
}

Complex &Complex::operator*=(const Complex &cplx) {
    m_Re = m_Re * cplx.Re() - m_Im * cplx.Im();
    m_Im = m_Re * cplx.Im() + m_Im * cplx.Re();
    return *this;
}

Complex &Complex::operator/=(const Complex &cplx) {
    m_Re = (m_Re * cplx.Re() + m_Im * cplx.Im())/(cplx.Re() * cplx.Im());
    m_Im = (-m_Re * cplx.Im() + m_Im * cplx.Re())/(cplx.Re() * cplx.Im());
    return *this;
}

bool Complex::Complex::operator==(double x) const {
    if (m_Re == x && m_Im == 0)
    {
        return true;
    }
    return false;
}


bool Complex::Complex::operator==(const Complex &cplx)  const{
    if (m_Re == cplx.Re() && m_Im == cplx.Im())
    {
        return true;
    }
    return false;
}
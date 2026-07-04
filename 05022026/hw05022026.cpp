#include "hw05022026.h"

#include <stdexcept>

// Тема: Введение в объектно-ориентированное програм-
//        мирование.
//        Задание.
//        Реализуйте класс Дробь. Необходимо хранить числитель
//            и знаменатель в качестве переменных-членов. Реализуйте
//              функции-члены для ввода данных в переменные-члены,
//     для выполнения арифметических операций (сложение,
//                                            вычитание, умножение, деление, и т.д.).

Fraction::Fraction()
{
    _numerator   = 0;
    _denominator = 1;
}

Fraction::Fraction(int numerator, int denominator)
{
    if (denominator == 0) {
        throw std::invalid_argument("Denominator cannot be zero");
    } else {
        _numerator = numerator;
        _denominator = denominator;
    }

}

Fraction::~Fraction() {}

Fraction Fraction::operator+(const Fraction & value) const
{
    return Fraction(
        (
            (_numerator * value.getDenominator()) + (value.getNumerator() * _denominator)
        ),
        (
            _denominator * value.getDenominator()
        )
        );
}

Fraction Fraction::operator-(const Fraction & value) const
{
    return Fraction(
        (
            (_numerator * value.getDenominator()) - (value.getNumerator() * _denominator)
        ),
        (
            _denominator * value.getDenominator()
        )
        );
}

Fraction Fraction::operator*(const Fraction & value) const
{
    return Fraction(
        (
            _numerator   * value.getNumerator  ()
        ),
        (
            _denominator * value.getDenominator()
        )
        );
}

Fraction Fraction::operator/(const Fraction & value) const
{
    if (value.getDenominator() == 0) {
        throw std::invalid_argument("Denominator cannot be zero");
    }

    return Fraction(
        (
            _numerator   * value.getDenominator()
        ),
        (
            _denominator * value.getNumerator  ()
        )
        );
}

int Fraction::getNumerator() const
{
    return _numerator;
}

int Fraction::getDenominator() const
{
    return _denominator;
}

void Fraction::setNumerator(int numerator)
{
    _numerator = numerator;
}

void Fraction::setDenominator(int denominator)
{
    if (denominator == 0) {
        throw std::invalid_argument("Denominator cannot be zero");
    } else {
        _denominator = denominator;
    }
}

void Fraction::setFraction(int numerator, int denominator)
{
    if (denominator == 0) {
        throw std::invalid_argument("Denominator cannot be zero");
    } else {
        _numerator = numerator;
        _denominator = denominator;
    }
}

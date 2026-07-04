#pragma once

// #include <iostream>

// Тема: Введение в объектно-ориентированное програм-
//        мирование.
//        Задание.
//        Реализуйте класс Дробь. Необходимо хранить числитель
//            и знаменатель в качестве переменных-членов. Реализуйте
//              функции-члены для ввода данных в переменные-члены,
//     для выполнения арифметических операций (сложение,
//                                            вычитание, умножение, деление, и т.д.).

class Fraction {
public:
    Fraction (                              );
    Fraction (int numerator, int denominator);
    ~Fraction(                              );

    Fraction operator+ (const Fraction&) const;
    Fraction operator- (const Fraction&) const;
    Fraction operator* (const Fraction&) const;
    Fraction operator/ (const Fraction&) const;

    int getNumerator  () const;
    int getDenominator() const;

    void setNumerator  (int numerator                 );
    void setDenominator(int denominator               );
    void setFraction   (int numerator, int denominator);

private:
    int _numerator  ;
    int _denominator;
};

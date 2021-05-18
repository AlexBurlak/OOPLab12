#ifndef VYRAZ_H
#define VYRAZ_H

#include <vector>
#include <QString>
#include "Exceptions.h"

/* 5.    Реалізувати програму для обчислення виразу

Коефіцієнти зчитуються з клавіатури. Роботу з виразом потрібно здійснювати за допомогою класу Vyraz.
Програма повинна перехоплювати та опрацьовувати такі виняткові ситуації:
а) ділення на нуль,
д) ще дві виняткові ситуації передбачити самостійно.*/

class Vyraz
{
private:
    short coefficientsNLength;
    short coefficientsMLength;
    short coefficientsKLength;
    short *coefficientsN = nullptr;
    short *coefficientsM = nullptr;
    short *coefficientsK = nullptr;
    short x;

    void getArray(short *coefficientsArray[], QString strinArray, short *length) throw(OverflowException);
public:
    Vyraz();
    Vyraz(QString coefficients1, QString coefficients2, QString coeffiicients3,
          QString x) throw(WrongInputException, OverflowException);
    ~Vyraz();
    double Calculate() throw(DivideByZeroException, NegativeSquareException, NegativeLogException);
    short const getCoefficientN(int index) throw(OutOfBoundsException);
};

#endif // VYRAZ_H

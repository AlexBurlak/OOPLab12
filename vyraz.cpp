#include "vyraz.h"

#include <QRegExp>
#include <QStringList>
#include <cmath>

Vyraz::Vyraz()
{

}

Vyraz::Vyraz(QString coefficients1, QString coefficients2, QString coefficients3,
      QString x) throw(WrongInputException, OverflowException)
{
    QRegExp regex("^(-?[0-9]+\\s*)+$");
    if(regex.exactMatch(coefficients1) == false)
    {
        throw WrongInputException("First coefficiency array is incorect.");
    }
    else if(regex.exactMatch(coefficients2) == false)
    {
        throw WrongInputException("Second coefficiency array is incorect.");
    }
    else if(regex.exactMatch(coefficients3) == false)
    {
        throw WrongInputException("Third coefficiency array is incorect.");
    }
    else if(regex.exactMatch(x) == false)
    {
        throw WrongInputException("X is incorrect.");
    }
    getArray(&coefficientsN, coefficients1, &coefficientsNLength);
    getArray(&coefficientsM, coefficients2, &coefficientsMLength);
    getArray(&coefficientsK, coefficients3, &coefficientsKLength);
    this->x = x.toShort();
}

Vyraz::~Vyraz()
{
    delete[] coefficientsN;
    delete[] coefficientsM;
    delete[] coefficientsK;
}

void Vyraz::getArray(short *coefficientsArray[], QString strinArray, short *length) throw(OverflowException)
{
    QStringList coeff1 = strinArray.split(" ");
    *coefficientsArray = new short[coeff1.size()];
    for(int i = 0; i < coeff1.size(); ++i)
    {
        if(coeff1[i].toInt() > 32767 || coeff1[i].toInt() < -32768)
        {
            throw OverflowException("Number should be in range: from -32768 to 32767.");
        }
        (*coefficientsArray)[i] = coeff1[i].toShort();
    }
    if(length != nullptr)
    {
        (*length) = coeff1.size();
    }
}

double Vyraz::Calculate() throw(DivideByZeroException, NegativeLogException, NegativeSquareException)
{
    //(a11 + …+ a1n)*√x + (a21 +…+a2m)*log(100-x) + (a31 + …+a3k)/(x-10)
    if(100-x < 0)
    {
        throw NegativeLogException("X must be smaller than 100");
    }
    else if(x < 0)
    {
        throw NegativeSquareException("X must be larger than 0");
    }
    else if(x - 10 == 0)
    {
        throw DivideByZeroException("X must be not 10");
    }
    double result = 0;
    int temp = 0;
    for(int i =0; i < coefficientsNLength; ++i)
    {
        temp += coefficientsN[i];
    }
    result += temp * std::sqrt(x);
    temp = 0;
    for(int i =0; i < coefficientsMLength; ++i)
    {
        temp += coefficientsM[i];
    }
    result += temp * std::log(100-x);
    temp = 0;
    for(int i =0; i < coefficientsKLength; ++i)
    {
        temp += coefficientsK[i];
    }
    result += ((double)temp/(x-10));

    return result;
}

short const Vyraz::getCoefficientN(int index) throw(OutOfBoundsException)
{
    if(index >= coefficientsNLength || index < 0)
    {
        throw OutOfBoundsException("Index must be in range: [0;" + QString::number(coefficientsNLength) + "]");
    }
    return coefficientsN[index];
}

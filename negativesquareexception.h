#ifndef NEGATIVESQUAREEXCEPTION_H
#define NEGATIVESQUAREEXCEPTION_H

#include "exception.h"

class NegativeSquareException : public Exception
{
public:
    NegativeSquareException(QString message);
    QString const getMessage() override;
};

#endif // NEGATIVESQUAREEXCEPTION_H

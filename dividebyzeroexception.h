#ifndef DIVIDEBYZEROEXCEPTION_H
#define DIVIDEBYZEROEXCEPTION_H

#include "exception.h"

class DivideByZeroException : public Exception
{
public:
    DivideByZeroException(QString message);
    QString const getMessage() override;
};

#endif // DIVIDEBYZEROEXCEPTION_H

#ifndef OVERFLOWEXCEPTION_H
#define OVERFLOWEXCEPTION_H

#include "exception.h"

class OverflowException : public Exception
{
public:
    OverflowException(QString message);
    QString const getMessage() override;
};

#endif // OVERFLOWEXCEPTION_H

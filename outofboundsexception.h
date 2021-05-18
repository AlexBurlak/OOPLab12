#ifndef OUTOFBOUNDSEXCEPTION_H
#define OUTOFBOUNDSEXCEPTION_H

#include "exception.h"

class OutOfBoundsException : public Exception
{
public:
    OutOfBoundsException(QString message);
    QString const getMessage() override;
};

#endif // OUTOFBOUNDSEXCEPTION_H

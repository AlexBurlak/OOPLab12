#ifndef NEGATIVELOGEXCEPTION_H
#define NEGATIVELOGEXCEPTION_H

#include "exception.h"

class NegativeLogException : public Exception
{
public:
    NegativeLogException(QString message);
    QString const getMessage() override;
};

#endif // NEGATIVELOGEXCEPTION_H

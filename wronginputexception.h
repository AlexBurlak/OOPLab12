#ifndef WRONGINPUTEXCEPTION_H
#define WRONGINPUTEXCEPTION_H

#include "exception.h"

class WrongInputException : public Exception
{
public:
    WrongInputException(QString message);
    QString const getMessage() override;
};

#endif // WRONGINPUTEXCEPTION_H

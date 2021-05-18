#ifndef EXCEPTION_H
#define EXCEPTION_H

#include <QString>

class Exception
{
protected:
    QString message;

public:
    Exception(QString message);
    virtual QString const getMessage();
};

#endif // EXCEPTION_H

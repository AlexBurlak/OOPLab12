#include "overflowexception.h"

OverflowException::OverflowException(QString message)
    :Exception(message)
{
}

QString const OverflowException::getMessage()
{
    return "OverflowException:\n" + message;
}

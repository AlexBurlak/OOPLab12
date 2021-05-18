#include "outofboundsexception.h"

OutOfBoundsException::OutOfBoundsException(QString message)
    :Exception(message)
{
}

QString const OutOfBoundsException::getMessage()
{
    return "Out of bounds exception:\n" + message;
}

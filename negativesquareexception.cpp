#include "negativesquareexception.h"

NegativeSquareException::NegativeSquareException(QString message)
    :Exception(message)
{
}

QString const NegativeSquareException::getMessage()
{
    return "Negative square exception:\n" + message;
}

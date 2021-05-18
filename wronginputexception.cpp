#include "wronginputexception.h"

WrongInputException::WrongInputException(QString message)
    :Exception(message)
{
}

QString const WrongInputException::getMessage()
{
    return "Wrong input exception:\n" + message;
}

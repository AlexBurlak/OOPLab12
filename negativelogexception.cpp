#include "negativelogexception.h"

NegativeLogException::NegativeLogException(QString message)
    :Exception(message)
{
}

QString const NegativeLogException::getMessage()
{
    return "Negative log exception:\n" + message;
}

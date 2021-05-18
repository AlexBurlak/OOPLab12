#include "exception.h"


Exception::Exception(QString message)
    :message(message)
{
}

QString const Exception::getMessage()
{
    return "Default exception:\n" + message;
}

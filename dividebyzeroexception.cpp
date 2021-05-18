#include "dividebyzeroexception.h"

DivideByZeroException::DivideByZeroException(QString message)
    :Exception(message)
{

}

QString const DivideByZeroException::getMessage()
{
    return "Divide by zero exception: " + message;
}

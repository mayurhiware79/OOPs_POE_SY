#include "QueueException.h"

QueueException::QueueException(string m) : msg(m) {}

string QueueException::getMessage() const
{
    return msg;
}

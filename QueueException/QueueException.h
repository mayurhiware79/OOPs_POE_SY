#ifndef QUEUE_EXCEPTION_H
#define QUEUE_EXCEPTION_H

#include <string>
using std::string;

class QueueException
{
public:
    explicit QueueException(string message);
    string getMessage() const;

private:
    string msg;
};

#endif

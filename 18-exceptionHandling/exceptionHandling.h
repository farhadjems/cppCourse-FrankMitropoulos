#ifndef EXCEPTION_HANDLING_H
#define EXCEPTION_HANDLING_H

#include <iostream>

class ExceptionHandling : public std::exception
{
private:
    const char *message;

public:
    ExceptionHandling(const char *inputMessage) : message(inputMessage){};
    ~ExceptionHandling() = default;
    virtual const char *what() const noexcept
    {
        return message;
    }
};

#endif
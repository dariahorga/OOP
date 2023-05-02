#include "InvalidNameException.h"
InvalidNameException::InvalidNameException(const string& message):m_message(message)
{}

const string& InvalidNameException::getMessage() const
{
    return m_message;
}
InvalidNameException::InvalidNameException()
{};

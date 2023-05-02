#include "Invalid_ID_Exception.h"
Invalid_ID_Exception::Invalid_ID_Exception(const string& message) : m_message(message)
{}
const string& Invalid_ID_Exception::getMessage() const
{
    return m_message;
}
Invalid_ID_Exception::Invalid_ID_Exception()
{};

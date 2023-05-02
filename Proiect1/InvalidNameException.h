#pragma once
#include <exception>
#include <iostream>
#include <string>
using namespace std;

class InvalidNameException: public exception
{
	string m_message;
public:
InvalidNameException(const string& message);
const string& getMessage() const;
InvalidNameException();

};


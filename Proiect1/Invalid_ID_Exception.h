#pragma once
#include <iostream>
#include <string>
using namespace std;

class Invalid_ID_Exception : public exception {
public:
    Invalid_ID_Exception(const string& message);
    const string& getMessage() const;
    Invalid_ID_Exception();

private:
    string m_message;
};


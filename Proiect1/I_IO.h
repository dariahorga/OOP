#pragma once
#include <iostream>
using namespace std;

class I_IO
{
public:

    virtual void _cin(istream&) = 0;
    virtual void _cout(ostream&) = 0;
    friend istream& operator >>(istream& in, I_IO& ob);
    friend ostream& operator <<(ostream& out, I_IO& ob);

};


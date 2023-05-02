#include "I_IO.h"
istream&  operator >>(istream& in, I_IO& ob)
{
    ob._cin(in);
    return in;
}
ostream& operator <<(ostream& out, I_IO& ob)
{
    ob._cout(out);
    return out;
}

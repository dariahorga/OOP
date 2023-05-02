#include "Contact.h"
using namespace std;

Contact::Contact()
{

}

Contact::Contact(string mail,string adress,string phone_number)
{
	_mail = mail;
	_adress = adress;
	_phone_number = phone_number;
}

Contact::~Contact()
{

}

void Contact::set_Mail(string mail)
{
	_mail=mail;
}

string Contact::get_Mail()
{
	return _mail;
}

void Contact::set_Adress(string adress)
{
     _adress = adress;
}

string Contact::get_Adress()
{
	return _adress;
}

void Contact::set_Phone_number(string phone_number)
{
	_phone_number=phone_number;	
}

string Contact::get_Phone_number()
{
	return _phone_number;
}

void Contact::_cout(ostream& out)
{
	out << "Contact: " << endl;
	out << "	adress: " << _adress << endl;
	out << "	phone_number: " <<_phone_number << endl;
	out << "	mail:" << _mail;
}

void Contact::_cin(istream& in)
{
	cout << "Enter contact: " << endl;
	cout << "	adress: ";	in >> _adress;
	cout << "	phone_number: ";	in >> _phone_number;	
	cout << "	mail: "; in >> _mail;
}

void Contact:: display()
{
	cout << "Contact: " << endl;
	cout << "	adress: "<<_adress << endl;
	cout << "	phone_number: " << _phone_number << endl;
	cout << "	mail:" << _mail << endl;
}

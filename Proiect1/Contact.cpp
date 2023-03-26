#include "Contact.h"
#include <iostream>
#include "String.h"
using namespace std;

Contact::Contact()
{

}

Contact::Contact(String mail,String adress,String phone_number)
{
	_mail = mail;
	_adress = adress;
	_phone_number = phone_number;
}

Contact::~Contact()
{

}

void Contact::set_Mail(String mail)
{
	_mail=mail;
}

String Contact::get_Mail()
{
	return _mail;
}

void Contact::set_Adress(String adress)
{
     _adress = adress;
}

String Contact::get_Adress()
{
	return _adress;
}

void Contact::set_Phone_number(String phone_number)
{
	_phone_number=phone_number;	
}

String Contact::get_Phone_number()
{
	return _phone_number;
}

ostream& operator << (ostream& out, const Contact& contact)
{
	out << "Contact: " << endl;
	out << "	adress: " << contact._adress << endl;
	out << "	phone_number: " <<contact._phone_number << endl;
	out << "	mail:" << contact._mail;
	return out;
}

istream& operator >> (istream& in, Contact& contact)
{
	cout << "Enter contact: " << endl;
	cout << "	adress: ";	in >> contact._adress;
	cout << "	phone_number: ";	in >> contact._phone_number;	
	cout << "	mail: "; in >> contact._mail;
	return in;
}

void Contact:: display()
{
	cout << "Contact: " << endl;
	cout << "	adress: "<<_adress << endl;
	cout << "	phone_number: " << _phone_number << endl;
	cout << "	mail:" << _mail << endl;
}

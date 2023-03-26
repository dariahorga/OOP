#pragma once
#include "String.h"
using namespace std;

class Contact
{
	String     _mail;
	String     _phone_number;
	String     _adress;

public:
	
	Contact();

	Contact(String mail,String adress, String phone_number);

	~Contact();

	void set_Mail(String mail);

	String get_Mail();
	
	void set_Adress(String adress);

	String get_Adress();

	void set_Phone_number(String phone_number);

	String get_Phone_number();
    
	friend ostream& operator << (ostream& out, const Contact& contact);

	friend istream& operator >> (istream& in, Contact& contact);

	void display();



};


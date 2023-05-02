#pragma once
#include "I_IO.h"
#include <iostream>
#include <string>
using namespace std;

class Contact: public I_IO
{
	string     _mail;
	string     _phone_number;
	string     _adress;

public:
	
	Contact();

	Contact(string mail,string adress, string phone_number);

	~Contact();

	void set_Mail(string mail);

	string get_Mail();
	
	void set_Adress(string adress);

	string get_Adress();

	void set_Phone_number(string phone_number);

	string get_Phone_number();

	void _cin(istream& in);

	void _cout(ostream& out);

	void display();



};


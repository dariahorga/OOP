#pragma once
#include <string>
#include "I_IO.h"
#include <iostream>
using namespace std;

class Job_history: public I_IO
{
	string _start_date;
	string _end_date;
	
public:

	Job_history(string start_date, string end_date);

	Job_history();

	~Job_history();

	void set_Start_date(string start_date);

	string get_Start_date();

	void set_End_date(string end_date);

	string get_End_date();
	
	void _cin(istream& in);

	void _cout(ostream& out);
};


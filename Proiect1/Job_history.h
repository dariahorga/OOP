#pragma once
#include "String.h"
using namespace std;

class Job_history
{
	String _start_date;
	String _end_date;
	
public:

	Job_history(String start_date, String end_date);

	Job_history();

	~Job_history();

	void set_Start_date(String start_date);

	String get_Start_date();

	void set_End_date(String end_date);

	String get_End_date();

	friend ostream& operator << (ostream& out, const Job_history& job_history);

	friend istream& operator >> (istream& in, Job_history& job_history);

};


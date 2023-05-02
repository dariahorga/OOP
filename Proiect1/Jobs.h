#pragma once
#include <string>
#include <iostream>
#include "I_IO.h"
using namespace std;

class Jobs: public I_IO
{ 
protected:
	int         _min_salary;
	int         _max_salary;
	string _job_title;	

public:
    
	Jobs();

	Jobs(string job_title, int min_salary, int max_salary);

	virtual ~Jobs();

	void set_Min_salary(int min_salary);

	int get_Min_salary();

	void set_Max_salary(int max_salary);

	int get_Max_salary();

	virtual void _cin(istream& in);

	virtual void _cout(ostream& out);

	string get_Job_title() const;

	virtual void set_Job_title(const string& job_title);


	
};


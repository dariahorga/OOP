#pragma once
#include "Jobs.h"
#include "I_IO.h"
#include <iostream>
#include <string>

class Analyst : public Jobs
{
	int _work_hours;
    int _number_projects;


public:

	Analyst();
	virtual ~Analyst();
	Analyst(int work_hours,int number_projects, string job_title, int max_salary, int min_salary);
	void _cout(ostream& out);
	void set_Job_title(const string& job_title);

};


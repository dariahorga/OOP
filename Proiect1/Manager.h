#pragma once
#include "Jobs.h"
#include <iostream>
#include <string>

class Manager : public Jobs
{
	int _number_employees;
	int _work_hours;


public:

	Manager();
	virtual ~Manager();
	Manager(int number_employees, int work_hours, string job_title, int max_salary, int min_salary);
	void _cout(ostream& out);
	void set_Job_title(const string& job_title);

};


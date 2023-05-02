#pragma once
#include "Jobs.h"
#include "Manager.h"
#include <iostream>
#include <string>

class Developer: public Jobs
{
	int _work_hours;
	int _number_projects;

public:
	Developer();
	~Developer();
	Developer(int work_hours,int number_projects, string job_title, int max_salary, int min_salary);
	void _cout(ostream& out);
	void set_Job_title(const string& job_title);

};


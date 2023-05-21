#pragma once
#include "Jobs.h"
#include "I_IO.h"
#include <iostream>
#include <string>

class Analyst : public Jobs
{
	int _work_hours;
    int _number_projects;
	static Analyst* _instance_Analyst;
	Analyst();
	virtual ~Analyst();

public:
	Analyst(const Analyst& analyst) = delete;
	static Analyst* getInstance();
	void _cout(ostream& out);
	void set_Job_title(const string& job_title);

};


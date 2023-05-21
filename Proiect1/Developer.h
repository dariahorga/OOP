#pragma once
#include "Jobs.h"
#include "Manager.h"
#include <iostream>
#include <string>

class Developer: public Jobs
{
	int _work_hours;
	int _number_projects;
	static Developer* _instance_Developer;
	Developer();
	~Developer();

public:
	Developer(const Developer& developer) = delete;
	static Developer* getInstance();
	void _cout(ostream& out);
	void set_Job_title(const string& job_title);

};


#pragma once
#include "Jobs.h"
#include <iostream>
#include <string>

class Manager : public Jobs
{
	int _number_employees;
	int _work_hours;
	static Manager* _instance_Manager;
	Manager();
	virtual ~Manager();


public:
	Manager(const Manager& manager) = delete;
	static Manager* getInstance();
	void _cout(ostream& out);
	void set_Job_title(const string& job_title);

};


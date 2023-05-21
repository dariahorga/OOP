#pragma once
#include "Department.h"
#include "Contact.h"
#include "Job_history.h"
#include <iostream>
#include <string>

class HR :public Department
{
	int _number_employees;
	int _department_id;
	int _budget;
	int _number_tasks;
	static HR* _instance_HR;
	~HR();
	HR();

public:
	HR(const HR& hr) = delete;
	static HR* getInstance();
	void display_details() const;
	int calculate_tax() const;
	int get_Budget() const;
	int get_number_tasks() const;
	string get_Department_name() const;
	Department* clone() const;

};


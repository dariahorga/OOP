#pragma once
#include "Department.h"
#include <iostream>
#include <string>

class Engineering :public Department
{
	int _number_employees;
	int _department_id;
	int _budget;
	int _number_tasks;
	static Engineering* _instance_Engineering;
	~Engineering();
	Engineering();


public:
	Engineering(const Engineering& engineering) = delete;
	static Engineering* getInstance();
	void display_details() const;
	int calculate_tax() const;
	int get_Budget() const;
	int get_number_tasks() const;
	string get_Department_name() const;
	Department* clone() const;
};

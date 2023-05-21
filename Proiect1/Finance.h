#pragma once
#include "Department.h"
#include <iostream>
#include <string>
class Finance : public Department
{
	int _department_id;
	int _budget;
	int _number_employees;
	int _number_tasks;
	static Finance* _instance_Finance;
	~Finance();
	Finance();

public:
	Finance(const Finance& finance) = delete;
	static Finance* getInstance();
	void display_details() const;
    int calculate_tax() const;
	int get_Budget() const;
	int get_number_tasks() const;
	string get_Department_name() const;
	Department* clone() const;
};


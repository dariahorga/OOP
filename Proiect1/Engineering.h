#pragma once
#include "Department.h"
#include <iostream>
#include <string>

class Engineering :public Department
{
	int _number_employees;
	int _department_id;
	int _budget;

public:
	~Engineering();
	Engineering();
	void display_details() const;
	int calculate_tax() const;
	int get_Budget() const;
	Engineering(int department_id, int budget, int number_employees, string mail, string adress, string phone_number, string start_date, string end_date);
	Department* clone() const;
};

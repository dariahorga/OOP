#pragma once
#include "Department.h"
#include <iostream>
#include <string>
class Finance : public Department
{
	int _department_id;
	int _budget;
	int _number_employees;

public:
	~Finance();
	Finance();
	void display_details() const;
	Finance(int department_id,int budget,int number_employees, string mail, string adress, string phone_number, string start_date, string end_date);
    int calculate_tax() const;
	int get_Budget() const;
	Department* clone() const;
};


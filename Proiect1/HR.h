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

public:
	~HR();
	HR();
	void display_details() const;
	HR(int department_id,int budget,int number_employees, string mail, string adress, string phone_number, string start_date, string end_date);
	int calculate_tax() const;
	int get_Budget() const;
	Department* clone() const;

};


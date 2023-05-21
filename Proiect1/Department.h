#pragma once
#include "Jobs.h"
#include "Employee.h"
#include "Job_history.h"
#include "Contact.h"
#include "Jobs.h"
#include "Manager.h"
#include <iostream>
#include <string>

class Department:protected Contact,protected Job_history
{

public:

	Department();
	virtual ~Department();
	Department(string mail, string adress, string phone_number,string start_date,string end_date);
	virtual void display_details() const=0;
	virtual int calculate_tax() const=0;
	virtual int get_Budget() const = 0;
	virtual int get_number_tasks() const = 0;
	virtual string get_Department_name() const = 0;
	Department* operator=(const Department* department);
	virtual Department* clone() const = 0;

};


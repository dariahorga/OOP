#pragma once
#include "Contact.h"
#include "Jobs.h"
#include "Job_history.h"
#include "String.h"
#include <iostream>
using namespace std;

class Employee
{
public:
	Employee();
	Employee(int employee_id, String _first_name, String _last_name, Contact contact, String job, Job_history job_history, int salary);

private:

	int			_employee_id;
	String		_first_name;
	String		_last_name;
	Contact		_contact;
	String		_job;
	Job_history _job_history;
	int			_salary;

public:

	void set_Employee_id(int employee_id);
	
	int get_Employee_id();

	void set_First_name(const String & first_name);

	String get_First_name();

	void set_Last_name(const String & last_name);

	String get_Last_name();

	void set_Salary(int salary);

	int get_Salary();

	void set_contact(const Contact& contact);

	void set_Job_history(const Job_history& job_history);

	void set_Job(const String& job);

	String get_Job();

	friend ostream& operator << (ostream& out, const Employee& employee);

	friend istream& operator >> (istream& in, Employee& employee);

	Employee(const Employee& employee);

	Employee& operator=(const Employee& employee);
};


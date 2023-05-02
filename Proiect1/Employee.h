#pragma once
#include "Contact.h"
#include "Jobs.h"
#include "Job_history.h"
#include "I_IO.h"
#include <string>
#include <iostream>
using namespace std;

class Employee: public I_IO
{
public:

	Employee();
	Employee(int employee_id, string _first_name, string _last_name, Contact contact,Job_history job_history, string job, int salary);

private:

	int			_employee_id;
	string		_first_name;
	string		_last_name;
	string		_job;
	int			_salary;
	Contact     _contact;
	Job_history _job_history;
	static string _company_name;

public:

	void set_Employee_id(int employee_id);
	
	int get_Employee_id();

	void set_First_name(const string & first_name);

	string get_First_name();

	void set_Last_name(const string & last_name);

	string get_Last_name();

	void set_Salary(int salary);

	int get_Salary();

	void set_contact(const Contact& contact);

	void set_Job_history(const Job_history& job_history);

	void set_Job(const string& job);

	string get_Job();

	void _cin(istream& in);

	void _cout(ostream& out);

	Employee(const Employee& employee);

	Employee& operator=(const Employee& employee);

	static string getCompany_name();

};


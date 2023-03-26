#pragma once
#include "Employee.h"
#include "Jobs.h"
#include "String.h"
using namespace std;

class Company
{
public:
	Company();
	~Company();

private:

	String		_name;
	String		_CIF;
	Contact		_contact;
	Employee* _employees;
	int _number_employees;
	Jobs* _jobs;
	int _number_jobs = 0;

public:

	bool addEmployee(const Employee& employee);
	
	bool addJob(const Jobs& job);

	void display();

	int getAverageSalary();

	int maximumSalary();
};
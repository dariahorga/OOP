#pragma once
#include <string>
#include <iostream>
#include "Employee.h"
#include "Department.h"
#include "Jobs.h"
using namespace std;

class Company
{
public:
	Company();
	~Company();

private:

	string		_name;
	string		_CIF;
	Contact		_contact;
	Employee* _employees;
	int _number_employees;
	Jobs* _jobs;
	int _number_jobs;
	Department** _departments;
	int _number_departments;
	static string _location;

public:

	bool addEmployee(Employee& employee);
	
	bool addJob(const Jobs& job);

	bool addDepartments(const Department& department);

	void delete_LastDepartment();

	void display();
	
	static string getLocation();

	int getAverageSalary();

	int maximumSalary();

	Department* getLastDepartment();
};
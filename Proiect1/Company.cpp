#include "Company.h"
#include "String.h"
#include <iostream>

using namespace std;

Company::Company()
{
	_name = String("Microsoft");
	_CIF = String("RO76483021");
	_contact.set_Phone_number("0771892635");
	_contact.set_Mail("microsoft@yahoo.com");
	_contact.set_Adress("Bulevardul Unirii nr. 89");

	_employees = new Employee[10];	
	_number_employees = 0;

	_jobs = new Jobs[2];
	_number_jobs = 0;
}

Company::~Company()
{
	if (_employees != nullptr)
		delete[] _employees;
	_employees = nullptr;

	if (_jobs != nullptr)
		delete[] _jobs;
	_jobs = nullptr;

	_number_employees = 0;
}

bool Company::addEmployee(const Employee& employee)
{
	if (_number_employees >= 9)
	{
		return false;
	}

	_employees[_number_employees] = employee;
	_number_employees++;

	return true;

}

bool Company::addJob(const Jobs& job)
{
	if (_number_jobs >= 9)
	{
		return false;
	}

	_jobs[_number_jobs] = job;
	_number_jobs++;

	return true;
}

void Company::display()
{

	cout << "Name: " << _name << endl;
	cout << "CIF: " << _CIF << endl;
	_contact.display();
}

int Company::getAverageSalary()
{
	if (_number_employees == 0)
		return 0;

	int salary = 0;
	for (int i = 0; i < _number_employees; i++)
	{		
		salary = salary + _employees[i].get_Salary();
	}
	salary = salary / _number_employees;
	return salary;
}


int Company::maximumSalary()
{
	int maximum = 0;
	for (int i = 0; i < _number_employees; i++)
	{
		if (_employees[i].get_Salary() > maximum)
			maximum = _employees[i].get_Salary();
	}

	return maximum;
}



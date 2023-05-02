#include "Company.h"
#include <exception>
#include "Invalid_ID_Exception.h"
#include "InvalidNameException.h"

using namespace std;

string Company:: _location = "Romania";

Company::Company()
{
	_name = "Microsoft";
	_CIF = "RO76483021";
	_contact.set_Phone_number("0771892635");
	_contact.set_Mail("microsoft@yahoo.com");
	_contact.set_Adress("Bulevardul Unirii nr. 89");

	_employees = new Employee[10];	
	_number_employees = 0;

	_jobs = new Jobs[2];
	_number_jobs = 0;

	_departments = new Department*[2];
	_number_departments = 0;
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

	if (_departments != nullptr)
		delete[] _departments;
	_departments = nullptr;
}

bool Company::addEmployee( Employee& employee)
{
		if (_number_employees >= 9)
		{
			throw InvalidNameException("Maximum number of employees reached");
			return false;
		}

		for (int i = 0; i < _number_employees; i++)
		{
			if (_employees[i].get_Employee_id() == employee.get_Employee_id())
			{
				throw Invalid_ID_Exception("Employee ID already exists");
				return false;
			}
		}

		if (employee.get_Last_name().length() < 3 || employee.get_Last_name().length() > 30 || employee.get_Last_name() == " ")
		{
			throw InvalidNameException("Invalid employee name");
			return false;
		}

		_employees[_number_employees] = employee;
		_number_employees++;

		return true;

}

bool Company::addJob(const Jobs& job)
{
		if (_number_jobs > 2)
		{
			throw exception("Maximum number of jobs reached");
			return false;
		}
		for (int i = 0; i < _number_jobs; i++)
		{
			if (_jobs[i].get_Job_title() == job.get_Job_title())
			{
				throw InvalidNameException("Invalid job title");
				return false;
			}
		}
		_jobs[_number_jobs] = job;
		_number_jobs++;

		return true;
}

bool Company::addDepartments(const Department& department) {
	if (_number_departments >= 2) {
		throw exception("Maximum number of departments reached");
		return false;
	}
	_departments[_number_departments] = department.clone();
	_number_departments++;
	return true;
}

void Company:: delete_LastDepartment()
{
	if(_number_departments == 0) 
		throw exception("No departments to delete");
	Department* d =getLastDepartment();
	_departments[_number_departments - 1] = nullptr;
	delete d;
	_number_departments--;

}

void Company::display()
{

	cout << "Name: " << _name << endl;
	cout << "CIF: " << _CIF << endl;
	_contact.display();
	cout << "Location:";
}
string Company::getLocation()
{
	return _location;
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
	if (_number_employees == 0)
		return 0;

	int maximum = 0;
	for (int i = 0; i < _number_employees; i++)
	{
		if (_employees[i].get_Salary() > maximum)
			maximum = _employees[i].get_Salary();
	}

	return maximum;
}
Department* Company::getLastDepartment()
{
	return _departments[_number_departments-1];
}


#include "Employee.h"
#include "String.h"
#include <iostream>
using namespace std;

Employee::Employee()
{
	_employee_id = 0;	
	_salary =0;	
}
Employee::Employee(int employee_id, String first_name, String last_name, Contact contact, String job, Job_history job_history, int salary)
{
	_employee_id = employee_id;
	_first_name = first_name;
	_last_name = last_name;
	_job = job;
	_salary = salary;
	_contact = contact;
	_job_history = job_history;

}

void Employee::set_Employee_id(int employee_id)
{
	_employee_id = employee_id;
}

int Employee::get_Employee_id()
{
	return _employee_id;
}

void Employee::set_First_name(const String & first_name)
{
	_first_name = first_name;
}

String Employee::get_First_name()
{
	return _first_name;
}

void Employee::set_Last_name(const String & last_name)
{
	_last_name = last_name;
}

String Employee::get_Last_name()
{
	return _last_name;
}

void Employee::set_Salary(int salary)
{
	_salary = salary;
}

int Employee::get_Salary()
{
	return _salary;
}

void Employee::set_contact(const Contact& contact)
{
	_contact = contact;
}

void Employee::set_Job_history(const Job_history& job_history)
{
	_job_history = job_history;
}

void Employee::set_Job(const String& job)
{
	_job = job;
}

String Employee::get_Job()
{
	return _job;
}
ostream& operator << (ostream& out, const Employee& employee)
{
	out << "Employee: " << endl;
	out << "	First name: "; out << employee._first_name << endl;
	out << "	Last name: ";  out << employee._last_name << endl;
	out << "	Salary:" << employee._salary<<endl;
	out << employee._contact << endl;
	out << " Job: ";
	out << employee._job << endl;
	out << "Job history:" << employee._job_history;
	return out;
}

istream& operator >> (istream& in,  Employee& employee)
{
	cout <<  "Enter employee's first name:";
	in >> employee._first_name;
	cout << "Enter employee's last name:";
	in>>employee._last_name;
	cout << "Enter employee id: ";
	in >> employee._employee_id;
	cout << "Enter salary:";
	in >>employee._salary;
	return in;
}

Employee::Employee(const Employee& employee)
{
	_employee_id = employee._employee_id;
	_first_name = employee._first_name;
	_last_name = employee._last_name;
	_job = employee._job;
	_salary = employee._salary;
	_contact = employee._contact;
	_job_history = employee._job_history;
}

Employee & Employee::operator=(const Employee& employee)
{
	_employee_id = employee._employee_id;
	_first_name = employee._first_name;
	_last_name = employee._last_name;
	_job = employee._job;
	_salary = employee._salary;
	_contact = employee._contact;
	_job_history = employee._job_history;

	return *this;
}
#include "Employee.h"
using namespace std;

Employee::Employee()
{
	_employee_id = 0;	
	_salary =0;	
}
Employee::Employee(int employee_id, string first_name, string last_name, Contact contact, Job_history job_history, string job, int salary,int department_id,int number_tasks)
{
	_employee_id = employee_id;
	_first_name = first_name;
	_last_name = last_name;
	_job = job;
	_salary = salary;
	_contact = contact;
	_job_history = job_history;
	_department_id = department_id;
	_number_tasks = number_tasks;

}

void Employee::set_Employee_id(int employee_id)
{
	_employee_id = employee_id;
}

int Employee::get_Employee_id()
{
	return _employee_id;
}

void Employee::set_First_name(const string & first_name)
{
	_first_name = first_name;
}

string Employee::get_First_name()
{
	return _first_name;
}

void Employee::set_Last_name(const string & last_name)
{
	_last_name = last_name;
}

string Employee::get_Last_name()
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

void Employee::set_Job(const string& job)
{
	_job = job;
}

string Employee::get_Job()
{
	return _job;
}
void Employee::_cout(ostream& out)
{
	out << "Employee: " << endl;
	out << "	First name: "; out << _first_name << endl;
	out << "	Last name: ";  out << _last_name << endl;
	out << "	Salary:" << _salary<<endl;
	out << _contact << endl;
	out << " Job: ";
	out << _job << endl;
	out << "Job history:" << _job_history;
	out << "Number of tasks: " << _number_tasks;
}

void Employee::_cin(istream& in)
{
	cout <<  "Enter employee's first name:";
	in >> _first_name;
	cout << "Enter employee's last name:";
	in>>_last_name;
	cout << "Enter employee id: ";
	in >> _employee_id;
	cout << "Enter salary:";
	in >>_salary;
	cout << "Enter department_id: ";
	in >> _department_id;
	cout << "Enter number of tasks: ";
	in >> _number_tasks;
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
	_department_id = employee._department_id;
	_number_tasks = employee._number_tasks;
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
	_department_id = employee._department_id;
	_number_tasks = employee._number_tasks;

	return *this;
}
void Employee::set_Department_id(int department_id)
{
	_department_id = department_id;
}

int Employee::get_Department_id()
{
	return _department_id;
}
void Employee::set_number_tasks(int number_tasks)
{
	_number_tasks = number_tasks;
}

int Employee::get_number_tasks()
{
	return _number_tasks;
}
#include "Jobs.h"

Jobs::Jobs()
{
	_min_salary = 0;
	_max_salary = 0;
	string* _tasks = new string[10];
}

Jobs::Jobs(string job_title, int min_salary, int max_salary)
{
	_job_title = job_title;
	_min_salary = min_salary;
	_max_salary = max_salary;
}
Jobs::~Jobs()
{
}
void Jobs::set_Min_salary(int min_salary)
{
	_min_salary = min_salary;
}
int Jobs::get_Min_salary()
{
	return _min_salary;
}
void Jobs:: set_Max_salary(int max_salary)
{
	_max_salary = max_salary;
}
int Jobs::get_Max_salary()
{
	return _max_salary;
}
void Jobs::set_Job_title(const string& job_title)
{
	_job_title = job_title;
}

string Jobs::get_Job_title() const
{
	return _job_title;
}
void Jobs::_cout(ostream& out)
{	
	out << "Job title: "<< _job_title;
}

void Jobs::_cin(istream& in)
{
	cout << "Enter job title:";
	in >>_job_title;
	cout << "Enter minimum salary:";
	in >> _min_salary;
	cout<< "Enter maximum salary:";
	in>> _max_salary;

}

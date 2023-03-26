#include "Jobs.h"
#include "String.h"

Jobs::Jobs()
{
	_min_salary = 0;
	_max_salary = 0;	
}

Jobs::Jobs(String job_title, int min_salary, int max_salary)
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
void Jobs::set_Job_title(const String& job_title)
{
	_job_title = job_title;
}

String & Jobs::get_Job_title()
{
	return _job_title;
}
ostream& operator << (ostream& out, const Jobs& job)
{
	
	out << "Job title: "<< job._job_title;
	return out;
}

istream& operator >> (istream& in, Jobs& job)
{
	cout << "Enter job title:";
	in >> job._job_title;
	cout << "Enter minimum salary:";
	in >> job._min_salary;
	cout<< "Enter maximum salary:";
	in>> job._max_salary;

	return in;
}
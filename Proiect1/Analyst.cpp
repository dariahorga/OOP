#include "Analyst.h"
Analyst::Analyst()
{
	_work_hours = 0;
	_number_projects = 0;
}
Analyst::~Analyst()
{
}

Analyst::Analyst(int work_hours,int number_projects, string job_title, int max_salary, int min_salary):Jobs(job_title, max_salary, min_salary), _work_hours(work_hours), _number_projects(number_projects)
{
}

void Analyst::_cout(ostream& out)
{
	out << "Job title: " << get_Job_title() << endl;
	out << "Number of projects: " << _number_projects << endl;
	out << "Work hours per day: " << _work_hours << endl;

}
void Analyst::set_Job_title(const string& job_title)
{
	_job_title = job_title;
}



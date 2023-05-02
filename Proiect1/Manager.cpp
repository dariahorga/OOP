#include "Manager.h"

Manager::Manager() 
{

	_number_employees=0;
	_work_hours=0;	
}

Manager::~Manager()
{
}

Manager::Manager(int number_employees, int work_hours, string job_title, int max_salary, int min_salary)
	: Jobs(job_title, max_salary, min_salary), _number_employees(number_employees), _work_hours(work_hours)
{
}

void Manager:: _cout(ostream& out)
{		
	out << "Job title: "<< get_Job_title()<< endl;
	out << "Number employees: " << " " << _number_employees << endl;
	out << "Work hours per day: " << _work_hours<<endl;

}
void Manager::set_Job_title(const string& job_title)
{
	_job_title = job_title;
}


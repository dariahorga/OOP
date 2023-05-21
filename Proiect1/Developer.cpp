#include "Developer.h"

Developer::Developer(): Jobs("Developer C++", 6789, 9999)
{
	_work_hours=8;
	_number_projects = 45;
}
Developer::~Developer()
{
}
void Developer::_cout(ostream& out)
{
	out << "Job title: " << get_Job_title() << endl;
	out << "Number of projects: " << _number_projects << endl;
	out << "Work hours per day: " << _work_hours << endl;
}
void Developer::set_Job_title(const string& job_title)
{
	_job_title = job_title;
}
Developer* Developer::getInstance()
{
    if (_instance_Developer == nullptr)
    {
        _instance_Developer = new Developer();
        return _instance_Developer;
    }
    else
    {
        return _instance_Developer;
    }
}

Developer* Developer::_instance_Developer = nullptr;

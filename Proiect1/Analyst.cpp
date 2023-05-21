#include "Analyst.h"
Analyst::Analyst(): Jobs("Developer C++", 9876, 9999)
{
	_work_hours = 8;
	_number_projects = 15;
}
Analyst::~Analyst()
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
Analyst* Analyst::getInstance()
{
    if (_instance_Analyst == nullptr)
    {
        _instance_Analyst = new Analyst();
        return _instance_Analyst;
    }
    else
    {
        return _instance_Analyst;
    }
}
Analyst* Analyst::_instance_Analyst = nullptr;



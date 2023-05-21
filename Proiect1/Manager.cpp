#include "Manager.h"

Manager::Manager() : Jobs("Manager Departament Finance", 3456, 7890)
{

	_number_employees=23;
	_work_hours=7;	
}

Manager::~Manager()
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
Manager* Manager::getInstance()
{
    if (_instance_Manager == nullptr)
    {
        _instance_Manager = new Manager();
        return _instance_Manager;
    }
    else
    {
        return _instance_Manager;
    }
}
Manager* Manager::_instance_Manager = nullptr;


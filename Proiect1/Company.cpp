#include "Company.h"
#include <exception>
#include "Invalid_ID_Exception.h"
#include "InvalidNameException.h"
#include "Evaluation.cpp"

using namespace std;

string Company::_location = "Romania";

Company::Company()
{
	_name = "Microsoft";
	_CIF = "RO76483021";
	_contact.set_Phone_number("0771892635");
	_contact.set_Mail("microsoft@yahoo.com");
	_contact.set_Adress("Bulevardul Unirii nr. 89");
}

Company::~Company()
{
	for (Employee* employee : _employees)
	{
		delete employee;
	}
	_employees.clear();

	_jobs.clear();

	for (auto departmentPtr : _departments)
	{}
  _departments.clear();
  _observers.clear();
}

bool Company::addEmployee(Employee* employee)
{
	if (_employees.size() >= 9)
	{
		throw InvalidNameException("Maximum number of employees reached");
		return false;
	}

	for (int i = 0; i < _employees.size(); i++)
	{
		if (_employees[i]->get_Employee_id() == employee->get_Employee_id())
		{
			throw Invalid_ID_Exception("Employee ID already exists");
			return false;
		}
	}

	if (employee->get_Last_name().length() < 3 || employee->get_Last_name().length() > 30 || employee->get_Last_name() == " ")
	{
		throw InvalidNameException("Invalid employee name");
		return false;
	}

	_employees.push_back(employee);

	notifyObservers("New employee added: " + employee->get_Last_name());
	return true;
}

bool Company::addJob(const Jobs& job)
{
	if (_jobs.size() >= 2)
	{
		throw exception("Maximum number of jobs reached");
		return false;
	}
	for (int i = 0; i < _jobs.size(); i++)
	{
		if (_jobs[i].get_Job_title() == job.get_Job_title())
		{
			throw InvalidNameException("Invalid job title");
			return false;
		}
	}
	_jobs.push_back(job);

	notifyObservers("New job added: " + job.get_Job_title());
	return true;
}

bool Company::addDepartments(const Department& department)
{
	if (_departments.size() >= 2)
	{
		throw exception("Maximum number of departments reached");
		return false;
	}
	Department* dep = department.clone();
	_departments.push_back(make_shared<Department*>(dep));

	notifyObservers("New department added: " + department.get_Department_name());
	return true;
}

void Company::delete_LastDepartment()
{
	if (_departments.empty())
		throw exception("No departments to delete");

	_departments.pop_back();
}

void Company::display()
{
	cout << "Name: " << _name << endl;
	cout << "CIF: " << _CIF << endl;
	_contact.display();
	cout << "Location: " << _location << endl;
}

string Company::getLocation()
{
	return _location;
}

int Company::getAverageSalary()
{
	if (_employees.size() == 0)
		return 0;

	int salary = 0;
	for (int i = 0; i < _employees.size(); i++)
	{
		salary = salary + _employees[i]->get_Salary();
	}
	salary = salary / _employees.size();
	return salary;
}

int Company::maximumSalary()
{
	if (_employees.size() == 0)
		return 0;

	int maximum = 0;
	for (int i = 0; i < _employees.size(); i++)
	{
		if (_employees[i]->get_Salary() > maximum)
			maximum = _employees[i]->get_Salary();
	}

	return maximum;
}

shared_ptr<Department *> Company::getLastDepartment()
{
	if (_departments.empty())
		return nullptr;

	return _departments.back();
}
void Company::notifyObservers(const string& message)
{
	for (const auto& observer : _observers)
		(*observer)->update(message);
}

void Company::attachObserver(unique_ptr<Observer*> observer)
{
	_observers.push_back(move(observer));
}

void Company::detachObserver(Observer* observer)
{
	auto it = std::find_if(_observers.begin(), _observers.end(),
		[observer](const auto& o) { return *o == observer; });

	if (it != _observers.end())
		_observers.erase(it);
}

void Company::update(const string& message)
{
	cout << message << endl;
}

void Company::sortEmployeesByTasks()
{
	Evaluation<Employee*> employeeSorter(_employees);
	_employees = employeeSorter.getSortedObjects();
}

void Company::sortDepartmentsByTasks()
{
	vector< Department*> vect_depart;

	for (shared_ptr<Department*> dep : _departments)
	{
		vect_depart.push_back(*dep);
	}

	Evaluation<Department*> departmentSorter(vect_depart);

	vect_depart = departmentSorter.getSortedObjects();

	_departments.clear();

	for (Department* dep : vect_depart)
	{
		_departments.push_back(make_shared<Department *>(dep));
	}

}

void Company::getAverageNumberOfTasks()
{
	Evaluation<Employee*> employeeEvaluation(_employees);
	double averageTasksEmployees = employeeEvaluation.getAverageNumberOfTasks();
	cout << "Average number of tasks per employee: " << averageTasksEmployees << endl;

	vector< Department*> vect_depart;

	for (shared_ptr<Department*> dep : _departments)
	{
		vect_depart.push_back(*dep);
	}

	Evaluation<Department*> departmentEvaluation(vect_depart);
	double averageTasksDepartments = departmentEvaluation.getAverageNumberOfTasks();
	cout << "Average number of tasks per department: " << averageTasksDepartments << endl;
	_departments.clear();

	for (Department* dep : vect_depart)
	{
		_departments.push_back(make_shared<Department*>(dep));
	}
}

#pragma once
#include <vector>
#include <string>
#include <memory>
#include <iostream>
#include "Employee.h"
#include "Department.h"
#include "Observer.h"
#include "Jobs.h"
#include "Evaluation.h"

using namespace std;

class Company: public Observer
{
public:
	Company();
	~Company();

private:

	string				_name;
	string				_CIF;
	Contact				_contact;
	vector <Employee*>	_employees;	
	vector <Jobs>		_jobs;	
	vector <shared_ptr< Department*>> _departments;	
	static string _location;
	vector <unique_ptr <Observer*>>_observers;

public:

	bool addEmployee(Employee* employee);
	
	bool addJob(const Jobs& job);

	bool addDepartments(const Department& department);

	void delete_LastDepartment();

	void display();
	
	static string getLocation();

	int getAverageSalary();

	int maximumSalary();

	shared_ptr<Department*>  getLastDepartment();

	void notifyObservers(const string& message);

	void attachObserver(unique_ptr<Observer*> observer);

	void detachObserver(Observer* observer);

	void update(const string& message);

	void sortEmployeesByTasks();

	void sortDepartmentsByTasks();

	void getAverageNumberOfTasks();


};
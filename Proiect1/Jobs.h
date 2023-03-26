#pragma once
#include "String.h"
using namespace std;

class Jobs
{ 
public:


private:
	String      _job_title;
	int         _min_salary;
	int         _max_salary;

public:
    
	Jobs();

	Jobs(String job_title, int min_salary, int max_salary);

	~Jobs();

	void set_Min_salary(int min_salary);

	int get_Min_salary();

	void set_Max_salary(int max_salary);

	int get_Max_salary();

	void set_Job_title(const String & job_title);

	String& get_Job_title();

	friend ostream& operator << (ostream& out, const Jobs& job);

	friend istream& operator >> (istream& in, Jobs& job);
};


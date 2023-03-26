#include "Job_history.h"

Job_history::Job_history(String start_date, String end_date)
{
	_start_date = start_date;
	_end_date = end_date;
}

Job_history::Job_history()
{
	_start_date = "never";
	_end_date = "never";
}

Job_history::~Job_history()
{
	_start_date ="never";
	_end_date = "never";

}
void Job_history::set_Start_date(String start_date)
{
	_start_date = start_date;
}

String Job_history::get_Start_date()
{
	return _start_date;
}

void Job_history::set_End_date(String end_date)
{
	_end_date = end_date;
}

String Job_history::get_End_date()
{
	return _end_date;
}

ostream& operator << (ostream& out, const Job_history& job_history)
{
	out << job_history._start_date << "-" << job_history._end_date;
	return out;
}

istream& operator >> (istream& in, Job_history& job_history)
{
	cout << "Enter job history:" << endl;
	cout << "Start date:";
	in >> job_history._start_date;
	cout << "End date:";
	in>>job_history._end_date;
	return in;
}
#include "Job_history.h"

Job_history::Job_history(string start_date, string end_date)
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
void Job_history::set_Start_date(string start_date)
{
	_start_date = start_date;
}

string Job_history::get_Start_date()
{
	return _start_date;
}

void Job_history::set_End_date(string end_date)
{
	_end_date = end_date;
}

string Job_history::get_End_date()
{
	return _end_date;
}
void Job_history::_cout(ostream& out)
{
	out << _start_date << "-" <<_end_date;
}

void Job_history::_cin(istream& in)
{
	cout << "Enter job history:" << endl;
	cout << "Start date:";
	in >>_start_date;
	cout << "End date:";
	in>>_end_date;

}
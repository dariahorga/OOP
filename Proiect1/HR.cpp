#include "HR.h"

HR::HR()
{

}
HR::~HR()
{

}
void HR::display_details() const
{
	cout << "HR department: " << endl;
	cout << "In HR at Microsoft, our mission is to empower the people who are empowering every person and every organization on the planet to achieve more.We believe in the transformative power of engaging many different perspectives.";
}
HR::HR(int department_id, int budget, int number_employees,string mail, string adress, string phone_number, string start_date, string end_date) : Department( mail, adress, phone_number, start_date, end_date), _department_id(department_id),_budget(budget),_number_employees(number_employees)
{}
int HR::calculate_tax() const
{
	return _budget * 0.1; // 10% rate tax
}
int HR::get_Budget() const
{
	return _budget;
}
Department* HR::clone() const
{
	HR* hr = new HR();
	*hr = *this;
	return hr;
}

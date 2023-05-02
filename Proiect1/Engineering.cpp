#include "Engineering.h"

Engineering::~Engineering()
{

}
Engineering::Engineering()
{

}
void Engineering::display_details() const
{
	cout << "Engineering department: " << endl;
	cout << "As the cornerstone of our company, Microsoft Engineers always aspire to be the best in the industry. Whether coding, building, hacking, designing, or testing, they consistently put their passion and energy into delivering world-class products.";
}
Engineering::Engineering(int department_id, int budget, int number_employees, string mail, string adress, string phone_number, string start_date, string end_date) : Department(mail, adress, phone_number, start_date, end_date), _department_id(department_id), _budget(budget), _number_employees(number_employees)
{}
int Engineering::calculate_tax() const
{
	return _budget * 0.1; // 10% rate tax
}
int Engineering::get_Budget() const
{
	return _budget;
}
Department* Engineering::clone() const
{
	Engineering* engineering = new Engineering();
	*engineering = *this;
	return engineering;
}

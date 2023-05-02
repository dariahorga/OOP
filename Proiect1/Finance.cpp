#include "Finance.h"
Finance::Finance()
{

}
Finance::~Finance()
{

}
void Finance::display_details() const
{
	cout << "Finance department: "<<endl;
	cout << "The Finance team partners company-wide with organizations to deliver financial expertise that drives high business impact. Whether analyzing the economics of a product, conducting in-country performance management, or diving into technical accounting and tax intricacies, they enable profitability and long-term growth for the company.";
}
Finance::Finance(int department_id, int budget, int number_employees, string mail, string adress, string phone_number, string start_date, string end_date) : Department( mail, adress, phone_number, start_date, end_date), _budget(budget), _number_employees(number_employees), _department_id(department_id)
{}
int Finance::calculate_tax() const
{
	return _budget * 0.1; // 10% rate tax
}
int Finance::get_Budget() const
{
	return _budget;
}
Department* Finance::clone() const
{
	Finance* finance = new Finance();
	*finance = *this;
	return finance;
}


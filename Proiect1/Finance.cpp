#include "Finance.h"
Finance::Finance() :Department("Microsoft_finance@yahoo.com", "unirii nr 45", "0765435678","14.09.2009", " ")
{
    _department_id = 123;
    _budget = 23456;
    _number_employees = 10;
    _number_tasks = 27;

}
Finance::~Finance()
{

}
void Finance::display_details() const
{
	cout << "Finance department: "<<endl;
	cout << "The Finance team partners company-wide with organizations to deliver financial expertise that drives high business impact. Whether analyzing the economics of a product, conducting in-country performance management, or diving into technical accounting and tax intricacies, they enable profitability and long-term growth for the company.";
}
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
Finance* Finance::getInstance()
{
    if (_instance_Finance == nullptr)
    {
        _instance_Finance = new Finance();
        return _instance_Finance;
    }
    else
    {
        return _instance_Finance;
    }
}
string Finance::get_Department_name() const
{
    return "Finance";
}
int Finance::get_number_tasks() const
{
    return _number_tasks;
}
Finance* Finance::_instance_Finance = nullptr;


#include "Engineering.h"

Engineering::Engineering(): Department("Microsoft_engineering@yahoo.com", "sos piepera nr 567", "0769835568", "29.05.2006", " ")
{
    _department_id = 122;
    _budget = 3452689;
    _number_employees = 6;
    _number_tasks = 14;
}
Engineering::~Engineering()
{

}
void Engineering::display_details() const
{
	cout << "Engineering department: " << endl;
	cout << "As the cornerstone of our company, Microsoft Engineers always aspire to be the best in the industry. Whether coding, building, hacking, designing, or testing, they consistently put their passion and energy into delivering world-class products.";
}
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
Engineering* Engineering::getInstance()
{
    if (_instance_Engineering == nullptr)
    {
        _instance_Engineering = new Engineering();
        return _instance_Engineering;
    }
    else
    {
        return _instance_Engineering;
    }
}

string Engineering::get_Department_name() const
{
    return "Engineering";
}
int Engineering::get_number_tasks() const
{
    return _number_tasks;
}

Engineering* Engineering::_instance_Engineering = nullptr;



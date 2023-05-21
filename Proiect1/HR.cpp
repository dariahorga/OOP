#include "HR.h"

HR::HR(): Department("Microsoft.hr@yahoo.com", "sos piepera nr 567", "0784235108", "08.10.2017", " ")
{
    _department_id = 121;
    _budget = 4321;
    _number_employees =3;
    _number_tasks = 19;
}
HR::~HR()
{

}
void HR::display_details() const
{
	cout << "HR department: " << endl;
	cout << "In HR at Microsoft, our mission is to empower the people who are empowering every person and every organization on the planet to achieve more.We believe in the transformative power of engaging many different perspectives.";
}
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
HR* HR::getInstance()
{
    if (_instance_HR == nullptr)
    {
        _instance_HR = new HR();
        return _instance_HR;
    }
    else
    {
        return _instance_HR;
    }
}
string HR::get_Department_name() const
{
    return "HR";
}
int HR::get_number_tasks() const
{
    return _number_tasks;
}
HR* HR::_instance_HR = nullptr;

#include "Department.h"

Department::Department()
{	
}
 Department::~Department()
{
}

Department::Department( string mail, string adress, string phone_number, string start_date, string end_date) :
Contact(mail, adress, phone_number), Job_history(start_date, end_date)
{
}

void Department::display_details() const
{
}
int Department::calculate_tax() const
{
    return 0;
}
Department* Department::operator=(const Department* department) {
    if (this == department) {
        return this;
    }
    
    return this;
}


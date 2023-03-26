#include <iostream>
#include "Company.h"
#include "Jobs.h"
using namespace std;

int main()
{
    Company mycompany;
    mycompany.display();
    cout << endl;

    Jobs job1;
    cin >> job1;
    Jobs job2;
    cin >> job2;
    mycompany.addJob(job1);
    mycompany.addJob(job2);
   

    Employee employee1;
    Contact contact1;
    Job_history history1;
    employee1.set_First_name("Daria");
    employee1.set_Last_name("Horga");
    employee1.set_Employee_id(60380507470);
    employee1.set_Salary(9999);
    employee1.set_Job("developer");

    contact1.set_Phone_number("0753782910");
    contact1.set_Adress("Oituz 92");
    contact1.set_Mail("dariahorga@yahoo.com");
    employee1.set_contact(contact1);

    history1.set_Start_date("15.08.2020");
    history1.set_End_date(" ");
    employee1.set_Job_history(history1);
    cout << endl << endl;
    mycompany.addEmployee(employee1);
    cout << employee1;
    cout << endl << endl;

    Employee employee2;
    Contact contact2;
    Job_history history2;
    cin >> employee2;
    cin >> contact2;
    cin >> history2;
    employee2.set_contact(contact2);
    employee2.set_Job_history(history2);
    mycompany.addEmployee(employee2);
    cout << employee2;
    cout << endl << endl;


    Contact contact3("popescucostel@yahoo.com","strada oituz 789","7654372801");
    Job_history history3("15.09.2019"," ");
    Employee employee3(508090887654,"Popescu","Costel",contact3,"developer", history3,7465);
    mycompany.addEmployee(employee3);
    cout << employee3<<endl;

    cout << endl << "Medium salary of all employees: ";
    int salary=mycompany.getAverageSalary();
    cout << salary << endl << endl;

    cout << "Maximum salary is: ";
    int max = mycompany.maximumSalary();
    cout << max;

    return 0;
}


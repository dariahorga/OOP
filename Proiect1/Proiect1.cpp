#include <iostream>
#include "Company.h"
#include "Jobs.h"
#include "Manager.h"
#include "Finance.h"
#include "HR.h"
#include "Engineering.h"
#include "Developer.h"
#include "Department.h"
#include "Analyst.h"
#include "Invalid_ID_Exception.h"
#include "InvalidNameException.h"
#include <exception>
#include "Evaluation.h"

using namespace std;

int main()
{

    cout << "Apasa tasta 1 pentru a afisa detaliile companiei." << endl;
    cout << "Apasa tasta 2 pentru a crea angajatii companiei, salariul mediu si salariul cel mai mare al unui angajat din comapanie." << endl;
    cout << "Apasa tasta 3 pentru a crea joburile companiei, care sunt de tip manager, developer si analyst,apoi afiseaza detalii despre fiecare."<<endl;
    cout << "Apasa tasta 4 pentru a crea departamente si afisa descrierea lor,bugetul si taxa." << endl;
    cout << "Apasa tasta 5 pentru a arunca o analiza a firmei." << endl;
    
    int x; 
    cout << "Tasta:";
    cin >> x;
    string p;
    getline(cin,p);
    cout << endl;

    Company mycompany;
    if (x == 1)
    {
        mycompany.display();
        unique_ptr<Observer*> observer1;
        unique_ptr<Observer*> observer2;
        mycompany.attachObserver(move(observer1));
        mycompany.attachObserver(move(observer2));

        cout<<mycompany.getLocation();
        cout << endl;
    }
   
    if (x == 2)
    {
        Employee employee1;
        Contact contact1;
        Job_history history1;
        employee1.set_First_name("Daria");
        employee1.set_Last_name("i");
        employee1.set_Employee_id(60380507);
        employee1.set_Salary(9999);
        employee1.set_Job("developer");

        contact1.set_Phone_number("0753782910");
        contact1.set_Adress("strada deleni 78");
        contact1.set_Mail("dariahorga@yahoo.com");
        employee1.set_contact(contact1);

        history1.set_Start_date("15.08.2020");
        history1.set_End_date(" ");
        employee1.set_Job_history(history1);
        employee1.set_Department_id(123);
        employee1.set_number_tasks(10);
        cout << endl << endl;
        bool verify1 = false;
        while (verify1 == false)
        {
            try
            {
                verify1=mycompany.addEmployee(&employee1);
                cout << employee1;
                cout << endl << endl;
            }
            catch (const Invalid_ID_Exception& e) {
                cerr << "Error adding employee: " << e.getMessage() << endl;
                cout << "Please enter a different ID for the employee: ";
                int x;
                cin >> x;
                employee1.set_Employee_id(x);
            }
            catch (const InvalidNameException& e) {
                cerr << "Error adding employee: " << e.getMessage() << endl;
                cout << "Please enter a different last_name for the employee: ";
                string x;
                cin >> x;
                employee1.set_Last_name(x);
            }
            catch (const out_of_range& e) {
                cerr << "Error adding employee: " << e.what() << endl;
            }

        }
        Employee employee2;
        Contact contact2;
        Job_history history2;
        cin >> employee2;
        cin >> contact2;
        cin >> history2;
        employee2.set_contact(contact2);
        employee2.set_Job_history(history2);
        bool verify2 = false;
        while (verify2 == false)
        {
            try
            {
                verify2=mycompany.addEmployee(&employee2);
                cout << employee2;
                cout << endl << endl;
            }
            catch (const Invalid_ID_Exception& e) {
                cerr << "Error adding employee: " << e.getMessage() << endl;
                cout << "Please enter a different ID for the employee: ";
                int x;
                cin >> x;
                employee2.set_Employee_id(x);
            }
            catch (const InvalidNameException& e) {
                cerr << "Error adding employee: " << e.getMessage() << endl;
                cout << "Please enter a different last_name for the employee: ";
                string x;
                cin >> x;
                employee2.set_Last_name(x);
            }
            catch (const out_of_range& e) {
                cerr << "Error adding employee: " << e.what() << endl;
            }
        }

        Contact contact3("popescucostel@yahoo.com", "strada viitorului nr 90", "0776543290");
        Job_history history3("15.09.2019", " ");
        Employee employee3(50809088, "Popescu", "Costel", contact3, history3,"developer", 7465,122,8);
        bool verify3 = false;
        while (verify3 == false)
        {
            try
            {
                verify3=mycompany.addEmployee(&employee3);
                cout << employee3;
                cout << endl << endl;
            }
            catch (const Invalid_ID_Exception& e) {
                cerr << "Error adding employee: " << e.getMessage() << endl;
                cout << "Please enter a different ID for the employee: ";
                int x;
                cin >> x;
                employee3.set_Employee_id(x);
            }
            catch (const InvalidNameException& e) {
                cerr << "Error adding employee: " << e.getMessage() << endl;
                cout << "Please enter a different last_name for the employee: ";
                string x;
                cin >> x;
                employee3.set_Last_name(x);
            }
            catch (const exception& e) {
                cerr << "Error adding employee: " << e.what() << endl;
            }
        }
    }
    
    if (x == 2)
    {
        cout << endl << "Medium salary of all employees: ";
        int salary = mycompany.getAverageSalary();
        cout << salary << endl << endl;
    }

    if (x == 2)
    {
        cout << "Maximum salary is: ";
        int max = mycompany.maximumSalary();
        cout << max;
    }

    if (x == 3)
    {
        Jobs* manager = Manager::getInstance(); 
        Jobs* developer = Developer::getInstance(); 
        Jobs* analyst = Analyst::getInstance();

        bool verify4 = false;
        int count1 = 1;
        Jobs* job = manager;
        while (verify4 == false)
        {
            try {
                verify4 = mycompany.addJob(*job);
                cout << *job;
                cout << endl;
            }
            catch (const InvalidNameException& e) {
                try {
                    if (count1 >= 3)
                    {
                        throw runtime_error("Exceeded maximum number of attempts to enter job title.");
                    }
                }
                catch (runtime_error& e)
                {
                    cerr << "Error: " << e.what() << endl;
                }
                cerr << "Error adding job title: " << e.getMessage() << endl;
                cout << "Please enter a different job title. " << endl;
                cout << "Attention! You only have 3 tries." << endl;
                cout << "New job title: ";
                count1++;
                string x;
                getline(cin, x);
                job->set_Job_title(x);

            }
            catch (exception& e) {
                cerr << "Error: " << e.what() << endl;
                break;
            }
        }

        bool verify5 = false;
        int count2 = 1;
        job = developer;
        while (verify5 == false)
        {
            try {
                verify5 = mycompany.addJob(*job);
                cout << *job;
                cout << endl;
            }
            catch (const InvalidNameException& e) {
                try {
                    if (count2 >= 3)
                    {
                        throw runtime_error("Exceeded maximum number of attempts to enter job title.");
                    }
                }
                catch (runtime_error& e)
                {
                    cerr << "Error: " << e.what() << endl;
                    break;
                }
                cerr << "Error adding job title: " << e.getMessage() << endl;
                cout << "Please enter a different job title. " << endl;
                cout << "Attention! You only have 3 tries." << endl;
                cout << "New job title: ";
                count2++;
                string x;
                getline(cin, x);
                job->set_Job_title(x);

            }
            catch (exception& e) {
                cerr << "Error: " << e.what() << endl;
            }
        }

        bool verify6 = false;
        int count3 = 1;
        job = analyst;
        while (verify6 == false)
        {
            try {
                verify6 = mycompany.addJob(*job);
                cout << *job;
                cout << endl;
            }
            catch (const InvalidNameException& e) {
                try {
                    if (count3 >= 3)
                    {
                        throw runtime_error("Exceeded maximum number of attempts to enter job title.");
                    }
                }
                catch (runtime_error& e)
                {
                    cerr << "Error: " << e.what() << endl;
                    break;
                }
                cerr << "Error adding job title: " << e.getMessage() << endl;
                cout << "Please enter a different job title. " << endl;
                cout << "Attention! You only have 3 tries." << endl;
                cout << "New job title: ";
                count3++;
                string x;
                getline(cin, x);
                job->set_Job_title(x);

            }
            catch (exception& e) {
                cerr << "Error: " << e.what() << endl;
            }
        }
    }

    if (x == 4)
    {
        Department* financeDept = Finance::getInstance();
        Department* engineeringDept = Engineering::getInstance(); 
        Department* hrDept = HR::getInstance();

        Department* department = financeDept;
        try {
            mycompany.addDepartments(*department);
            Finance* financeDepartment = dynamic_cast<Finance*>(department);
            financeDepartment->display_details();
            cout << endl;
            cout << "The budget is: ";
            cout << department->get_Budget();
            cout << endl;
            cout << "The tax rate is: ";
            cout << department->calculate_tax();
            cout << endl;
        }
        catch (exception& e) {
            cerr << "Error: " << e.what() << endl;
            cerr << "Deleting last department from the array..." << endl;
            mycompany.delete_LastDepartment();
            cout << "Adding new department..." << endl;
            mycompany.addDepartments(*financeDept);
        }

        department = hrDept;
        try {
            mycompany.addDepartments(*department);
            department->display_details();
            cout << endl;
            cout << "The budget is: ";
            cout << department->get_Budget();
            cout << endl;
            cout << "The tax rate is: ";
            cout << department->calculate_tax();
            cout << endl;
        }
        catch (exception& e) {
            cerr << "Error: " << e.what() << endl;
            cerr << "Deleting last department from the array..." << endl;
            mycompany.delete_LastDepartment();
            cout << "Adding new department..." << endl;
            mycompany.addDepartments(*hrDept);
        }

        department = engineeringDept;
        Engineering* engineeringDepartment = dynamic_cast<Engineering*>(department);
        if (engineeringDepartment) {
            try {
                mycompany.addDepartments(*engineeringDepartment);
                engineeringDepartment->display_details();
                cout << endl;
                cout << "The budget is: ";
                cout << engineeringDepartment->get_Budget();
                cout << endl;
                cout << "The tax rate is: ";
                cout << engineeringDepartment->calculate_tax();
                cout << endl;
            }
            catch (exception& e) {
                cerr << "Error: " << e.what() << endl;
                cerr << "Deleting last department from the array..." << endl;
                mycompany.delete_LastDepartment();
                cout << "Adding new department..." << endl;
                mycompany.addDepartments(*engineeringDepartment);
            }
        }
    }

    if (x == 5)
    {
        mycompany.sortEmployeesByTasks();
        mycompany.sortDepartmentsByTasks();
        mycompany.getAverageNumberOfTasks();


    }
    return 0;
}


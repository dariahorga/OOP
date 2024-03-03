# My Company - Human Resources Management

## Overview

My Company is a project aimed at managing human resources within an organization. It provides functionalities for handling employee data, job positions, departments, and more.

## Implemented Classes

- **Company class**: Manages information about the company such as name, VAT number (CIF), contact details, number of employees, number of job positions, and maintains vectors for storing employees and their respective job positions.
- **Employee class**: Represents an employee with attributes such as ID, full name, contact details, salary, job position, date of employment, and contains an object of type Contact and Jobs.
- **Contact class**: Stores contact information including address, email, and phone number.
- **Jobs class**: Represents a job position with attributes such as minimum and maximum salary.
- **Job_history class**: Tracks the employment history of an employee, including the date of hiring and resignation.
- Inherited classes such as Developer, Manager, and Analyst from Jobs.
- Inherited classes such as HR, Engineering, and Finance from Departments.
- Interfaces: I_IO interface with methods for input and output.
- Exceptions: Invalid_ID_exception, InvalidNameException.

## Functionalities

- Input from keyboard to create Employee and Jobs objects and add them to corresponding vectors.
- Displaying detailed information about the company, including employees, location, and contact details.
- Calculating the average salary of employees in the company.
- Displaying the highest salary in the company.
- Creating and describing departments with their budget and tax.
- Throwing exceptions for duplicate IDs, incorrect names, or exceeding the maximum number of departments/jobs/employees.



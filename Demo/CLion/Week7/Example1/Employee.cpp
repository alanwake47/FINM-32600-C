#include "Employee.h"

#include <iostream>

Employee::Employee(string name, string email, string job)
	: Person(name, email), 
	job_(job)
{
	name_;
}

string Employee::GetJob()
{
	return job_;
}
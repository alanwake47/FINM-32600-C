#include "Student.h"

#include <iostream>
using std::cout;
using std::endl;

Student::Student(string name, string email, string major)
	: Person(name, email), 
	major_(major)
{
	//cout << "creating a student " << name_ << ", " << email_ << ", " << major_ << endl;
}

string Student::GetMajor()
{
	return major_;
}
#pragma once

#include <string>
using std::string;

class Person
{
public:
	Person(string name, string email);
	string GetName();
	string GetEmail();

protected:
	string name_;
	string email_;
};
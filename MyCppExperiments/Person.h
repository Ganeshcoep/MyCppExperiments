#pragma once

#include <string>
using std::string;

class Person
{
private:
	string firstName;
	string lastName;
	int height;

public:
	Person() = default;
	Person(const string & fname, const string& lname);
	virtual ~Person();

	string getFirstName();
};


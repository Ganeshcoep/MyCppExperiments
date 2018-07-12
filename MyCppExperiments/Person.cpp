#include "Person.h"

#include<iostream>
#include<string>

using std::cout;
using std::endl;
//using std::string; //defined in the header file so no need here?

Person::Person(const string & fname, const string& lname):firstName(fname), lastName(lname)
{
}

Person::~Person()
{
	cout << "Desctructor got called" << endl;;
}

string Person::getFirstName()
{
	return firstName;
}

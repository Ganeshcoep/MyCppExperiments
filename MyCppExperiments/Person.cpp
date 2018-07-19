#include "Person.h"

#include<iostream>
#include<string>

using std::cout;
using std::endl;
//using std::string; //defined in the header file so no need here?

Person::Person(const string & fname, const string& lname, const int& ht):firstName(fname), lastName(lname), height(ht)
{
}

Person::~Person()
{
	cout << "Desctructor got called" << endl;;
}

string Person::getFullName() const
{
	return getFirstName() + " " + getLastName();
}

bool Person::operator<(const Person & p)
{
	return height < p.getHeight();
}

bool Person::operator<(const int & ht)
{
	return height < ht;
}

bool operator<(const float&f, const Person& p)
{
	cout << "float operator < overloaded got called" << endl;
	return f < p.height;
}

bool operator<(const int & ht, const Person & p)
{
	return ht < p.getHeight();
}

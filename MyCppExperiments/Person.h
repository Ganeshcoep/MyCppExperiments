#pragma once

#include <string>
using std::string;

class Person
{
private:
	string firstName;
	string lastName;
	int height;

	friend bool operator<(const float&f, const Person& p);

public:
	Person() = default;
	Person(const string & fname, const string& lname, const int& ht);
	virtual ~Person();

	inline string getFirstName() const { return firstName; };
	inline string getLastName() const { return lastName; };	
	inline int getHeight() const { return height; };
	string getFullName() const;

	bool operator<(const Person& p);
	bool operator<(const int& hti);
};

bool operator<(const int& ht, const Person& p);
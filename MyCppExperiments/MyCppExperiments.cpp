// MyCppExperiments.cpp : Defines the entry point for the console application.
//
#include "Person.h"
#include<iostream>

using std::cout;
using std::endl;

int main()
{
	Person p1("ganesh", "salvi");
	Person p2;
	cout << p1.getFirstName()<<endl;
    return 0;
}

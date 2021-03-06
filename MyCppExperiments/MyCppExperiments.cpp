// MyCppExperiments.cpp : Defines the entry point for the console application.
//
#include "Person.h"
#include<iostream>

using std::cout;
using std::endl;

int main()
{
	Person p1("G", "S", 6);
	Person p2("K", "S", 5);
	cout << p1.getFullName()<<endl;
	cout << p2.getFullName() << endl;

	//operator overloading
	cout<< (p1 < p2) <<endl;
	cout << (p1 < 4) << endl;
	cout << (2 < p2) << endl;
	cout << (2.0f < p2) << endl;
	
    return 0;
}

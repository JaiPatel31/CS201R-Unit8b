#include "Person.h"

Person::Person() {
	type = 'P';
	lname = " ";
	fname = " ";
	age = 0;
	Person::totalPerson++;
}

Person::Person(string l, string f, int a) {
	type = 'P';
	lname = l;
	fname = f;
	age = a;
	Person::totalPerson++;
}

void Person::print() {
	cout << "Person Name: " << fname << " " << lname << endl;
	cout << "Age:  " << age << endl << endl;
}
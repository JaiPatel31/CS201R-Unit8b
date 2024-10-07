#include "Student.h"

Student::Student() : Person(){
	gpa = 0.0;
}

Student::Student(char t, string l, string f, int a, float g) : Person(t, l , f , a){
	gpa = g;
}

void Student::print(): Person(){
	cout << type << setw(11) << setw(17) << lname << setw(8) << fname << setw(18) << age <<setw(38)<< gpa << endl;
}
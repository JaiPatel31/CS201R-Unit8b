#pragma once
#include "Person.h"

//UPDATE: make student a derived class of person class
class Student {
private:
	float gpa;

public:
	//constructors: default
	Student();

	//constructor: overloaded - create 
	Student(string l, string f, int a, float g);

	//ADD accessor & mutator for gpa

	void print();
	static int totalStudent;
};

#include "securityStudent.h"
#include <string>	
#include <iostream>

using namespace std;

SecurityStudent::SecurityStudent(vector <string>* studentDataVect)
	: Student(studentDataVect) {};

Degree SecurityStudent::getDegreeType() const {
	return degreeType;
}

void SecurityStudent::printStudentData() {
	cout << "First Name : " << getFirstName << "\t";
	cout << "Last Name : " << getLastName << "\t";
	cout << "Age : " << getStudentAge << "\t";
	cout << "daysInCourse : {" << getDaysToCompleteOne << ", " << getDaysToCompleteTwo << ", " << getDaysToCompleteThree << "}\t";
	cout << "Degree Program : " << getDegreeProgram << "." << endl;
}
#include "softwareStudent.h"
#include <string>	
#include <iostream>

using namespace std;

SoftwareStudent::SoftwareStudent(vector <string>* studentDataVect)
	: Student(studentDataVect) {};

Degree SoftwareStudent::getDegreeType() const {
	return degreeType;
}

void SoftwareStudent::printStudentData() {
	cout << "First Name : " << getFirstName << "\t";
	cout << "Last Name : " << getLastName << "\t";
	cout << "Age : " << getStudentAge << "\t";
	cout << "daysInCourse : {" << getDaysToCompleteOne << ", " << getDaysToCompleteTwo << ", " << getDaysToCompleteThree << "}\t";
	cout << "Degree Program : " << getDegreeProgram << "." << endl;
}
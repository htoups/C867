#include "networkStudent.h"
#include <string>	
#include <iostream>

using namespace std;

NetworkStudent::NetworkStudent(vector <string>* studentDataVect)
	: Student(studentDataVect) {};

Degree NetworkStudent::getDegreeType() const {
	return degreeType;
}

void NetworkStudent::printStudentData() {
	cout << "First Name : " << getFirstName << "\t";
	cout << "Last Name : " << getLastName << "\t";
	cout << "Age : " << getStudentAge << "\t";
	cout << "daysInCourse : {" << getDaysToCompleteOne << ", " << getDaysToCompleteTwo << ", " << getDaysToCompleteThree << "}\t";
	cout << "Degree Program : " << getDegreeProgram << "." << endl;
}
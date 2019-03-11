#include "student.h"
#include <vector>
#include <string>

using namespace std;

Student::Student(vector <string>* studentDataVect) { //constructor

	studentID = studentDataVect->at(0);
	firstName = studentDataVect->at(1);
	lastName = studentDataVect->at(2);
	emailAddress = studentDataVect->at(3);
	studentAge = studentDataVect->at(4); //strings need to be ints convert with "atoi" solution
	daysToCompleteOne = studentDataVect->at(5);
	daysToCompleteTwo = studentDataVect->at(6);
	daysToCompleteThree = studentDataVect->at(7);
}


void Student::setStudentID(string newStudentId) {
	studentID = newStudentId;
}
void Student::setFirstName(string newFirstName) {
	firstName = newFirstName;
}
void Student::setLastName(string newLastName) {
	lastName = newLastName;
}
void Student::setEmailAddress(string newEmailAddress) {
	emailAddress = newEmailAddress;
}
void Student::setStudentAge(int newStudentAge) {
	studentAge = newStudentAge;
}
void Student::setDaysToCompleteOne(int newDaysToCompleteOne) {
	daysToCompleteOne = newDaysToCompleteOne;
}
void Student::setDaysToCompleteTwo(int newDaysToCompleteTwo) {
	daysToCompleteTwo = newDaysToCompleteTwo;
}
void Student::setDaysToCompleteThree(int newDaysToCompleteThree) {
	daysToCompleteThree = newDaysToCompleteThree;
}


string Student::getStudentID() const {
	return studentID;
}
string Student::getFirstName() const {
	return firstName;
}
string Student::getLastName() const {
	return lastName;
}
string Student::getEmailAddress() const {
	return emailAddress;
}
string Student::getStudentAge() const {
	return studentAge;
}
string Student::getDaysToCompleteOne() const {
	return daysToCompleteOne;
}
string Student::getDaysToCompleteTwo() const {
	return daysToCompleteTwo;
}
string Student::getDaysToCompleteThree() const {
	return daysToCompleteThree;
}

void Student::printStudentData(string studentID) {
}

string Student::getDegreeProgram() {
}


Student::~Student() {
	//delete student objects?
}


//Degree Types in Subclasses only??

//string Student::
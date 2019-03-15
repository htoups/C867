#include "roster.h"
#include <vector>
#include <iostream>
#include<string>
#include "student.h"
#include "degree.h"
#include "networkStudent.h"
#include "securityStudent.h"
#include "softwareStudent.h"

using namespace std;

Roster::Roster() {

	int studentRosterLength = studentData.size();
	

	for (int i = 0; i < studentRosterLength; ++i)
	{
		string currentStudent = studentData.at(i);

		//for loop

		vector<string> studentDataVect;

		int start = 0;
		int end = currentStudent.find(',');

		while (end != string::npos)
		{
			studentDataVect.push_back(currentStudent.substr(start, end - start));
			start = ++end;
			end = currentStudent.find(',', start);

			if (end == string::npos) {
				studentDataVect.push_back(currentStudent.substr(start, currentStudent.length()));
			}
		}

		//have to fix that 
		classRosterArray.push_back(studentObjCreate(studentDataVect));
	}
}

//define the functions

//add
void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree degree) {
	vector<string> localStudentDataVect;
	localStudentDataVect.push_back(studentID);
	localStudentDataVect.push_back(firstName);
	localStudentDataVect.push_back(lastName);
	localStudentDataVect.push_back(emailAddress);
	localStudentDataVect.push_back(to_string(age));
	localStudentDataVect.push_back(to_string(daysInCourse1));
	localStudentDataVect.push_back(to_string(daysInCourse2));
	localStudentDataVect.push_back(to_string(daysInCourse3));
	localStudentDataVect.push_back(to_string(degree));
	classRosterArray.push_back(studentObjCreate(localStudentDataVect));
}

//remove
void Roster::remove(string studentID) {
	int rosterSize = classRosterArray.size();
	for (int i = 0; i < rosterSize; ++i) {
		if (classRosterArray.at(i)->getStudentID == studentID) {
			classRosterArray.erase(classRosterArray.begin() + i);
		}
	}
}

//printAll
void Roster::printAll() {
	int rosterSize = classRosterArray.size();
	for (int i = 0; i < rosterSize; ++i) {
		Student* localStudent = classRosterArray.at(i);
		cout << i + 1 << "\t"; 
		localStudent->printStudentData();
	}
}

//printDaysInCourse
void Roster::printDaysInCourse(string studentID) {
	int rosterSize = classRosterArray.size();
	for (int i = 0; i < rosterSize; ++i) {
		Student* localStudent = classRosterArray.at(i);
		if (localStudent->getStudentID == studentID) {
			return (localStudent->getDaysToCompleteOne + localStudent->getDaysToCompleteTwo + localStudent->getDaysToCompleteThree) / 3;
		}
	}
}

//printInvalidEmails
void Roster::printInvalidEmails() {
	int rosterSize = classRosterArray.size();
	for (int i = 0; i < rosterSize; ++i) {
		if (find " " != string::npos OR find "@" = string::npos OR find "." = string::npos) {
			print();
		}
		//A valid email should include an at sign ('@') and period ('.') and should not include a space (' ').
		//use if, find and ::npos to find requirements
	}
}


//printByDegreeProgram
void Roster::printByDegreeProgram(int degreeProgram) {
	int rosterSize = classRosterArray.size();
	for (int i = 0; rosterSize; ++i) {
		if (Degree(degreeProgram) == classRosterArray.at(i)->getDegreeProgram) {
			classRosterArray.at(i)->printStudentData();
		}
	}
}

//creates Student Objects
Student* Roster::studentObjCreate(vector<string> studentDataVect) {
	string tempStudentData = studentDataVect.at(studentDataVect.size() - 1);

	if (tempStudentData == "NETWORKING")
	{
		return new NetworkStudent(&studentDataVect);
	}
	else if (tempStudentData == "SECURITY")
	{
		return new SecurityStudent(&studentDataVect);
	}
	else if (tempStudentData == "SOFTWARE")
	{
		return new SoftwareStudent(&studentDataVect);
	}
	else
	{
		cout << "BROKEN";
	}
}


//start MAIN

void main() {
	
	//print course title, prog. lang., student ID, name
	cout << "Scripting and Programming - Applications - C867, "; 
	cout << "C++, "; 
	cout << "Student ID: 00870520, "; 
	cout << "Hannah Toups";
	

	/*TOMORROW STEPS []: 

	//instance of Roster Class: classRoster
	Roster roster = Roster();

	//add each student to classRoster
	[] move studentDataArray into main()
			- iterate through it
			- break into its own vector
			- roster.add
	
	//convert pseudocode below
		classRoster.printAll();
		classRoster.printInvalidEmails();
		//loop through classRosterArray and for each element:
		classRoster.printAverageDaysInCourse(/*current_object's student id);
		classRoster.printByDegreeProgram(SOFTWARE);
		classRoster.remove("A3");
		classRoster.remove("A3");
		//expected: the above line should print a message saying such a student with this ID was not found.


	//destructor
	[] ~variable 
	*/
	
	return ;
}


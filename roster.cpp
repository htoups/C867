#include "roster.h"
#include <vector>
#include "student.h"
#include "degree.h"
#include "networkStudent.h"
#include "securityStudent.h"
#include "softwareStudent.h"

using namespace std;

Roster::Roster() {

	int studentRosterLength = studentData.length;
	Student* classRosterArray[5] = {};

	for (int i = 0; i < studentRosterLength; ++i) {
		string currentStudent = studentData[i];
		
		//for loop
		string::size_type k = 0;
		string::size_type j = currentStudent.find(",");

		vector<string>* studentDataVect;


		//splits up lines of student data at comma delimiter
		while (j != string::npos) {
			studentDataVect->push_back(currentStudent.substr(k, j - 1));
			k = ++j;
			j = currentStudent.find(",", j);

			if (j == string::npos) {
				studentDataVect->push_back(currentStudent.substr(k, currentStudent.length));
			}
		}

		switch (studentDataVect->at[studentDataVect->size()-1])

		{
		case NETWORKING: 
			classRosterArray[i] = new NetworkStudent(studentDataVect);
			break;
		case SECURITY:
			classRosterArray[i] = new SecurityStudent(studentDataVect);
			break;
		case SOFTWARE:
			classRosterArray[i] = new SoftwareStudent(studentDataVect);
			break;

	default:
		break;

		}
	}



}
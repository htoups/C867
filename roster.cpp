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

		//switch (studentDataVect.at(studentDataVect.size()-1) replacement
		string tempStudentData = studentDataVect.at(studentDataVect.size() - 1);

		if (tempStudentData == "NETWORKING")
		{
			classRosterList.push_back(new NetworkStudent(&studentDataVect));
		} else if (tempStudentData == "SECURITY")
		{
			classRosterList.push_back(new SecurityStudent(&studentDataVect));
		} else if (tempStudentData == "SOFTWARE")
		{
			classRosterList.push_back(new SoftwareStudent(&studentDataVect));
		} else
		{
			cout << "BROKEN";
		}

	}



}
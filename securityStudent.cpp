#include "securityStudent.h"
#include <string>	

using namespace std;

SecurityStudent::SecurityStudent(vector <string>* studentDataVect)
	: Student(studentDataVect) {};

Degree SecurityStudent::getDegreeType() const {
	return degreeType;
}
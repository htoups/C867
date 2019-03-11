#include "softwareStudent.h"
#include <string>	

using namespace std;

SoftwareStudent::SoftwareStudent(vector <string>* studentDataVect)
	: Student(studentDataVect) {};

Degree SoftwareStudent::getDegreeType() const {
	return degreeType;
}
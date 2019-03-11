#include "networkStudent.h"
#include <string>	

using namespace std;

NetworkStudent::NetworkStudent(vector <string>* studentDataVect)
	: Student(studentDataVect) {};

Degree NetworkStudent::getDegreeType() const {
	return degreeType;
}
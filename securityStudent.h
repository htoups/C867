#ifndef SECURITYSTUDENT
#define SECURITYSTUDENT 

#include "student.h"
#include "degree.h"

class SecurityStudent : public Student {
private:
	const Degree degreeType = SECURITY;

public: 
	Degree getDegreeType() const; 
	SecurityStudent(vector <string>* studentDataVect);
	void printStudentData();
}; 

#endif

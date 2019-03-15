#ifndef NETWORKSTUDENT
#define NETWORKSTUDENT

#include "student.h"
#include "degree.h"

class NetworkStudent : public Student {
private: 
	const Degree degreeType = NETWORKING; 

public: 
	Degree getDegreeType() const;
	NetworkStudent(vector <string>* studentDataVect);
	void printStudentData();
};

#endif 
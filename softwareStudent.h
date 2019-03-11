#ifndef SOFTWARESTUDENT
#define SOFTWARESTUDENT 

#include "student.h"
#include "degree.h"

class SoftwareStudent : public Student {
private:
	const Degree degreeType = SOFTWARE;

public:
	Degree getDegreeType() const;
	SoftwareStudent(vector <string>* studentDataVect);
};

#endif 

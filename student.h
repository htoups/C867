#ifndef STUDENT
#define STUDENT

#include "degree.h"
#include <string>
#include <vector>

using namespace std;

class Student {
private:
	string studentID;
	string firstName;
	string lastName; 
	string emailAddress;
	string studentAge;
	string daysToCompleteOne;
	string daysToCompleteTwo;
	string daysToCompleteThree;

public: 
	void setStudentID(string studentID); //setter
	string getStudentID() const; //getter
	void setFirstName(string firstName);
	string getFirstName() const;
	void setLastName(string lastName);
	string getLastName() const;
	void setEmailAddress(string emailAddress);
	string getEmailAddress() const;
	void setStudentAge(int studentAge);
	string getStudentAge() const;
	void setDaysToCompleteOne(int daysToCompleteOne);
	string getDaysToCompleteOne() const;
	void setDaysToCompleteTwo(int daysToCompleteTwo);
	string getDaysToCompleteTwo() const;
	void setDaysToCompleteThree(int daysToCompleteThree);
	string getDaysToCompleteThree() const;

	Student(vector <string>* studentDataVect); //constructor

	virtual void printStudentData(string studentID); //virtual print for specific student data

	~Student(); //deleting strings?

	virtual string getDegreeProgram(); //leaving implementation empty; declaring in subclass
};

#endif // !STUDENT

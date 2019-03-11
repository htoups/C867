#ifndef ROSTER
#define ROSTER 

#include <string>

using namespace std;

class Roster {
private:
	const string studentData[5] = { "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY", 
		"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
		"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
		"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
		"A5,Hannah,Toups,htoups@wgu.edu 24, 32, 39, 43, SOFTWARE" };

public:
	string GetStudentData();


	Roster();
};

#endif // !ROSTER
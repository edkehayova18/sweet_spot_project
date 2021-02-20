#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

struct GUEST
{
	string guestName;
	string guestSurname;
	string guestEmail;
};

struct STUDENT
{
	string studentName;
	string studentSurname;
	string studentClass;
	string studentEmail;
	string toString()
	{
		string result;
		result += studentName;
		result += ", " + studentSurname;
		result += ", " + studentClass;
		result += ", " + studentEmail;
		return result;
	}
};


struct TEAM
{
	string teamName;
	string teamDescription;
	string teamStudents;
	string teamStudentsStatus;
	string teamDateOfSetUp;
	string studentRole;
};

struct SCHOOL
{
	string schoolName;
	string schoolCity;
	string schoolAddress;
	string schoolTeachers;
	string schoolTeams;
	string schoolStudents;
};

struct TEACHER
{
	string teacherName;
	string teacherSurname;
	TEAM teamInformation;
	string getTeacherTeams()
	{
		string team;
		team = teamInformation.teamName + " : " + teamInformation.teamStudents;
		return team;
	}
};

STUDENT users;
fstream  inFile;
vector<STUDENT> students;

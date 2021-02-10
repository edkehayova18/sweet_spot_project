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
};

struct TEAM
{
	string studentRole;
	string teamName;
	string teamDescription;
	string teamStudents;
	string teamStudentsStatus;
	string teamDateOfSetUp;
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

fstream schoolData;
fstream studentsData;
fstream teachersData;
fstream teamsData;

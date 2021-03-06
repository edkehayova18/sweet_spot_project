#pragma once
#include <windows.h>
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>
#include <ctime>
#include <string>
#include <sstream> 
#include <conio.h>
#include <vector>
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


struct TEAM{
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
	string teamInformation;
	string teacherEmail;
};

ifstream myFile;
string line;
/*STUDENT users;
ifstream  inFile;
string line;
vector<STUDENT> students;
*/
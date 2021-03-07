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

#define RESET   "\033[0m"
#define RED     "\033[1;91m" 
#define YELLOW  "\033[1;93m"  
#define PURPLE  "\033[1;95m"


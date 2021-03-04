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
#include "dataTypes.h"
using namespace std;

int stringToInt(string str) {
	stringstream geek(str);
	int x = 0;
	geek >> x;
	return x;
}

void showAllStudents(ifstream& myFile, string line)
{
	myFile.open("..\\sweet_spot_project\\textFiles\\student.txt");
	if (myFile.is_open())
	{
		while (!myFile.eof())
		{
			getline(myFile, line);
			cout << line << endl;
		}
		myFile.close();
	}
	else
	{
		cout << "Error opening file!";
	}
}

void showAllTeams(ifstream& myFile, string line)
{
	myFile.open("..\\sweet_spot_project\\textFiles\\teams.txt");
	if (myFile.is_open())
	{
		while (!myFile.eof())
		{
			getline(myFile, line);
			cout << line << endl;
		}
		myFile.close();
	}
	else
	{
		cout << "Error opening file!";
	}
}

void showAllTeachers(ifstream& myFile, string line)
{
	myFile.open("..\\sweet_spot_project\\textFiles\\teachers.txt");
	if (myFile.is_open())
	{
		while (!myFile.eof())
		{
			getline(myFile, line);
			cout << line << endl;
		}
		myFile.close();
	}
	else
	{
		cout << "Error opening file!";
	}
}

void showAllGuests(ifstream& myFile, string line)
{
	myFile.open("..\\sweet_spot_project\\textFiles\\guest.txt");
	if (myFile.is_open())
	{
		while (!myFile.eof())
		{
			getline(myFile, line);
			cout << line << endl;
		}
		myFile.close();
	}
	else
	{
		cout << "Error opening file!";
	}
}

void showAllProjects(ifstream& myFile, string line)
{
	myFile.open("..\\sweet_spot_project\\textFiles\\projects.txt");
	if (myFile.is_open())
	{
		while (!myFile.eof())
		{
			getline(myFile, line);
			cout << line << endl;
		}
		myFile.close();
	}
	else
	{
		cout << "Error opening file!";
	}
}

void addStudent(STUDENT& student, ofstream& file) 
{
	cout << "Name:";
	cin >> student.studentName;
	cout << "Surname:";
	cin >> student.studentSurname;
	cout << "Class:";
	cin >> student.studentClass;
	cout << "Email:";
	cin >> student.studentEmail;
	file.open("..\\sweet_spot_project\\textFiles\\student.txt", ios::out | ios::app);
	string line;
	line += "\n" + student.studentName + "," + student.studentSurname + ","  ;
	line += student.studentClass + "," + student.studentEmail ;
	file << "\n";
	file << line;
	file.close();

}
//that function has to fix
void addTeacher(TEACHER& teacher, ofstream& file)
{
	TEAM teamInformation;
	cout << "Name:";
	cin >> teacher.teacherName;
	cout << "Surname:";
	cin >> teacher.teacherSurname;
	cout << "Teacher's Team Information:";
	cin >> teacher.teamInformation;
	file.open("..\\sweet_spot_project\\textFiles\\student.txt", ios::out | ios::app);
	string line;
	line += teacher.teacherName + "," + teacher.teacherSurname + ",";
	line += teacher.teamInformation + "," + teacher.teacherEmail;
	
	file << "\n";
	file << line;
	file.close();

}

void addGuest(GUEST& guest, ofstream& file)
{
	cout << "Name:";
	cin >> guest.guestName;
	cout << "Surname:";
	cin >> guest.guestSurname;
	cout << "Email:";
	cin >> guest.guestEmail;
	file.open("..\\sweet_spot_project\\textFiles\\guest.txt", ios::out | ios::app);
	string line;
	line += "\n" + guest.guestName + "," + guest.guestSurname + ",";
	line +=  guest.guestEmail;
	file << line;
	file.close();
}
//that function has to fix
void createTeam(TEAM& team, ofstream& file)
{
	cout << "Name:";
	cin >> team.teamName;
	cout << "Description:";
	cin >> team.teamDescription;
	cout << "Please, separate the names of the students with comas!" << endl;
	cout << "Students:";
	cin >> team.teamStudents;
	cout << "Status:";
	cin >> team.teamStudentsStatus;
	cout << "Date of set up:";
	cin >> team.teamDateOfSetUp;
	cout << "Please, separate the roles of the students with comas!" << endl;
	cout << "Roles:";
	cin >> team.studentRole;
	string line;
	file.open("..\\sweet_spot_project\\textFiles\\teams.txt", ios::out | ios::app);
	line += "\n" + team.teamName + "\n" + team.teamDescription + "\n";
	line += team.teamStudents + "\n" + team.teamStudentsStatus + "\n";
	line += team.teamDateOfSetUp + "\n" + team.studentRole + "\n";
	file << line;
	file.close();
}


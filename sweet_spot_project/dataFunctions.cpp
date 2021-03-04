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

bool isLetters(string input)
{
	for (int i = 0; i < input.size(); i++)
	{
		int uppercaseChar = toupper(input[i]);
		if (uppercaseChar < 'A' || uppercaseChar > 'Z' || input[0] < 'A' || input[0] > 'Z')
		{
			return false;
		}
	}

	return true;
}

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
	if (isLetters(student.studentName))
	{
		cout << "";
	}
	else
	{
		cout << "Try again!" << endl;
		addStudent(student, file);
	}
	cout << "Surname:";
	cin >> student.studentSurname;
	if (isLetters(student.studentSurname))
	{
		cout << "";
	}
	else
	{
		cout << "Try again!" << endl;
		addStudent(student, file);
	}
	cout << "Class:";
	cin >> student.studentClass;
	cout << "Email:";
	getline(cin, student.studentEmail);
	file.open("..\\sweet_spot_project\\textFiles\\student.txt", ios::out | ios::app);
	string line;
	line += "\n" + student.studentName + "," + student.studentSurname + ","  ;
	line += student.studentClass + "," + student.studentEmail ;
	file << "\n";
	file << line;
	file.close();

}

void addTeacher(TEACHER& teacher, ofstream& file)
{
	TEAM teamInformation;
	cout << "Name:";
	getline(cin, teacher.teacherName);
	if (isLetters(teacher.teacherName))
	{
		cout << "";
	}
	else
	{
		cout << "Try again!" << endl;
		addTeacher(teacher, file);
	}
	cout << "Surname:";
	getline(cin, teacher.teacherSurname);
	if (isLetters(teacher.teacherSurname))
	{
		cout << "";
	}
	else
	{
		cout << "Try again!" << endl;
		addTeacher(teacher, file);
	}
	cout << "Email";
	getline(cin, teacher.teacherEmail);
	cout << "Teacher's Team Information:";
	getline(cin, teacher.teamInformation);
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
	if (isLetters(guest.guestName))
	{
		cout << "";
	}
	else
	{
		cout << "Try again!" << endl;
		addGuest(guest, file);
	}
	cout << "Surname:";
	cin >> guest.guestSurname;
	if (isLetters(guest.guestSurname))
	{
		cout << "";
	}
	else
	{
		cout << "Try again!" << endl;
		addGuest(guest, file);
	}
	cout << "Email:";
	getline(cin, guest.guestEmail);
	file.open("..\\sweet_spot_project\\textFiles\\guest.txt", ios::out | ios::app);
	string line;
	line += "\n" + guest.guestName + "," + guest.guestSurname + ",";
	line +=  guest.guestEmail;
	file << line;
	file.close();
}

void createTeam(TEAM& team, ofstream& file)
{
	cout << "Name:";
	getline(cin, team.teamName);
	if (isLetters(team.teamName))
	{
		cout << "";
	}
	else
	{
		cout << "Try again!" << endl;
		createTeam(team, file);
	}
	cout << "Description:";
	getline(cin, team.teamDescription);
	if (isLetters(team.teamDescription))
	{
		cout << "";
	}
	else
	{
		cout << "Try again!" << endl;
		createTeam(team, file);
	}

	cout << "Please, separate the names of the students with comas!" << endl;
	cout << "Students:";
	getline(cin, team.teamStudents);
	cout << "Status:";
	getline(cin, team.teamStudentsStatus);
	cout << "Date of set up:";
	getline(cin, team.teamDateOfSetUp);
	cout << "Please, separate the roles of the students with comas!" << endl;
	cout << "Roles:";
	getline(cin, team.studentRole);
	string line;
	file.open("..\\sweet_spot_project\\textFiles\\teams.txt", ios::out | ios::app);
	line += "\n" + team.teamName + "\n" + team.teamDescription + "\n";
	line += team.teamStudents + "\n" + team.teamStudentsStatus + "\n";
	line += team.teamDateOfSetUp + "\n" + team.studentRole + "\n";
	file << line;
	file.close();
}


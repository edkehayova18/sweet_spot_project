#pragma once
#include "presentationFunctions.h"
#include "dataTypes.h"
using namespace std;

void countStudents()
{
	int numLines = 0;
	ifstream in("..\\sweet_spot_project\\textFiles\\student.txt");
	string unused;
	while (getline(in, unused))
	{
		++numLines;
	}
	cout << numLines;
	ofstream add;
	add.open("..\\sweet_spot_project\\textFiles\\school.txt", ios::out | ios::app);
	add << "\nStudents: ";
	add << numLines;
	add.close();
}

void countTeachers()
{
	int numLines = 0;
	ifstream in("..\\sweet_spot_project\\textFiles\\teachers.txt");
	string unused;
	while (getline(in, unused))
	{
		++numLines;
	}
	cout << numLines;
	ofstream add;
	add.open("..\\sweet_spot_project\\textFiles\\school.txt", ios::out | ios::app);
	add << "\nStudents: ";
	add << numLines;
	add.close();
}
void countTeams()
{
	int numLines = 0;
	ifstream in("..\\sweet_spot_project\\textFiles\\teachers.txt");
	string unused;
	while (getline(in, unused))
	{
		++numLines;
	}
	cout << numLines;
	ofstream add;
	add.open("..\\sweet_spot_project\\textFiles\\school.txt", ios::out | ios::app);
	add << "\nStudents: ";
	add << numLines;
	add.close();
}



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

void showAllStudents()
{
	ifstream fileForStudents;
	string lineForStudents;
	fileForStudents.open("..\\sweet_spot_project\\textFiles\\student.txt");
	if (fileForStudents.is_open())
	{
		while (!fileForStudents.eof())
		{
			getline(fileForStudents, lineForStudents);
			cout << lineForStudents << endl;
		}
		fileForStudents.close();
	}
	else
	{
		cout << "Error opening file!";
	}
}

void showAllTeams()
{
	ifstream file;
	string lineForTeams;
	file.open("..\\sweet_spot_project\\textFiles\\teams.txt");
	if (file.is_open())
	{
		while (!file.eof())
		{
			getline(file, lineForTeams);
			cout << lineForTeams << endl;
		}
		file.close();
	}
	else
	{
		cout << "Error opening file!";
	}
}

void showAllTeachers()
{
	ifstream fileForTeachers;
	string lineForTeachers;
	fileForTeachers.open("..\\sweet_spot_project\\textFiles\\teachers.txt");
	if (fileForTeachers.is_open())
	{
		while (!fileForTeachers.eof())
		{
			getline(fileForTeachers, lineForTeachers);
			cout << lineForTeachers << endl;
		}
		fileForTeachers.close();
	}
	else
	{
		cout << "Error opening file!";
	}
}

void showAllGuests()
{
	ifstream fileForGuests;
	string lineForGuests;
	fileForGuests.open("..\\sweet_spot_project\\textFiles\\guest.txt");
	if (fileForGuests.is_open())
	{
		while (!fileForGuests.eof())
		{
			getline(fileForGuests, lineForGuests);
			cout << lineForGuests << endl;
		}
		fileForGuests.close();
	}
	else
	{
		cout << "Error opening file!";
	}
}

void showAllProjects()
{
	ifstream fileForProjects;
	string lineForProjects;
	fileForProjects.open("..\\sweet_spot_project\\textFiles\\projects.txt");
	if (fileForProjects.is_open())
	{
		while (!fileForProjects.eof())
		{
			getline(fileForProjects, lineForProjects);
			cout << lineForProjects << endl;
		}
		fileForProjects.close();
	}
	else
	{
		cout << "Error opening file!";
	}
}

void addStudent(STUDENT& student)
{
	ofstream fileForAddingStudent;
	cout << "Name:";
	cin >> student.studentName;
	if (isLetters(student.studentName))
	{
		cout << "";
	}
	else
	{
		cout << "Try again!" << endl;
		addStudent(student);
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
		addStudent(student);
	}
	cout << "Class:";
	cin.ignore();
	getline(cin, student.studentClass);
	cout << "Email:";
	cin.ignore();
	getline(cin, student.studentEmail);
	fileForAddingStudent.open("..\\sweet_spot_project\\textFiles\\student.txt", ios::out | ios::app);
	string line;
	line += "\n" + student.studentName + "," + student.studentSurname + ",";
	line += student.studentClass + "," + student.studentEmail;
	fileForAddingStudent << "\n";
	fileForAddingStudent << line;
	fileForAddingStudent.close();

}

void addTeacher(TEACHER& teacher)
{
	ofstream fileForAddingTeacher;
	TEAM teamInformation;
	cout << "Name:";
	cin.ignore();
	getline(cin, teacher.teacherName);
	if (isLetters(teacher.teacherName))
	{
		cout << "";
	}
	else
	{
		cout << "Try again!" << endl;
		addTeacher(teacher);
	}
	cout << "Surname:";
	cin.ignore();
	getline(cin, teacher.teacherSurname);
	if (isLetters(teacher.teacherSurname))
	{
		cout << "";
	}
	cout << "Email:";
	cin.ignore();
	getline(cin, teacher.teacherEmail);
	cout << "Teacher's Team Information:" << endl;
	cout << "Please write it like this: NameOfTheTeam,Description,StudentsInTheTeam,DateOfSetUp,StudentsRoles" << endl;
	cin.ignore();
	getline(cin, teacher.teamInformation);
	fileForAddingTeacher.open("..\\sweet_spot_project\\textFiles\\teachers.txt", ios::out | ios::app);
	string line;
	line += teacher.teacherName + "," + teacher.teacherSurname + ",";
	line += teacher.teamInformation + "," + teacher.teacherEmail;

	fileForAddingTeacher << "\n";
	fileForAddingTeacher << line;
	fileForAddingTeacher.close();

}

void createTeam(TEAM& team)
{
	ofstream fileForAddingTeams;
	cout << "Name:";
	cin.ignore();
	getline(cin, team.teamName);
	cout << "Description:";
	cin.ignore();
	getline(cin, team.teamDescription);
	cout << "Please, separate the names of the students with comas!" << endl;
	cout << "Students:";
	cin.ignore();
	getline(cin, team.teamStudents);
	cout << "Status:";
	cin.ignore();
	getline(cin, team.teamStudentsStatus);
	cout << "Date of set up:";
	cin.ignore();
	getline(cin, team.teamDateOfSetUp);
	cout << "Please, separate the roles of the students with comas!" << endl;
	cout << "Roles:";
	cin.ignore();
	getline(cin, team.studentRole);
	string line;
	fileForAddingTeams.open("..\\sweet_spot_project\\textFiles\\teams.txt", ios::out | ios::app);
	line += "\n" + team.teamName + "\n" + team.teamDescription + "\n";
	line += team.teamStudents + "\n" + team.teamStudentsStatus + "\n";
	line += team.teamDateOfSetUp + "\n" + team.studentRole + "\n";
	fileForAddingTeams << line;
	fileForAddingTeams.close();
}


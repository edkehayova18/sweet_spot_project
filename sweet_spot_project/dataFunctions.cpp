#pragma once
#include "presentationFunctions.h"
#include "dataTypes.h"
using namespace std;

//count all students in student.txt 
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
	
}

//count all teachers in teachers.txt 
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
	
}

//count all teams in teams.txt 
void countTeams()
{
	int numLines = 0;
	ifstream in("..\\sweet_spot_project\\textFiles\\teams.txt");
	string unused;
	while (getline(in, unused))
	{
		++numLines;
	}
	cout << numLines;
	
}

//check if there are any numbers or does the first letter is in upper case
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

//convert string to int
int stringToInt(string str) {
	stringstream geek(str);
	int x = 0;
	geek >> x;
	return x;
}

//show all students in student.txt
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
			spaces(20);  cout << "_______________________________________________________" << endl;
			this_thread::sleep_for(chrono::milliseconds(500));
			spaces(20); cout << lineForStudents << endl;
		}
		fileForStudents.close();
	}
	else
	{
		cout <<RED<< "Error opening file!"<<RESET;
	}
}

//show all teams in teams.txt
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
			spaces(20);  cout << "_________________________________________________________________________" << endl;
			this_thread::sleep_for(chrono::milliseconds(500));
			spaces(20);cout << lineForTeams << endl;
		}
		file.close();
	}
	else
	{
		cout << "Error opening file!";
	}
}

//show all teachers in teachers.txt
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
			spaces(20);  cout << "_______________________________________________________" << endl;
			this_thread::sleep_for(chrono::milliseconds(500));
			spaces(20);cout << lineForTeachers << endl;
		}
		fileForTeachers.close();
	}
	else
	{
		cout << "Error opening file!";
	}
}

//show all guests in gurst.txt
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
			spaces(20);  cout << "_______________________________________________________" << endl;
			this_thread::sleep_for(chrono::milliseconds(500));
			spaces(20);cout << lineForGuests << endl;
		}
		fileForGuests.close();
	}
	else
	{
		cout << "Error opening file!";
	}
}

//show all projects in project.txt
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
			spaces(20);  cout << "_______________________________________________________" << endl;
			this_thread::sleep_for(chrono::milliseconds(500));
			spaces(20);cout << lineForProjects << endl;
		}
		fileForProjects.close();
	}
	else
	{
		cout << "Error opening file!";
	}
}

//add student in student.txt
void addStudent(STUDENT& student)
{
	ofstream fileForAddingStudent;
	spaces(20); cout << "Name:"; cin >> student.studentName;
	if (isLetters(student.studentName))
	{
		cout << "";
	}
	else
	{
		spaces(20); cout <<RED<< "Try again!" <<RESET<< endl;
		addStudent(student);
	}
	spaces(20); cout << "Surname:"; cin >> student.studentSurname;
	if (isLetters(student.studentSurname))
	{
		cout << "";
	}
	else
	{
		spaces(20); cout <<RED<< "Try again!" <<RESET <<endl;
		addStudent(student);
	}
	spaces(20); cout << "Class:"; cin.ignore(); getline(cin, student.studentClass);
	spaces(20); cout << "Email:"; cin.ignore(); getline(cin, student.studentEmail);
	fileForAddingStudent.open("..\\sweet_spot_project\\textFiles\\student.txt", ios::out | ios::app);
	string line;
	line += "\n" + student.studentName + "," + student.studentSurname + ",";
	line += student.studentClass + "," + student.studentEmail;
	fileForAddingStudent << line;
	fileForAddingStudent.close();

}

//add teacher in teacher.txt
void addTeacher(TEACHER& teacher)
{
	ofstream fileForAddingTeacher;
	TEAM teamInformation;
	spaces(20); cout << "Name:";
	cin.ignore();
	getline(cin, teacher.teacherName);
	if (isLetters(teacher.teacherName))
	{
		cout << "";
	}
	else
	{
		spaces(20);	cout << "Try again!" << endl;
		addTeacher(teacher);
	}
	spaces(20); cout << "Surname:";
	cin.ignore();
	getline(cin, teacher.teacherSurname);
	if (isLetters(teacher.teacherSurname))
	{
		cout << "";
	}
	spaces(20); cout << "Email:";
	cin.ignore();
	getline(cin, teacher.teacherEmail);
	spaces(20); cout << "Teacher's Team Information:" << endl;
	spaces(20); cout <<YELLOW<< "Please write it like this: NameOfTheTeam-StudentsInTheTeam" <<RESET<< endl;
	cin.ignore();
	getline(cin, teacher.teamInformation);
	fileForAddingTeacher.open("..\\sweet_spot_project\\textFiles\\teachers.txt", ios::out | ios::app);
	string line;
	line += "\n" + teacher.teacherName + "," + teacher.teacherSurname + ",";
	line += teacher.teamInformation + "," + teacher.teacherEmail;

	fileForAddingTeacher << line;
	fileForAddingTeacher.close();

}

//create a  team in teams.txt
void createTeam(TEAM& team)
{
	ofstream fileForAddingTeams;
	spaces(20); cout << YELLOW << "            CREATE A TEAM         " << RESET << endl;
	spaces(20); cout << "Name:";
	cin.ignore();
	getline(cin, team.teamName);
	spaces(20); cout << "Description:";
	cin.ignore();
	getline(cin, team.teamDescription);
	spaces(20); cout <<YELLOW<< "Please, separate the names of the students with comas!" << endl;
	spaces(20); cout << "Students:";
	cin.ignore();
	getline(cin, team.teamStudents);
	spaces(20); cout << "Status:";
	cin.ignore();
	getline(cin, team.teamStudentsStatus);
	spaces(20); cout << "Date of set up:";
	cin.ignore();
	getline(cin, team.teamDateOfSetUp);
	spaces(20); cout <<YELLOW<< "Please, separate the roles of the students with comas!" << endl;
	spaces(20); cout << "Roles:";
	cin.ignore();
	getline(cin, team.studentRole);
	string line;
	fileForAddingTeams.open("..\\sweet_spot_project\\textFiles\\teams.txt", ios::out | ios::app);
	line += "\n"+ team.teamName + "," + team.teamDescription + ",";
	line += team.teamStudents + "," + team.teamStudentsStatus + ",";
	line += team.teamDateOfSetUp + "," + team.studentRole;
	fileForAddingTeams << line;
	fileForAddingTeams.close();
}


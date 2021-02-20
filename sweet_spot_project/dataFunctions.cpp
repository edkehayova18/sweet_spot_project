#include <iostream>
#include "dataFunctions.h"
using namespace std;


void saveFiles(vector<STUDENT>& students, fstream& studentSaveFile)
{


    for (int i = 0; i < students.size(); i++)
    {
        studentSaveFile << students[i].toString() << endl;
    }
    cout << "Congratulations your saves have been opened" << endl;
    cout << endl;
}

void newStudent(STUDENT user, fstream& inFile, vector<STUDENT>& students)
{
    int wrongCount = 0;
    cout << "Name: ";
    getline(cin, user.studentName);
    cout << "Surname: ";
    getline(cin, user.studentSurname);
    cout << "Clas: ";
    getline(cin, user.studentClass);
    cout << "Email: ";
    getline(cin, user.studentEmail);
    inFile.open("textFiles\\STUDENT type.txt", ios::out | ios::trunc);
    if (inFile.is_open())
    {
        inFile << user.toString() << endl;
        saveFiles(students, inFile);
        inFile.close();
    }
}

void openSave(vector<STUDENT>& students, fstream& studentSaveFile)
{
    string container;
    while (!studentSaveFile.eof())
    {
        students.push_back(STUDENT());
        getline(studentSaveFile, container, ',');
        students[students.size() - 1].studentName = container;
        getline(studentSaveFile, container, ',');
        students[students.size() - 1].studentSurname = container;
        getline(studentSaveFile, container, ',');
        students[students.size() - 1].studentClass = container;
        getline(studentSaveFile, container, ',');
        students[students.size() - 1].studentEmail = container;
        getline(studentSaveFile, container, '\n');
    }
    students.erase(students.begin() + students.size() - 1);

    cout << "Congratulations your saves have been opened" << endl;
    cout << endl;
}

void showStudents(fstream& inFile, vector<STUDENT>& students)
{
    inFile.open("textFiles\\STUDENT type.txt", ios::out | ios::trunc);
    string line;

    if (inFile.is_open())
    {
        while (getline(inFile, line))
        {
            cout << line << endl;
        }
    }
}

void showStudents(fstream& inFile, vector<STUDENT>& students)
{
    inFile.open("textFiles\\STUDENT type.txt", ios::out | ios::trunc);
    string line;

    if (inFile.is_open())
    {
        while (getline(inFile, line))
        {
            cout << line << endl;
        }
    }
}

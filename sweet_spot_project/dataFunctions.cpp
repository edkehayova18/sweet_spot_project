#include <iostream>
#include "dataFunctions.h"
using namespace std;


void newStudent(STUDENT user)
{
    int wrongCount = 0;
    cout << "Name: ";
    cin.ignore();
    getline(cin, user.studentName);
    cout << "Surname: ";
    getline(cin, user.studentSurname);
    cout << "Clas: ";
    getline(cin, user.studentClass);
    cout << "Email: ";
    getline(cin, user.studentEmail);
    ofstream inFile;
    inFile.open("proba.txt", ios::app);
    inFile << user.studentName << " ,";
    inFile << user.studentSurname << " ,";
    inFile << user.studentClass << " ,";
    inFile << user.studentEmail;
    inFile.close();

}
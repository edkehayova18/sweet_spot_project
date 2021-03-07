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

void countStudents();
void countTeachers();
void countTeams();
bool isLetters(string input);
int stringToInt(string str);
void showAllStudents();
void showAllTeams();
void showAllTeachers();
void showAllProjects();
void showAllGuests();
void addStudent(STUDENT& student);
void createTeam(TEAM& team);
void addTeacher(TEACHER& teacher);
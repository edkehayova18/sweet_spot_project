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
#include "DataLayer/dataTypes.h"
using namespace std;

int stringToInt(string str);
void showAllStudents(ifstream& myFile, string line);
void showAllTeams(ifstream& myFile, string line);
void showAllTeachers(ifstream& myFile, string line);
void showAllProjects(ifstream& myFile, string line);
void showAllGuests(ifstream& myFile, string line);
void addStudent(STUDENT& student, ofstream& file);
void addGuest(GUEST& guest, ofstream& file);




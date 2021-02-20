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

void newStudent(STUDENT user, fstream& inFile);

void saveFiles(vector<STUDENT>& students, fstream& studentSaveFile);

void openSave(vector<STUDENT>& students, fstream& studentSaveFile);




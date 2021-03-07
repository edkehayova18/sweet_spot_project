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
#include <chrono>
#include <thread>
#include <time.h>
#include <stdlib.h>
#include <cctype>
#include "dataTypes.h"
using namespace std;

void spaces(unsigned short int n);
void displayMainMenu();
void displayShowOptions();
void displayAddOptions();
void printSchoolInfo();
void printMenu(STUDENT& student, TEACHER& teacher, GUEST& guest, TEAM& team);
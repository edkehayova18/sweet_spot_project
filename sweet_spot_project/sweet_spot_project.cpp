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
#include "dataFunctions.h"
#include "presentationFunctions.h"
using namespace std;

int main()
{
	STUDENT student;
	TEACHER teacher; 
	GUEST guest; 
	TEAM team;
	displayMenu(student, teacher, guest, team);
}
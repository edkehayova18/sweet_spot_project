#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "presentationFunctions.h"

using namespace std;
void welcome() 
{
    cout << "************************************************************" << endl;
    cout << "*                                                          *" << endl;
    cout << "* Welcome to the biggest failure in our highschool history.*" << endl;
    cout << "*                                                          *" << endl;
    cout << "************************************************************" << endl;

}
void displayMenu() 
{
    int choice = 0;
    welcome();
    while (choice != 3) {
        cout << endl;
        cout << " _________________________________ " << endl;
        cout << "|                                 |" << endl;
        cout << "|         |  MAIN MENU  |         |" << endl;
        cout << "|                                 |" << endl;
        cout << "|  1) Show                        |" << endl;
        cout << "|  2) Create team                 |" << endl;
        cout << "|  3) Add                         |" << endl;
        cout << "|  4) Delete                      |" << endl;
        cout << "|  5) Exit                        |" << endl;
        cout << "|_________________________________|" << endl;
        cout << endl;


        cout << "Enter an option: ";
        choice = readInt();

        while (choice > 3 or choice < 1)
        {
            cout << endl;
            cout << "The number you enter has to be between 1 and 4! Please, try again: ";
            choice = readInt();
        }


        system("cls");

        switch (choice)
        {
        case 1:
			
			cin >> choice;
			switch (choice)
			{
			case 1:
                cout << "1. Show all students" << endl;
                cout << "2. Show all teachers" << endl;
                cout << "3. Show all projects" << endl;
                cout << "4. Show all teams   " << endl;
                cout << "5. Exit             " << endl;
				switch (choice)
				{
				case 1:
                    showAllStudents(myFile, line);
					break;
				case 2:
                    showAllTeachers();
					break;
                case 3:
                    showAllProjects();
                    break;
                case 4:
                    showAllTeams();
                    break;
                case 5:
                    exit(0);
                    break;
				}
            break;

        case 2:
            createTeam();
            break;

        case 3:
            cout << "1. Add student" << endl;
            cout << "2. Add teacher" << endl;
            cout << "3. Add project" << endl;
            cout << "4. Exit             " << endl;
            switch (choice)
            {
            case 1:
                addStudent(myFile, line);
                break;
            case 2:
                addTeacher();
                break;
            case 3:
              
                break;
            case 4:
                exit(0);
                break;
            }
            break;
        case 4:
           //delete team?
            break;
        case 5:
            exit(0);
            break;
        }
    }


}


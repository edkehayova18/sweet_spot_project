#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "dataTypes.h"
#include "dataFunctions.h"
using namespace std;

int readInt(std::istream& input = std::cin, std::ostream& output = std::cout)
{

    int num;

    while (!(input >> num))
    {
        input.clear();
        input.ignore(INT_MAX, '\n');
        output << endl;
        //output << MSG_INVALID_SYMBOL_TRY_AGAIN;
    }

    return num;

}

void welcome()
{
    cout << "************************************************************" << endl;
    cout << "*                                                          *" << endl;
    cout << "* Welcome to the biggest failure in our highschool history.*" << endl;
    cout << "*                                                          *" << endl;
    cout << "************************************************************" << endl;

}
void displayMenu(STUDENT& student, TEACHER& teacher, GUEST& guest, TEAM& team)
{
    int choice = 0;
    welcome();
    while (choice != 5) {
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
        cin >> choice;

        while (choice > 5 || choice < 1)
        {
            cout << endl;
            cout << "The number you enter has to be between 1 and 5! Please, try again: ";
            choice = readInt();
        }


        system("cls");

        switch (choice)
        {
        case 1:
            int showChoice;
            cout << "1. Show all students" << endl;
            cout << "2. Show all teachers" << endl;
            cout << "3. Show all projects" << endl;
            cout << "4. Show all teams   " << endl;
            cout << "5. Exit             " << endl;
            cin >> showChoice;
            switch (showChoice)
            {
            case 1:
                showAllStudents();
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
            createTeam(team);
            break;

        case 3:
            int addChoice;
            cout << "1. Add student" << endl;
            cout << "2. Add teacher" << endl;
            cout << "3. Add project" << endl;
            cout << "4. Exit             " << endl;
            cin >> addChoice;
            switch (addChoice)
            {
            case 1:
                addStudent(student);
                break;
            case 2:
                addTeacher(teacher);
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


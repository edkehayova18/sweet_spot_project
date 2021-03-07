#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <chrono>
#include <thread>
#include <time.h>
#include <stdlib.h>
#include <cctype>
#include "dataTypes.h"
#include "dataFunctions.h"
using namespace std;

void spaces(unsigned short int n) // prints spaces
{
    for (int i = 0; i < n; i++)
    {
        cout << " ";
    }
}

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
    spaces(20); cout <<PURPLE<< "*******************************************************" <<RESET <<endl;
    spaces(20); cout <<YELLOW<< "                          WELCOME                           " <<RESET <<endl;
    spaces(20); cout <<YELLOW<< "                            TO                              " <<RESET<< endl;
    spaces(20); cout <<YELLOW<< "                        SWEET SPOT                          " <<RESET<< endl;
    spaces(20); cout <<PURPLE<< "*******************************************************" <<RESET<< endl;

}
void schoolInfo()
{
    string keepInfoFromFile;
    ifstream file;
    file.open("..\\sweet_spot_project\\textFiles\\school.txt");
    if (file.is_open())
    {
        while (!file.eof())
        {
            getline(file, keepInfoFromFile);
            spaces(20); cout << keepInfoFromFile << endl;
        }
        file.close();
    }
    else
    {
        cout << "Error opening file!";
    }
}
void printSchoolInfo()
{
  
    spaces(20);  cout << "_______________________________________________________" << endl;
    this_thread::sleep_for(chrono::milliseconds(500));
    spaces(20);  cout <<YELLOW<< "||    Here is some information about this school     ||" <<RESET<< endl;
    this_thread::sleep_for(chrono::milliseconds(500));
    schoolInfo();
    spaces(20);  cout << "||     Students: "; countStudents(); cout << "                                  ||" << endl;
    this_thread::sleep_for(chrono::milliseconds(500));
    spaces(20);  cout << "||     Teachers: "; countTeachers(); cout<< "                                  ||" << endl;
    this_thread::sleep_for(chrono::milliseconds(500));
    spaces(20);  cout << "||     Teams: "; countTeams(); cout<< "                                      ||" << endl;
    this_thread::sleep_for(chrono::milliseconds(500));
    spaces(20);  cout << "_______________________________________________________" << endl;
    this_thread::sleep_for(chrono::milliseconds(500));
}
void displayMainMenu()
{
    cout << endl;
    this_thread::sleep_for(chrono::milliseconds(1000));
    spaces(20);  cout <<PURPLE<<   "_______________________________________________________" <<RESET<< endl;
    this_thread::sleep_for(chrono::milliseconds(500));
    spaces(20);  cout <<   "||                                                   ||" << endl;
    this_thread::sleep_for(chrono::milliseconds(500));
    spaces(20);  cout << YELLOW<<  "||                  _____MENU_____                   ||" << RESET<<endl;
    this_thread::sleep_for(chrono::milliseconds(500));
    spaces(20);  cout <<   "||                                                   ||" << endl;
    this_thread::sleep_for(chrono::milliseconds(500));
    spaces(20);  cout <<   "||                    1. Show                        ||" << endl;
    this_thread::sleep_for(chrono::milliseconds(500));
    spaces(20);  cout <<   "||                    2. Create team                 ||" << endl;
    this_thread::sleep_for(chrono::milliseconds(500));
    spaces(20);  cout <<   "||                    3. Add                         ||" << endl;
    this_thread::sleep_for(chrono::milliseconds(500));
    spaces(20);  cout <<   "||                    4. Delete                      ||" << endl;
    this_thread::sleep_for(chrono::milliseconds(500)); 
    spaces(20);  cout <<   "||                    5. Exit                        ||" << endl;
    this_thread::sleep_for(chrono::milliseconds(500));
    spaces(20);  cout << PURPLE<<  "+_____________________________________________________+" <<RESET<< endl;
    this_thread::sleep_for(chrono::milliseconds(500));
    cout << endl;
}

void displayShowOptions()
{
    spaces(20);  cout << "_______________________________________________________" << endl;
    spaces(20);  cout << "                                                       " << endl;
    spaces(20);  cout <<YELLOW<< "                _____Show options____                  " <<RESET<< endl;
    this_thread::sleep_for(chrono::milliseconds(300));
    spaces(20); cout << "                 1. Show all students     " << endl;
    spaces(20); cout << "                 2. Show all teachers     " << endl;
    spaces(20); cout << "                 3. Show all projects     " << endl;
    spaces(20); cout << "                 4. Show all teams        " << endl;
    spaces(20); cout << "                 5. Show school information" << endl;
    spaces(20); cout << "                 6. Back                  " << endl;
    spaces(20);  cout << "_______________________________________________________" << endl;
    this_thread::sleep_for(chrono::milliseconds(300));
}

void displayAddOptions()
{
    spaces(20);  cout << "_______________________________________________________" << endl;
    spaces(20);  cout << "                                                       " << endl;
    spaces(20);  cout << YELLOW"                 _____Add options____                  " <<RESET<< endl;
    this_thread::sleep_for(chrono::milliseconds(300));
    spaces(20); cout << "                  1. Add student" << endl;
    spaces(20); cout << "                  2. Add teacher" << endl;
    spaces(20); cout << "                  4. Back             " << endl;
    spaces(20);  cout << "_______________________________________________________" << endl;
    this_thread::sleep_for(chrono::milliseconds(300));
}

void printMenu(STUDENT& student, TEACHER& teacher, GUEST& guest, TEAM& team)
{
    int choice = 0;
    welcome();
    while (choice != 5) {
        cout << endl;
        displayMainMenu();
        cout << endl;
        spaces(20); cout << "Enter an option: ";
        cin >> choice;

        while (choice > 5 || choice < 1)
        {
            cout << endl;
            cout <<RED<< "The number you enter has to be between 1 and 5! Please, try again: "<<RESET;
            choice = readInt();
        }
        system("cls");
        switch (choice)
        {
        case 1:
            int showChoice;
            displayShowOptions();
            cin >> showChoice;
            system("cls");
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
                printSchoolInfo();
               
            case 6:
                displayMainMenu();
                break;
            }
            break;

        case 2:
            createTeam(team);
            break;

        case 3:
            int addChoice;
            displayAddOptions();
            cin >> addChoice;
            system("cls");
            switch (addChoice)
            {
            case 1:
                addStudent(student);
               
                break;
            case 2:
                addTeacher(teacher);
               
                break;
            case 4:
                displayMainMenu();
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


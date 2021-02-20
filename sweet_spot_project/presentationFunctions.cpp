#include <iostream>
#include "presentationFunctions.h"
#include "dataFunctions.h"
using namespace std;

void spaces(int n)
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
        cout << "invalid";
        output << endl;
    }
    return num;
}

/*
int chooseOption()
{

    int choice;

    spaces(48);
    cout << "1) Return to the Main Menu" << endl;
    spaces(48);
    cout << "2) Exit" << endl << endl;
    cout << "Enter an option: ";

    choice = readInt();

    while (choice < 1 or choice > 2)
    {
        cout << endl;
        choice = readInt();
    }

    system("cls");

    return choice;
}*/

void displayTeacherOptions()
{
    spaces(37); cout << " ___________________________________________" << endl;
    spaces(37); cout << "|                                           |" << endl;
    spaces(37); cout << "|                  TEACHER                  |" << endl;
    spaces(37); cout << "|                                           |" << endl;
    spaces(37); cout << "|               SOME  INFORMATION           |" << endl;
    spaces(37); cout << "|                                           |" << endl;
    spaces(37); cout << "|  1) My teams                              |" << endl;
    spaces(37); cout << "|  2) Students                              |" << endl;
    spaces(37); cout << "|  3) Projects/Events                       |" << endl;
    spaces(37); cout << "|  4) School statistics                     |" << endl;
    spaces(37); cout << "|  5) Exit                                  |" << endl;
    spaces(37); cout << "|___________________________________________|" << endl;

    cout << endl;

    int choice;
    cout << "Enter an option: ";
    choice = readInt();

    while (choice > 5 or choice < 1)
    {
        cout << endl;

        choice = readInt();
    }

    int code[4];

    system("cls");

    switch (choice)
    {
    case 1:
        //1) Show teams and their status
        //1) Create team 
        //2) Edit team
        //3) Delete team
        //4) Return to my profile
        //5) Exit
        break;

    case 2:

        showStudents(inFile, students);
        //2) Show students by classes
        //4) Return to my profile
        //5) Exit
        break;

    case 3:
        //1) Show all projects in the school
        //2) Add new project/event
        //3) Edit project/event
        //4) Delete project/event
        //5) Return to my profile
        //6) Exit
        break;
    case 4:
        //function that shows all statistics in the school 
        //-name,town,address,teachers, students, teams
        break;
    case 5:


        exit(0);
        break;

    }

}

void displayStudentOptions()
{
    spaces(37); cout << " ___________________________________________" << endl;
    spaces(37); cout << "|                                           |" << endl;
    spaces(37); cout << "|                 STUDENTS                  |" << endl;
    spaces(37); cout << "|                                           |" << endl;
    spaces(37); cout << "|            SOME INFORMATION               |" << endl;
    spaces(37); cout << "|                                           |" << endl;
    spaces(37); cout << "|  1) My teams                              |" << endl;
    spaces(37); cout << "|  2) Projects/Events                       |" << endl;
    spaces(37); cout << "|  3) School statistics                     |" << endl;
    spaces(37); cout << "|  4) Return to the Main Menu               |" << endl;
    spaces(37); cout << "|  5) Exit                                  |" << endl;
    spaces(37); cout << "|___________________________________________|" << endl;

    cout << endl;

    int choice;
    cout << "Enter an option: ";
    choice = readInt();

    while (choice > 4 or choice < 1)
    {
        cout << endl;
        cout << "The number you enter has to be between 1 and 4! Please, try again: ";
        choice = readInt();
    }

    system("cls");

    switch (choice)
    {
    case 1:
        //1) Show teams and their status
        //1) Create team 
        //2) Edit team
        //3) Delete team
        //4) Return to my profile
        //5) Exit

        exit(0);
        break;

    case 2:
        //1) Show all projects in the school
        //2) Return to my profile
        //3) Exit

        exit(0);
        break;

    case 3:

        //function that shows all statistics in the school 
        //-name,town,address,teachers, students, teams, avarage progress
        break;

    case 4:

        exit(0);
        break;
    }

}

void displayAdminOptions()
{
    spaces(37); cout << " ___________________________________________" << endl;
    spaces(37); cout << "|                                           |" << endl;
    spaces(37); cout << "|                 PRINCIPAL                 |" << endl;
    spaces(37); cout << "|                                           |" << endl;
    spaces(37); cout << "|            SOME INFORMATION               |" << endl;
    spaces(37); cout << "|  0) Teachers                              |" << endl;
    spaces(37); cout << "|  1) Teams                                 |" << endl;
    spaces(37); cout << "|  2) Students                              |" << endl;
    spaces(37); cout << "|  3) Guests                                |" << endl;
    spaces(37); cout << "|  4) School                                |" << endl;
    spaces(37); cout << "|  5) Events                                |" << endl;
    spaces(37); cout << "|  6) Return to the Main Menu               |" << endl;
    spaces(37); cout << "|  7) Exit                                  |" << endl;
    spaces(37); cout << "|___________________________________________|" << endl;

    cout << endl;
    int choice;
    cout << "Enter an option: ";
    choice = readInt();

    while (choice > 4 or choice < 1)
    {
        cout << endl;
        cout << "The number you enter has to be between 1 and 4! Please, try again: ";
        choice = readInt();
    }

    int code[4];

    system("cls");

    switch (choice)
    {
    case 1:
        //1) Show teams and their status
        //1) Create team 
        //2) Edit team
        //3) Delete team
        //4) Return to my profile
        //5) Exit
        break;

    case 2:
        showStudents(inFile, students);
        //2) Show students by classes
        newStudent(users, inFile, students);
        //4) Remove student
        //5) Return to my profile
        //6) Exit
        break;
    case 3:
        //SAME FOR TEACHERS
        showStudents(inFile, students);
        //2) Show students by classes
        newStudent(users, inFile, students);
        //4) Remove student
        //5) Return to my profile
        //6) Exit
        break;
    case 4:
        //1) Show all guests
        //2) Return to my profile
        //3) Exit    
        break;
    case 5:
        //function that shows all statistics in the school 
       //-name,town,address,teachers, students, teams, avarage progress
        break;
    case 6:
        //1) Show all projects in the school
        //2) Add new project/event
        //3) Edit project/event
        //4) Delete project/event
        //5) Return to my profile
        //6) Exit
        break;

    case 7:

        exit(0);
        break;
    }

}

/*
void displayGreeting()
{
    spaces(42); cout << "▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓" << endl;
    spaces(42); cout << "▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓" << endl;
    spaces(42); cout << "▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓" << endl;
    spaces(42); cout << "▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓" << endl;
    spaces(42); cout << "▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓" << endl;
    spaces(42); cout << "▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓" << endl;
    spaces(42); cout << "▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓" << endl;
    spaces(42); cout << "▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓" << endl;
    spaces(42); cout << "▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓" << endl;
    spaces(42); cout << "▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓" << endl;
    spaces(42); cout << "▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓" << endl;;
}*/



void displayLoginForm()
{
    //greeting
    int choice = 0;
    while (choice != 3) {
        cout << endl;
        spaces(42); cout << " _________________________________" << endl;
        spaces(42); cout << "|                                 |" << endl;
        spaces(42); cout << "|         |    LOGIN      |       |" << endl;
        spaces(42); cout << "|                                 |" << endl;
        spaces(42); cout << "|       1) Login                  |" << endl;
        spaces(42); cout << "|       2) View as guest          |" << endl;
        spaces(42); cout << "|       3) Exit                   |" << endl;
        spaces(42); cout << "|_________________________________|" << endl;
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
            
            // if()login function();
            /*check if user is student admin or teacher*/
            displayMainMenu();
            break;

        case 2:

            displayGuestOptions();
            break;

        case 3:

            exit(0);
            break;


        }
    }

} 
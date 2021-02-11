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

        //1) Show all students 
        //2) Show students by classes
        //3) Add progess
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
        //-name,town,address,teachers, students, teams, avarage progress
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
    spaces(37); cout << "|                                           |" << endl;
    spaces(37); cout << "|  1) Teams                                 |" << endl;
    spaces(37); cout << "|  2) Students                              |" << endl;
    spaces(37); cout << "|  3) Guests                                |" << endl;
    spaces(37); cout << "|  4) School                                |" << endl;
    spaces(37); cout << "|  5) Events                                |" << endl;
    spaces(37); cout << "|  6) Return to the Main Menu               |" << endl;
    spaces(37); cout << "|  7) Exit                                  |" << endl;
    spaces(37); cout << "|___________________________________________|" << endl;

    cout << endl;
    STUDENT user;
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
        //1) Show all students 
        //2) Show students by classes
        newStudent(user);
        //4) Remove student
        //5) Return to my profile
        //6) Exit
        break;

    case 3:
        //1) Show all guests
        //2) Return to my profile
        //3) Exit    
        break;
    case 4:
        //function that shows all statistics in the school 
       //-name,town,address,teachers, students, teams, avarage progress
        break;
    case 5:
        //1) Show all projects in the school
        //2) Add new project/event
        //3) Edit project/event
        //4) Delete project/event
        //5) Return to my profile
        //6) Exit
        break;

    case 6:

        exit(0);
        break;
    }

}

void displayTeamsOptions()
{
    spaces(37); cout << " ___________________________________________" << endl;
    spaces(37); cout << "|                                           |" << endl;
    spaces(37); cout << "|                 STUDENTS                  |" << endl;
    spaces(37); cout << "|                                           |" << endl;
    spaces(37); cout << "|            SOME INFORMATION               |" << endl;
    spaces(37); cout << "|                                           |" << endl;
    spaces(37); cout << "|  1) Task 1: Play with Unrepeatable digits |" << endl;
    spaces(37); cout << "|  2) Task 2: Play with Repeatable digits   |" << endl;
    spaces(37); cout << "|  3) Return to the Main Menu               |" << endl;
    spaces(37); cout << "|  4) Exit                                  |" << endl;
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


        exit(0);
        break;

    case 2:


        exit(0);
        break;

    case 3:

        // displayMainMenu();
        break;

    case 4:

        exit(0);
        break;
    }

}

void displayGuestOptions()
{
    spaces(37); cout << " ___________________________________________" << endl;
    spaces(37); cout << "|                                           |" << endl;
    spaces(37); cout << "|                 STUDENTS                  |" << endl;
    spaces(37); cout << "|                                           |" << endl;
    spaces(37); cout << "|            SOME INFORMATION               |" << endl;
    spaces(37); cout << "|                                           |" << endl;
    spaces(37); cout << "|  1) Task 1: Play with Unrepeatable digits |" << endl;
    spaces(37); cout << "|  2) Task 2: Play with Repeatable digits   |" << endl;
    spaces(37); cout << "|  3) Return to the Main Menu               |" << endl;
    spaces(37); cout << "|  4) Exit                                  |" << endl;
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


        exit(0);
        break;

    case 2:


        exit(0);
        break;

    case 3:

        //  displayMainMenu();
        break;

    case 4:

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

void displayMainMenu()
{

    int choice = 0;

    while (choice != 4) {
        cout << endl;
        spaces(42); cout << " _________________________________" << endl;
        spaces(42); cout << "|                                 |" << endl;
        spaces(42); cout << "|         |  MAIN MENU  |         |" << endl;
        spaces(42); cout << "|                                 |" << endl;
        spaces(42); cout << "|  1) Level 1: Player vs Player   |" << endl;
        spaces(42); cout << "|  2) Level 2: Player vs Computer |" << endl;
        spaces(42); cout << "|  3) Show game description       |" << endl;
        spaces(42); cout << "|  4) Exit                        |" << endl;
        spaces(42); cout << "|_________________________________|" << endl;
        cout << endl;
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

            displayStudentOptions();
            break;

        case 2:

            displayTeacherOptions();
            break;

        case 3:

            displayAdminOptions();
            break;

        case 4:

            displayTeamsOptions();
            break;

        case 5:

            displayGuestOptions();
            break;

        case 6:

            exit(0);
            break;
        }
    }
}


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

            // login function();
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
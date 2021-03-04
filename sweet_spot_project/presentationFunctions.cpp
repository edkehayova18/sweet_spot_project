#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "presentationFunctions.h"
using namespace std;

void menu1() {
	cout << "Menu1" << endl;
}

void menu2() {
	cout << "Menu2" << endl;
}

void menu3() {
	cout << "Menu3" << endl;
}
void menu4(int a) {
	cout << "Menu4: " << a << endl;
}
void displayMainMenu(vector<MENU_ITEM>& items) {
	for (size_t i = 0; i < items.size(); i++)
	{
		cout << items[i].letter
			<< ". " << items[i].text << endl;
	}
}

void handleUserChoice(vector<MENU_ITEM>& items) {
	char choice;
	cout << "Choose an option:";
	cin >> choice;
	for (size_t i = 0; i < items.size(); i++)
	{
		if (choice == items[i].letter) {
			items[i].handler();
			cout << "The user chose: " << choice;
		}
	}
}


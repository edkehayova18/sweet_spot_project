#include <iostream>
#include <fstream>
#include "dataFunction.h"
#include "presentationFunctions.h"
#include "dataFunction.h"
using namespace std;

int main()
{
	vector<MENU_ITEM> mainMenu =
	{
	{ '1',"Show info",menu1 },
	{ '2',"Edit info", menu2 },
	{ '3',"Show sum of numbers",menu3 }
	};

	displayMainMenu(mainMenu);
	handleUserChoice(mainMenu);

}
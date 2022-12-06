#include <fstream>
#include <iostream>
#include <string>

//================= Header Files =================//
#include "bossbot.h"
#include "bossbotCalcNumerical.h"
#include "bossbotMenu.h"
#include "cashbot.h"
#include "cashbotCalcNumerical.h"
#include "cashbotMenu.h"
#include "cogGoBack.h"
#include "cogMenu.h"
#include "golfCalc.h"
#include "lawbot.h"
#include "lawbotCalcNumerical.h"
#include "lawbotMenu.h"
#include "mainGoBack.h"
#include "mainMenu.h"
#include "raceCalc.h"
#include "sellbot.h"
#include "sellbotCalcNumerical.h"
#include "sellbotMenu.h"
#include "sellbotTopMenu.h"

using namespace std;

int main() {
	const string feedbackLink = "https://forms.gle/G6UYKekdmxetTCbW7 ";
	int mainChoice = 0; // Main menu choice variable
	while (mainChoice != 4) {
		mainChoice = mainMenu(); // sets the main menu choice variable to be the
		// returned value from the mainMenu function, which
		// displays the main menu and gets input.

		switch (mainChoice) { // This will do different actions based on the main
			// menu choice.
		case 1:               // If 1 is entered, go to cog menu
			int cogMenuChoice;  // Cog menu
			cogMenuChoice = 0;  // choice variable
			bool cogGoBackM;    // not actually sure if this is used ngl
			while (cogMenuChoice != 5) {
				cogMenuChoice = cogMenu();
				switch (cogMenuChoice) {
				case 1: // Goes to Bossbot Menu
					int bossbotMenuChoice;
					bossbotMenuChoice = bossbotMenu();
					switch (bossbotMenuChoice) {
					case 1:
						bossbotCalc();
						cogGoBackM = cogGoBack();
						break;
					case 2:
						bossbotCalcNumerical();
						cogGoBackM = cogGoBack();
						break;
					default:
						cout << "Bad input" << endl;
					}
					break; // belongs to the bossbot menu case

				case 2: // Goes to Lawbot Menu
					int lawbotMenuChoice;
					lawbotMenuChoice = lawbotMenu();
					switch (lawbotMenuChoice) {
					case 1: // Calls the Lawbot program with Cog Suit input
						lawbotCalc();
						cogGoBackM = cogGoBack();
						break;
					case 2: // Calls the Lawbot program with Jury Notice input
						lawbotCalcNumerical();
						cogGoBackM = cogGoBack();
						break;
					default:
						cout << "Bad" << endl;
					}
					break; // belongs to the lawbot menu case

				case 3: // Goes to Cashbot Menu
					int cashbotMenuChoice;
					cashbotMenuChoice = cashbotMenu();
					switch (cashbotMenuChoice) {
					case 1:
						cashbotCalc();
						cogGoBackM = cogGoBack();
						break;
					case 2:
						cashbotCalcNumerical();
						cogGoBackM = cogGoBack();
						break;
					default:
						cout << "Bad" << endl;
					}
					break; // belongs to the cashbot menu case
				case 4:  // Goes to Sellbot Menu
					char sellbotTopMenuChoice;
					sellbotTopMenuChoice = sellbotTopMenu();
					if (sellbotTopMenuChoice == 'Y') {
						cout << "It would be much faster to do Field Offices instead of "
							"factories."
							<< endl;
						cout << "Would you like to check how many factories you should do "
							"anyway?"
							<< endl;
						cout << "Enter Y if you do, or enter N to go back to the main "
							"menu: ";
						char wantsFactories;
						cin >> wantsFactories;
						if (wantsFactories == 'Y') {
							int sellbotMenuChoice;
							sellbotMenuChoice = sellbotMenu();
							switch (sellbotMenuChoice) {
							case 1:
								sellbotCalc();
								cogGoBackM = cogGoBack();
								break;
							case 2:
								sellbotCalcNumerical();
								cogGoBackM = cogGoBack();
								break;
							}
						}
						else if (wantsFactories == 'N')
							break; // belongs to the sellbot top menu

					}
					else if (sellbotTopMenuChoice == 'N') {
						int sellbotMenuChoice;
						sellbotMenuChoice = sellbotMenu();
						switch (sellbotMenuChoice) {
						case 1:
							sellbotCalc();
							cogGoBackM = cogGoBack();
							break;
						case 2:
							sellbotCalcNumerical();
							cogGoBackM = cogGoBack();
							break;
						}
					}
					break;
				case 5: // Goes back to main menu
					break;
				} // end of switch (cogMenuChoice)
			}
			break; // belongs to cog menu case (main switch, case 1)

		case 2: // Goes to Golf Menu
			system("clear");
			cout << "You have chosen the Golf menu.\n";
			golfCalc();
			break;
		case 3: // Goes to Racing Menu
			system("clear");
			cout << "You have chosen the Racing menu.\n";
			raceCalc();
			break;
		case 4: // Quit
			cout << "Thank you for using my program! I hope it was helpful!" << endl;
			cout << "I would appreciate if you would leave me some feedback on this "
				"program."
				<< endl;
			cout << "The link is: " << feedbackLink << "." << endl;
			cout << "This can also be found in the readme.md file." << endl;
			exit(0);
			break;

		} // end of switch (mainChoice)
	}   // end of main while loop
	return 0;
}


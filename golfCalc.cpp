/*------------------------------------------------------------------------------------
 Function Name: golfCalc
 Function Return Type: void
 Parameters: none
 Function Description: This function is a sub-program. It asks the user whether they 
 want to view, update, or erase their progress. This progress is stored in two files.
 -----------------------------------------------------------------------------------*/
#include "golfCalc.h"

 // I need to declare these variables outside of golfCalc() so that I can use them in
 // other functions.

 // declaring file stream objects and stuff
ifstream fileRead;  // this is used for option 2 in main().
ofstream fileWrite; // this is used in the progressUpdate() function.

// Flag variables for row 1 trophies //
bool coursesCompleted1, coursesCompleted10, coursesCompleted100;
bool underPar1, underPar10, underPar100;
bool holeInOne1, holeInOne5, holeInOne50;
bool eagleBetter1;

// Flag variables for row 2 trophies //
bool eagleBetter10, eagleBetter100;
bool birdieBetter3, birdieBetter30, birdieBetter300;
bool parBetter4, parBetter40, parBetter400;
bool multiCompleted2, multiCompleted20;

// Flag variables for row 3 trophies //
bool multiCompleted200;
bool walkInThePar1, walkInThePar5, walkInThePar25;
bool holeSome1, holeSome5, holeSome25;
bool kitCaboodle1, kitCaboodle5, kitCaboodle25;

bool goBackToMain;

// Variables for storing values for each trophy //
int coursesCompleted, underPar, holeInOne, eagleBetter, birdieBetter, parBetter,
multiCompleted, walkInThePar, holeSome, kitCaboodle;

/*------------------------------------------------------------------------------------
 Function Name: trophyRead
 Function Return Type: void
 Parameters: none
 Function Description: This function reads from the GolfCategoryProgress.txt file.
 -----------------------------------------------------------------------------------*/
void trophyRead() {
	fileRead.open("GolfCategoryProgress.txt");
	fileRead >> coursesCompleted;
	fileRead >> underPar;
	fileRead >> holeInOne;
	fileRead >> eagleBetter;
	fileRead >> birdieBetter;
	fileRead >> parBetter;
	fileRead >> multiCompleted;
	fileRead >> walkInThePar;
	fileRead >> holeSome;
	fileRead >> kitCaboodle;
	fileRead.close();
}
/*------------------------------------------------------------------------------------
 Function Name: trophyWrite
 Function Return Type: void
 Parameters: none
 Function Description: This function writes to the GolfCategoryProgress.txt file.
 -----------------------------------------------------------------------------------*/
void trophyWrite() {
	fileWrite.open("GolfCategoryProgress.txt");
	fileWrite << coursesCompleted << endl;
	fileWrite << underPar << endl;
	fileWrite << holeInOne << endl;
	fileWrite << eagleBetter << endl;
	fileWrite << birdieBetter << endl;
	fileWrite << parBetter << endl;
	fileWrite << multiCompleted << endl;
	fileWrite << walkInThePar << endl;
	fileWrite << holeSome << endl;
	fileWrite << kitCaboodle << endl;
	fileWrite.close();
}
/*------------------------------------------------------------------------------------
 Function Name: progressRead
 Function Return Type: void
 Parameters: none
 Function Description: This function reads from the GolfTrophyProgress.txt file.
 -----------------------------------------------------------------------------------*/
void progressRead() {
	fileRead.open("GolfTrophyProgress.txt");
	cout << "Now reading your progress from GolfTrophyProgress.txt...\n";
	fileRead >> coursesCompleted1;
	fileRead >> coursesCompleted10;
	fileRead >> coursesCompleted100;
	fileRead >> underPar1;
	fileRead >> underPar10;
	fileRead >> underPar100;
	fileRead >> holeInOne1;
	fileRead >> holeInOne5;
	fileRead >> holeInOne50;
	fileRead >> eagleBetter1;
	fileRead >> eagleBetter10;
	fileRead >> eagleBetter100;
	fileRead >> birdieBetter3;
	fileRead >> birdieBetter30;
	fileRead >> birdieBetter300;
	fileRead >> parBetter4;
	fileRead >> parBetter40;
	fileRead >> parBetter400;
	fileRead >> multiCompleted2;
	fileRead >> multiCompleted20;
	fileRead >> multiCompleted200;
	fileRead >> walkInThePar1;
	fileRead >> walkInThePar5;
	fileRead >> walkInThePar25;
	fileRead >> holeSome1;
	fileRead >> holeSome5;
	fileRead >> holeSome25;
	fileRead >> kitCaboodle1;
	fileRead >> kitCaboodle5;
	fileRead >> kitCaboodle25;
	fileRead.close();
}
/*------------------------------------------------------------------------------------
 Function Name: trophyCounter
 Function Return Type: int
 Parameters: none
 Function Description: All of the variables in this function are bools. This function
 adds them up to count them.
 -----------------------------------------------------------------------------------*/
int trophyCounter() {
	int trophyCount =
		coursesCompleted1 + coursesCompleted10 + coursesCompleted100 + underPar1 +
		underPar10 + underPar100 + holeInOne1 + holeInOne5 + holeInOne50 +
		eagleBetter1 + eagleBetter10 + eagleBetter100 + birdieBetter3 +
		birdieBetter30 + birdieBetter300 + parBetter4 + parBetter40 +
		parBetter400 + multiCompleted2 + multiCompleted20 + multiCompleted200 +
		walkInThePar1 + walkInThePar5 + walkInThePar25 + holeSome1 + holeSome5 +
		holeSome25 + kitCaboodle1 + kitCaboodle5 + kitCaboodle25;
	return trophyCount;
}
/*------------------------------------------------------------------------------------
 Function Name: progressUpdate
 Function Return Type: void
 Parameters: none
 Function Description: This function writes to the GolfTrophyProgress.txt file.
 -----------------------------------------------------------------------------------*/
void progressUpdate() {
	fileWrite.open("GolfTrophyProgress.txt");
	cout << "Now writing your progress to GolfTrophyProgress.txt...\n";
	fileWrite << coursesCompleted1 << endl;
	fileWrite << coursesCompleted10 << endl;
	fileWrite << coursesCompleted100 << endl;
	fileWrite << underPar1 << endl;
	fileWrite << underPar10 << endl;
	fileWrite << underPar100 << endl;
	fileWrite << holeInOne1 << endl;
	fileWrite << holeInOne5 << endl;
	fileWrite << holeInOne50 << endl;
	fileWrite << eagleBetter1 << endl;
	fileWrite << eagleBetter10 << endl;
	fileWrite << eagleBetter100 << endl;
	fileWrite << birdieBetter3 << endl;
	fileWrite << birdieBetter30 << endl;
	fileWrite << birdieBetter300 << endl;
	fileWrite << parBetter4 << endl;
	fileWrite << parBetter40 << endl;
	fileWrite << parBetter400 << endl;
	fileWrite << multiCompleted2 << endl;
	fileWrite << multiCompleted20 << endl;
	fileWrite << multiCompleted200 << endl;
	fileWrite << walkInThePar1 << endl;
	fileWrite << walkInThePar5 << endl;
	fileWrite << walkInThePar25 << endl;
	fileWrite << holeSome1 << endl;
	fileWrite << holeSome5 << endl;
	fileWrite << holeSome25 << endl;
	fileWrite << kitCaboodle1 << endl;
	fileWrite << kitCaboodle5 << endl;
	fileWrite << kitCaboodle25 << endl;
	fileWrite.close();
}

// Begin main program //
void golfCalc() {

	int completedTrophies = 0; // counter for number of completed trophies

	int choice = 0; // menu choice
	while (choice != 4) {
		goBackToMain = false;

		cout << "Welcome to the Golf Program! Do you want to:\n";
		cout << "1. Update your progress?\n";
		cout << "2. View your current progress?\n";
		cout << "3. Reset your progress?\n";
		cout << "4. Go back to the main menu?\n";
		cout << "Enter your choice here: ";
		cin >> choice;
		cout << endl;

		switch (choice) {
		case 1: {
			system("clear");
			cout << "You have chosen to update your progress.\n\n";
			//================ BEGIN PROMPTS ================//
			cout << "How many courses have you completed? ";
			cin >> coursesCompleted;
			if ((coursesCompleted >= 1) && (coursesCompleted < 10))
				coursesCompleted1 = true;
			else if ((coursesCompleted >= 10) && (coursesCompleted < 100)) {
				coursesCompleted1 = true;
				coursesCompleted10 = true;
			}
			else if (coursesCompleted >= 100) {
				coursesCompleted1 = true;
				coursesCompleted10 = true;
				coursesCompleted100 = true;
			}
			cout << "How many courses under par have you done? ";
			cin >> underPar;
			if ((underPar >= 1) && (underPar < 10))
				underPar1 = true;
			else if ((underPar >= 10) && (underPar < 100)) {
				underPar1 = true;
				underPar10 = true;
			}
			else if (underPar >= 100) {
				underPar1 = true;
				underPar10 = true;
				underPar100 = true;
			}
			cout << "How many hole-in-one shots have you made? ";
			cin >> holeInOne;
			if ((holeInOne >= 1) && (holeInOne < 5))
				holeInOne1 = true;
			else if ((holeInOne >= 5) && (holeInOne < 50)) {
				holeInOne1 = true;
				holeInOne5 = true;
			}
			else if (holeInOne >= 50) {
				holeInOne1 = true;
				holeInOne5 = true;
				holeInOne50 = true;
			}
			cout << "How many eagle or Better shots have you made? ";
			cin >> eagleBetter;
			if ((eagleBetter >= 1) && (eagleBetter < 10))
				eagleBetter1 = true;
			else if ((eagleBetter >= 10) && (eagleBetter < 100)) {
				eagleBetter1 = true;
				eagleBetter10 = true;
			}
			else if (eagleBetter >= 100) {
				eagleBetter1 = true;
				eagleBetter10 = true;
				eagleBetter100 = true;
			}
			cout << "How many birdie or Better shots have you made? ";
			cin >> birdieBetter;
			if ((birdieBetter >= 3) && (birdieBetter < 30))
				birdieBetter3 = true;
			else if ((birdieBetter >= 30) && (birdieBetter < 300)) {
				birdieBetter3 = true;
				birdieBetter30 = true;
			}
			else if (birdieBetter >= 300) {
				birdieBetter3 = true;
				birdieBetter30 = true;
				birdieBetter300 = true;
			}
			cout << "How many par or Better shots have you made? ";
			cin >> parBetter;
			if ((parBetter >= 4) && (parBetter < 40))
				parBetter4 = true;
			else if ((parBetter >= 40) && (parBetter < 400)) {
				parBetter4 = true;
				parBetter40 = true;
			}
			else if (parBetter >= 400) {
				parBetter4 = true;
				parBetter40 = true;
				parBetter400 = true;
			}
			cout << "How many multiplayer courses have you completed? ";
			cin >> multiCompleted;
			if ((multiCompleted >= 2) && (multiCompleted < 20))
				multiCompleted2 = true;
			else if ((multiCompleted >= 20) && (multiCompleted < 200)) {
				multiCompleted2 = true;
				multiCompleted20 = true;
			}
			else if (multiCompleted >= 200) {
				multiCompleted2 = true;
				multiCompleted20 = true;
				multiCompleted200 = true;
			}
			cout << "How many Walk In The Par wins do you have? ";
			cin >> walkInThePar;
			if ((walkInThePar >= 1) && (walkInThePar < 5))
				walkInThePar1 = true;
			else if ((walkInThePar >= 5) && (walkInThePar < 25)) {
				walkInThePar1 = true;
				walkInThePar5 = true;
			}
			else if (walkInThePar >= 25) {
				walkInThePar1 = true;
				walkInThePar5 = true;
				walkInThePar25 = true;
			}
			cout << "How many Hole-some Fun wins do you have? ";
			cin >> holeSome;
			if ((holeSome >= 1) && (holeSome < 5))
				holeSome1 = true;
			else if ((holeSome >= 5) && (holeSome < 25)) {
				holeSome1 = true;
				holeSome5 = true;
			}
			else if (holeSome >= 25) {
				holeSome1 = true;
				holeSome5 = true;
				holeSome25 = true;
			}
			cout << "How many Kit and Caboodle wins do you have? ";
			cin >> kitCaboodle;
			if ((kitCaboodle >= 1) && (kitCaboodle < 5))
				kitCaboodle1 = true;
			else if ((kitCaboodle >= 5) && (kitCaboodle < 25)) {
				kitCaboodle1 = true;
				kitCaboodle5 = true;
			}
			else if (kitCaboodle >= 25) {
				kitCaboodle1 = true;
				kitCaboodle5 = true;
				kitCaboodle25 = true;
			}
			//================= END OF PROMPTS =================//

			progressUpdate(); // sets all the trophy flags to be either true or false
			trophyWrite();    // writes progress for each of the 10 trophy categories.
			int completedTrophies = trophyCounter(); // adds all bool vars
			cout << "\nYou have " << completedTrophies << "/30 trophies.\n";
			char goBack;
			cout << "Would you like to return to the main menu?\n";
			cout << "Enter 'Y' to go back, or enter 'N' to quit. ";
			cin >> goBack;
			if ((goBack == 'Y') || (goBack == 'y')) {
				cout << "Going back to the main menu...\n";
				system("clear");
				break;
			}
			else if ((goBack == 'N') || (goBack == 'n')) {
				cout << "Quitting...\n";
				exit(0);
			}
			break;
		}
		case 2: {
			int readChoice;
			system("clear");
			cout << "You have chosen to view your current golf progress.\n\n";
			cout << "Would you like to:\n";
			cout << "1. View the total number of trophies completed?\n";
			cout << "2. View your progress for each trophy?\n";
			cout << "3. Go back to the main golf menu?\n";
			cout << "Enter your choice here: ";
			cin >> readChoice;
			while ((readChoice != 3) && (goBackToMain == false)) {
				switch (readChoice) {
				case 1: {
					progressRead(); // gets current progress from the file
					completedTrophies = trophyCounter(); // tallies # of trophies
					cout << "You have " << completedTrophies << " trophies.\n";
					char goBack;
					cout << "Would you like to return to the main golf menu?\n";
					cout << "Enter 'Y' to go back, or enter 'N' to quit. ";
					cin >> goBack;
					if ((goBack == 'Y') || (goBack == 'y')) {
						goBackToMain = true;
						// cout << "Going back to the main golf menu...\n";
						system("clear");
						break;
					}
					else if ((goBack == 'N') || (goBack == 'n')) {
						cout << "Quitting...\n";
						exit(0);
					}
				}
				case 2: {
					trophyRead();
					//================ Courses Completed ================//
					cout << "\nYou have completed " << coursesCompleted << " courses.\n";
					if (coursesCompleted == 0)
						cout
						<< "You need to complete one course for your first trophy.\n\n";
					else if ((coursesCompleted >= 1) && (coursesCompleted < 10))
						cout << "You need " << 10 - coursesCompleted
						<< " more for your next trophy.\n\n";
					else if ((coursesCompleted >= 10) && (coursesCompleted < 100))
						cout << "You need " << 100 - coursesCompleted
						<< " more for your next trophy.\n\n";
					else if (coursesCompleted >= 100)
						cout << "Congratulations! You have all 3 trophies for course "
						"completion!\n\n";
					//================ Courses Under Par ================//
					cout << "You have completed " << underPar << " courses under par.\n";
					if (underPar == 0)
						cout << "You need to complete one course under par for your first "
						"trophy.\n\n";
					else if ((underPar >= 1) && (underPar < 10))
						cout << "You need " << 10 - underPar
						<< " more for your next trophy.\n\n";
					else if ((underPar >= 10) && (underPar < 100))
						cout << "You need " << 100 - underPar
						<< " more for your next trophy.\n\n";
					else if (underPar >= 100)
						cout << "Congratulations! You have all 3 trophies for courses "
						"under par!\n\n";
					//================ Hole-in-one shots ================//
					cout << "You have made " << holeInOne << " Hole-in-one shots.\n";
					if (holeInOne == 0)
						cout << "You need to make one Hole-in-one shot for your first "
						"trophy.\n\n";
					else if ((holeInOne >= 1) && (holeInOne < 5))
						cout << "You need " << 5 - holeInOne
						<< " more for your next trophy.\n\n";
					else if ((holeInOne >= 5) && (holeInOne < 50))
						cout << "You need " << 50 - holeInOne
						<< " more for your next trophy.\n\n";
					else if (holeInOne >= 50)
						cout << "Congratulations! You have all 3 trophies for Hole-in-one "
						"shots!\n\n";
					//================ Eagle or Better shots ================//
					cout << "You have made " << eagleBetter
						<< " Eagle or Better shots.\n";
					if (eagleBetter == 0)
						cout << "You need to make one Eagle or Better shot for your first "
						"trophy.\n\n";
					else if ((eagleBetter >= 1) && (eagleBetter < 10))
						cout << "You need " << 10 - eagleBetter
						<< " more for your next trophy.\n\n";
					else if ((eagleBetter >= 10) && (eagleBetter < 100))
						cout << "You need " << 100 - eagleBetter
						<< " more for your next trophy.\n\n";
					else if (eagleBetter >= 100)
						cout << "Congratulations! You have all 3 trophies for Eagle or "
						"Better shots!\n\n";
					//================ Birdie or Better shots ================//
					cout << "You have made " << birdieBetter
						<< " Birdie or Better shots.\n";
					if (birdieBetter == 0)
						cout << "You need to make one Birdie or Better shot for your first "
						"trophy.\n\n";
					else if ((birdieBetter >= 3) && (birdieBetter < 30))
						cout << "You need " << 30 - birdieBetter
						<< " more for your next trophy.\n\n";
					else if ((birdieBetter >= 30) && (birdieBetter < 300))
						cout << "You need " << 300 - birdieBetter
						<< " more for your next trophy.\n\n";
					else if (birdieBetter >= 300)
						cout << "Congratulations! You have all 3 trophies for Birdie or "
						"Better shots!\n\n";
					//================ Par or Better shots ================//
					cout << "You have made " << parBetter << " Par or Better shots.\n";
					if (parBetter == 0)
						cout << "You need to make one Par or Better shot for your first "
						"trophy.\n\n";
					else if ((parBetter >= 4) && (parBetter < 40))
						cout << "You need " << 40 - parBetter
						<< " more for your next trophy.\n\n";
					else if ((parBetter >= 40) && (parBetter < 400))
						cout << "You need " << 400 - parBetter
						<< " more for your next trophy.\n\n";
					else if (parBetter >= 400)
						cout << "Congratulations! You have all 3 trophies for Par or "
						"Better shots!\n\n";
					//================ Multiplayer courses completed ================//
					cout << "You have done " << multiCompleted
						<< " multiplayer courses.\n";
					if (multiCompleted == 0)
						cout << "You need to do one multiplayer course for your first "
						"trophy.\n\n";
					else if ((multiCompleted >= 2) && (multiCompleted < 20))
						cout << "You need " << 20 - multiCompleted
						<< " more for your next trophy.\n\n";
					else if ((multiCompleted >= 20) && (multiCompleted < 200))
						cout << "You need " << 200 - multiCompleted
						<< " more for your next trophy.\n\n";
					else if (multiCompleted >= 200)
						cout << "Congratulations! You have all 3 trophies for multiplayer "
						"course completion!\n\n";
					//================ Walk In The Par courses won ================//
					cout << "You have " << walkInThePar << " Walk In the Par wins.\n";
					if (walkInThePar == 0)
						cout << "You need to win one Walk In The Par course for your first "
						"trophy.\n\n";
					else if ((walkInThePar >= 1) && (walkInThePar < 5))
						cout << "You need " << 5 - walkInThePar
						<< " more for your next trophy.\n\n";
					else if ((walkInThePar >= 5) && (walkInThePar < 25))
						cout << "You need " << 25 - walkInThePar
						<< " more for your next trophy.\n\n";
					else if (walkInThePar >= 25)
						cout << "Congratulations! You have all 3 trophies for Walk In The "
						"Par course wins!\n\n";
					//================ Hole-some Fun courses won ================//
					cout << "You have " << holeSome << " Hole-some Fun wins.\n";
					if (holeSome == 0)
						cout << "You need to win one Hole-Some Fun course for your first "
						"trophy.\n\n";
					else if ((holeSome >= 1) && (holeSome < 5))
						cout << "You need " << 5 - holeSome
						<< " more for your next trophy.\n\n";
					else if ((holeSome >= 5) && (holeSome < 25))
						cout << "You need " << 25 - holeSome
						<< " more for your next trophy.\n\n";
					else if (holeSome >= 25)
						cout << "Congratulations! You have all 3 trophies for Hole-Some "
						"Fun course wins!\n\n";
					//================ Kit And Caboodle courses won ================//
					cout << "You have " << kitCaboodle << " Kit and Caboodle wins.\n";
					if (kitCaboodle == 0)
						cout << "You need to win one Kit and Caboodle course for your "
						"first trophy.\n\n";
					else if ((kitCaboodle >= 1) && (kitCaboodle < 5))
						cout << "You need " << 5 - kitCaboodle
						<< " more for your next trophy.\n\n";
					else if ((kitCaboodle >= 5) && (kitCaboodle < 25))
						cout << "You need " << 25 - kitCaboodle
						<< " more for your next trophy.\n\n";
					else if (kitCaboodle >= 25)
						cout << "Congratulations! You have all 3 trophies for Kit And "
						"Caboodle course wins!\n\n";

					progressRead(); // gets current progress from the file
					completedTrophies = trophyCounter(); // tallies # of trophies
					cout << "You have " << completedTrophies << " total trophies.\n\n";

					cout << "Would you like to return to the main menu?\n";
					cout << "Enter 'Y' to go back, or enter 'N' to quit. ";
					char goBack;
					cin >> goBack;
					if ((goBack == 'Y') || (goBack == 'y')) {
						goBackToMain = true;
						system("clear");
						break;
					}
					else if ((goBack == 'N') || (goBack == 'n')) {
						cout << "Quitting...\n";
						exit(0);
					}
					break;
				}
				case 3:
					goBackToMain = true;
					system("clear");
				}
				break;
			}
			system("clear");
			break;
		}
		case 3: {
			system("clear");
			cout << "You have chosen to reset your current progress.\n\n";
			char areYouSure;
			cout << "WARNING: This will zero out your progress. This cannot be "
				"undone.\nTo get your progress back, you will have to re-enter "
				"it manually.\nAre you sure you want to do that?\n";
			cout << "Enter 'Y' to continue, or enter 'N' to go back: ";
			cin >> areYouSure;
			if ((areYouSure == 'y') || (areYouSure == 'Y')) {
				cout << "Zeroing progress...\n";
				fileWrite.open("GolfTrophyProgress.txt");
				for (int i = 1; i <= 30; i++)
					fileWrite << "0" << endl;
				fileWrite.close();
				fileWrite.open("GolfCategoryProgress.txt");
				for (int j = 1; j <= 10; j++)
					fileWrite << "0" << endl;
				fileWrite.close();
				system("clear");
				cout << "Progress has been reset.\n";

			}
			else if ((areYouSure == 'n') || (areYouSure == 'N')) {
				system("clear");
				cout << "Progress will not be reset. Returning to main menu...\n\n";
				break;
			}
			else
				cout << "hey whoa wait you can't do that, that's illegal\n";
			break;
		}
		case 4: {
			cout << "Quitting...\n\n";
			break;
		}
		default:
			system("clear");
			cout << "Your choice must be between 1 and 4. Returning to main "
				"menu...\n\n";
		}
	}
}

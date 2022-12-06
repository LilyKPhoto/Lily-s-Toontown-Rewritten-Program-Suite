/*-----------------------------------------------------------------------------
 Function Name: bossbotCalc
 Function Return Type: void
 Parameters: none
 Function Description: This function asks the user for the Cog's name and its
 suit level. It will then output the number and type of Cog Golf Courses needed
 to be ready for promotion.
 ------------------------------------------------------------------------------*/
#include "bossbot.h"

void bossbotCalc() {
	// declare and initialize arrays to store the stock option values for each Cog
	int Flunky[5] = { 100, 130, 160, 190, 800 };
	int PencilPusher[5] = { 160, 210, 260, 310, 1300 };
	int Yesman[5] = { 260, 340, 420, 500, 2100 };
	int Micromanager[5] = { 420, 550, 680, 810, 3400 };
	int Downsizer[5] = { 680, 890, 1100, 1310, 5500 };
	int HeadHunter[5] = { 1100, 1440, 1780, 2120, 8900 };
	int CorporateRaider[5] = { 1780, 2330, 2880, 3430, 14400 };
	int TheBigCheese[42] = { 2880,  3770, 4660, 5500,  23300, 2880,  23300, 2880,
						  3770,  4660, 5500, 23300, 2880,  3770,  4660,  5500,
						  6440,  7330, 8220, 9110,  10000, 23300, 2880,  3770,
						  4660,  5500, 6440, 7330,  8220,  9110,  10000, 23300,
						  2880,  3770, 4660, 5500,  6440,  7330,  8220,  9110,
						  10000, 23300 }; // This took too long to input :(

	// Declaring constants for all of the relevant combinations of Golf Courses //
	const int frontThree = 1120, middleSix = 3020, backNine = 5120, twoSix = 6040,
		ninePlusThree = 6240, ninePlusSix = 8140, twoNines = 10240,
		twoNinePlusSix = 13260, threeNines = 15360, fourNines = 20480,
		maxStockOptions = 23300; // this is also 4 Back Nines and a Middle Six.

	int neededStockOptions = 0; // This will be used to feed into the if/else madness
	string cogName;         // Cog Name
	int cogLevel;           // Level of Cog
	int index; // This will be used to locate appropriate stock option value.
	cout << "Enter the Cog name: ";
	cin.ignore(); // ignores the lingering '\n' in the input buffer
	getline(cin, cogName); // reads a line of input

	cout << "Enter the Cog level: ";
	cin >> cogLevel;

	// matches the input to one of the 8 cog types and sets the index variable
	// the index variable is then used to get the stock option value from the relevant array
	if (cogName == "Flunky") {
		index = cogLevel - 1;
		neededStockOptions = Flunky[index];
	}
	else if (cogName == "Pencil Pusher") {
		index = cogLevel - 2;
		neededStockOptions = PencilPusher[index];
	}
	else if (cogName == "Yesman") {
		index = cogLevel - 3;
		neededStockOptions = Yesman[index];
	}
	else if (cogName == "Micromanager") {
		index = cogLevel - 4;
		neededStockOptions = Micromanager[index];
	}
	else if (cogName == "Downsizer") {
		index = cogLevel - 5;
		neededStockOptions = Downsizer[index];
	}
	else if (cogName == "Head Hunter") {
		index = cogLevel - 6;
		neededStockOptions = HeadHunter[index];
	}
	else if (cogName == "Corporate Raider") {
		index = cogLevel - 7;
		neededStockOptions = CorporateRaider[index];
	}
	else if ((cogName == "The Big Cheese") || (cogName == "Big Cheese")) {
		index = cogLevel - 8;
		neededStockOptions = TheBigCheese[index];
	}
	else {
		cout << "That Cog hasn't been invented yet!" << endl;
	}

	cout << "\nYour Cog Disguise needs " << neededStockOptions
		<< " Stock Options.\n" << endl; // display the neededStockOptions value

	// Figuring out what golf courses are needed based on Stock Option requirements //
	// This information is then displayed to the user //
	if (neededStockOptions <
		(frontThree / 2)) { // If you need less than half of a Front 3
		cout << "You can do a Front Three if you want,\nbut doing Bossbot "
			"buildings during invasions may be easier." << endl;
	}
	else if (neededStockOptions <= frontThree) {
		cout << "You need to do a Front Three. Good Luck!" << endl;
	}
	else if ((neededStockOptions > frontThree) &&
		(neededStockOptions <= middleSix)) {
		cout << "You need to do a Middle Six. Good Luck!" << endl;
	}
	else if ((neededStockOptions > middleSix) &&
		(neededStockOptions <= backNine)) {
		cout << "You need to do a Back Nine. Good Luck!" << endl;
	}
	else if ((neededStockOptions > backNine) &&
		(neededStockOptions <= twoSix)) {
		cout << "You need to do either two Middle Sixes or a Back Nine and a Front "
			"Three. Good Luck!"
			<< endl;
	}
	else if ((neededStockOptions > twoSix) &&
		(neededStockOptions <= ninePlusThree)) {
		cout << "You need to do a Back Nine and a Front Three. Good Luck!" << endl;
	}
	else if ((neededStockOptions > ninePlusThree) &&
		(neededStockOptions <= ninePlusSix)) {
		cout << "You need to do a Back Nine and a Middle Six. Good Luck!" << endl;
	}
	else if ((neededStockOptions > ninePlusSix) &&
		(neededStockOptions <= twoNines)) {
		cout << "You need to do two Back Nines. Good Luck!" << endl;
	}
	else if ((neededStockOptions > twoNines) &&
		(neededStockOptions <= twoNinePlusSix)) {
		cout << "You need to do two Back Nines and a Middle Six. Good Luck!"
			<< endl;
	}
	else if ((neededStockOptions > twoNinePlusSix) &&
		(neededStockOptions <= threeNines)) {
		cout << "You need to do three Back Nines. Good Luck!" << endl;
	}
	else if ((neededStockOptions > threeNines) &&
		(neededStockOptions <= fourNines)) {
		cout << "You need to do four Back Nines. Good Luck!" << endl;
	}
	else if ((neededStockOptions > fourNines) &&
		(neededStockOptions <= maxStockOptions)) {
		cout << "You need to do four Back Nines and a Middle Six. Good Luck!"
			<< endl;
	}
	else if (neededStockOptions > maxStockOptions) {
		cout << "Error: It looks like you somehow need more Stock Options than is "
			"possible.\nThis can be caused by bad input, like adding an extra "
			"space or making a typo.\nCheck your input and try again." << endl;
	}
	return;
}

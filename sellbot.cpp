/*-----------------------------------------------------------------------------
 Function Name: sellbotCalc
 Function Return Type: void
 Parameters: none
 Function Description: This function asks the user for the Cog's name and its
 suit level. It will then output the number and type of Factories needed
 to be ready for promotion.
 ------------------------------------------------------------------------------*/
#include "sellbot.h"

void sellbotCalc() {
  int ColdCaller[5] = {20, 30, 40, 50, 200};
  int Telemarketer[5] = {40, 50, 60, 70, 300};
  int NameDropper[5] = {60, 80, 100, 120, 500};
  int GladHander[5] = {100, 130, 160, 190, 800};
  int MoverAndShaker[5] = {160, 210, 260, 310, 1300};
  int TwoFace[5] = {260, 340, 420, 500, 2100};
  int TheMingler[5] = {420, 550, 680, 810, 3400};
  int MrHollywood[42] = {680,  890,  1100, 1310, 5500, 680,  5500, 680,  890,
                         1100, 1310, 5500, 680,  890,  1100, 1310, 1520, 1730,
                         1940, 2150, 2360, 5500, 680,  890,  1100, 1310, 1520,
                         1730, 1940, 2150, 2360, 5500, 680,  890,  1100, 1310,
                         1520, 1730, 1940, 2150, 2360, 5500};

  //============================ Single Factories ============================//
  const int shortRoute = 480, mediumRoute = 586, longRoute = 776;
  //=========================== Long Multiples ===========================//
  const int twoLong = 1552, threeLong = 2328, fourLong = 3104, fiveLong = 3880,
            sixLong = 4656, sevenLong = 5432;
  //========================== Multi-Office Combos ==========================//
  const int shortPlusLong = 1256;

  const int maxMerits = 5500;

  int neededMerits = 0; // This will be used to feed into the if/else madness
  string cogName;       // Cog Name
  int cogLevel;         // Level of Cog
  int index;            // This will be used to locate appropriate Merit value.
  cout << "Enter the Cog name: ";
  cin.ignore();
  getline(cin, cogName);

  cout << "Enter the Cog level: ";
  cin >> cogLevel;

  if (cogName == "Cold Caller") {
    index = cogLevel - 1;
    neededMerits = ColdCaller[index];
  } else if (cogName == "Telemarketer") {
    index = cogLevel - 2;
    neededMerits = Telemarketer[index];
  } else if (cogName == "Name Dropper") {
    index = cogLevel - 3;
    neededMerits = NameDropper[index];
  } else if (cogName == "Glad Hander") {
    index = cogLevel - 4;
    neededMerits = GladHander[index];
  } else if (cogName == "Mover and Shaker") {
    index = cogLevel - 5;
    neededMerits = MoverAndShaker[index];
  } else if ((cogName == "Two-Face") || (cogName == "Two Face")) {
    index = cogLevel - 6;
    neededMerits = TwoFace[index];
  } else if (cogName == "The Mingler") {
    index = cogLevel - 7;
    neededMerits = TheMingler[index];
  } else if ((cogName == "Mr. Hollywood") || (cogName == "Mr Hollywood")) {
    index = cogLevel - 8;
    neededMerits = MrHollywood[index];
  } else {
    cout << "That Cog hasn't been invented yet!" << endl;
    // return 0;
  }

  cout << "\nYour Cog Disguise needs " << neededMerits << " Merits.\n" << endl;

  // Figuring out what Factories are needed based on Merit
  // requirements //

  if (neededMerits <
      (shortRoute / 2)) { // If you need less than half of a Front 3
    cout << "You can do a Short Factory if you want,\nbut doing Sellbot "
            "buildings may be easier."
         << endl;
  } else if (neededMerits <= shortRoute) {
    cout << "You need to do a Short Factory. Good Luck!" << endl;
  } else if ((neededMerits > shortRoute) && (neededMerits <= mediumRoute)) {
    cout << "You need to do a Medium Factory. Finding a group for a medium "
            "route may be difficult,"
            "\nso it may be easier to do a Long Factory. Good Luck!"
         << endl;
  } else if ((neededMerits > mediumRoute) && (neededMerits <= longRoute)) {
    cout << "You need to do a Long Factory. Good Luck!" << endl;
  } else if ((neededMerits > longRoute) && (neededMerits <= shortPlusLong)) {
    cout << "You need to do a Short and a Long Factory. Good Luck!" << endl;
  } else if ((neededMerits > shortPlusLong) && (neededMerits <= twoLong)) {
    cout << "You need to do two Long Factories. Good Luck!" << endl;
  } else if ((neededMerits > twoLong) && (neededMerits <= threeLong)) {
    cout << "You need to do three Long Factories. Good Luck!" << endl;
  } else if ((neededMerits > threeLong) && (neededMerits <= fourLong)) {
    cout << "You need to do four Long Factories. Good Luck!" << endl;
  } else if ((neededMerits > fourLong) && (neededMerits <= fiveLong)) {
    cout << "You need to do five Long Factories. Good Luck!" << endl;
  } else if ((neededMerits > fiveLong) && (neededMerits <= sixLong)) {
    cout << "You need to do six Long Factories. Good Luck!" << endl;
  } else if ((neededMerits > sixLong) && (neededMerits <= sevenLong)) {
    cout << "You need to do seven Long Factories. Good Luck!" << endl;
  } else if ((neededMerits > sevenLong) && (neededMerits <= maxMerits)) {
    cout << "You need to do seven Long Factories plus a bit extra." << endl;
    cout << "You can do a low-level Sellbot building to get the last few "
            "merits. Good Luck!"
         << endl;
  } else if (neededMerits > maxMerits) {
    cout << "Error: It looks like you somehow need more Merits than is "
            "possible.\nThis can be caused by bad input, like adding an extra "
            "space or making a typo.\nCheck your input and try again."
         << endl;
  }
  return;
}

#include "lawbot.h"

void lawbotCalc() {
  int BottomFeeder[5] = {60, 80, 100, 120, 500};
  int Bloodsucker[5] = {100, 130, 160, 190, 800};
  int DoubleTalker[5] = {160, 210, 260, 310, 1300};
  int AmbulanceChaser[5] = {260, 340, 420, 500, 2100};
  int BackStabber[5] = {420, 550, 680, 810, 3400};
  int SpinDoctor[5] = {680, 890, 1100, 1310, 5500};
  int LegalEagle[5] = {1100, 1440, 1780, 2120, 8900};
  int BigWig[42] = {1780, 2330, 2880,  3430,  14400, 1780, 14400, 1780, 2330,
                 2880, 3430, 14400, 1780,  2330,  2880, 3430,  3980, 4530,
                 5080, 5630, 6180,  14400, 1780,  2330, 2880,  3430, 3980,
                 4530, 5080, 5630,  6180,  14400, 1780, 2330,  2880, 3430,
                 3980, 4530, 5080,  5630,  6180,  14400};

  //============================= Single Offices =============================//
  const int officeA = 564, officeB = 944, officeC = 1370, officeD = 1842;
  //=========================== Office D Multiples ===========================//
  const int twoD = 3684, threeD = 5526, fourD = 7368, fiveD = 9210,
            sixD = 11052, sevenD = 12894;
  //========================== Multi-Office Combos ==========================//
  const int DplusA = 2406, DplusC = 3212;

  const int maxJuryNotices = 14400;

  int neededJuryNotices =
      0;          // This will be used to feed into the if/else madness
  string cogName; // Cog Name
  int cogLevel;   // Level of Cog
  int index;      // This will be used to locate appropriate jury notice value.
  cout << "Enter the Cog name: ";
  cin.ignore();
  getline(cin, cogName);

  cout << "Enter the Cog level: ";
  cin >> cogLevel;

  if (cogName == "Bottom Feeder") {
    index = cogLevel - 1;
    neededJuryNotices = BottomFeeder[index];
  } else if (cogName == "Bloodsucker") {
    index = cogLevel - 2;
    neededJuryNotices = Bloodsucker[index];
  } else if (cogName == "Double Talker") {
    index = cogLevel - 3;
    neededJuryNotices = DoubleTalker[index];
  } else if (cogName == "Ambulance Chaser") {
    index = cogLevel - 4;
    neededJuryNotices = AmbulanceChaser[index];
  } else if (cogName == "Back Stabber") {
    index = cogLevel - 5;
    neededJuryNotices = BackStabber[index];
  } else if (cogName == "Spin Doctor") {
    index = cogLevel - 6;
    neededJuryNotices = SpinDoctor[index];
  } else if (cogName == "Legal Eagle") {
    index = cogLevel - 7;
    neededJuryNotices = LegalEagle[index];
  } else if (cogName == "Big Wig") {
    index = cogLevel - 8;
    neededJuryNotices = BigWig[index];
  } else {
    cout << "That Cog hasn't been invented yet!" << endl;
    // return 0;
  }

  cout << "\nYour Cog Disguise needs " << neededJuryNotices
       << " Jury Notices.\n"
       << endl;

  // Figuring out what DA offices are needed based on Jury Notice
  // requirements //

  if (neededJuryNotices <
      (officeA / 2)) { // If you need less than half of a Front 3
    cout << "You can do an Office A if you want,\nbut doing Lawbot "
            "buildings during invasions may be easier."
         << endl;
  } else if (neededJuryNotices <= officeA) {
    cout << "You need to do an Office A. Good Luck!" << endl;
  } else if ((neededJuryNotices > officeA) && (neededJuryNotices <= officeB)) {
    cout << "You need to do an Office B. Good Luck!" << endl;
  } else if ((neededJuryNotices > officeB) && (neededJuryNotices <= officeC)) {
    cout << "You need to do an Office C. Good Luck!" << endl;
  } else if ((neededJuryNotices > officeC) && (neededJuryNotices <= officeD)) {
    cout << "You need to do an Office D. Good Luck!" << endl;
  } else if ((neededJuryNotices > officeD) && (neededJuryNotices <= DplusA)) {
    cout << "You need to do an Office D and an Office A. Good Luck!" << endl;
  } else if ((neededJuryNotices > DplusA) && (neededJuryNotices <= DplusC)) {
    cout << "You need to do an Office D and an Office C. Good Luck!" << endl;
  } else if ((neededJuryNotices > DplusC) && (neededJuryNotices <= twoD)) {
    cout << "You need to do two Office D's. Good Luck!" << endl;
  } else if ((neededJuryNotices > twoD) && (neededJuryNotices <= threeD)) {
    cout << "You need to do three Office D's. Good Luck!" << endl;
  } else if ((neededJuryNotices > threeD) && (neededJuryNotices <= fourD)) {
    cout << "You need to do four Office D's. Good Luck!" << endl;
  } else if ((neededJuryNotices > fourD) && (neededJuryNotices <= fiveD)) {
    cout << "You need to do five Office D's. Good Luck!" << endl;
  } else if ((neededJuryNotices > fiveD) && (neededJuryNotices <= sixD)) {
    cout << "You need to do six Office D's. Good Luck!" << endl;
  } else if ((neededJuryNotices > sixD) && (neededJuryNotices <= sevenD)) {
    cout << "You need to do seven Office D's. Good Luck!" << endl;
  } else if ((neededJuryNotices > sevenD) &&
             (neededJuryNotices <= maxJuryNotices)) {
    cout << "You need to do eight Office D's. Good Luck!" << endl;
  } else if (neededJuryNotices > maxJuryNotices) {
    cout << "Error: It looks like you somehow need more Jury Notices than is "
            "possible.\nThis can be caused by bad input, like adding an extra "
            "space or making a typo.\nCheck your input and try again."
         << endl;
  }
  return;
}

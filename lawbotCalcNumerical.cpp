/*------------------------------------------------------------------------------------
 Function Name: lawbotCalcNumerical
 Function Return Type: void
 Parameters: none
 Function Description: This function asks the user for the number of Jury Notices
 that they need. It will then output the number and type of DA Offices needed
 to be ready for promotion.
 -----------------------------------------------------------------------------------*/
#include "lawbotCalcNumerical.h"

void lawbotCalcNumerical() {
  //============================= Single Offices =============================//
  const int officeA = 564, officeB = 944, officeC = 1370, officeD = 1842;
  //=========================== Office D Multiples ===========================//
  const int twoD = 3684, threeD = 5526, fourD = 7368, fiveD = 9210,
            sixD = 11052, sevenD = 12894;
  //========================== Multi-Office Combos ==========================//
  const int DplusA = 2406, DplusC = 3212;

  const int maxJuryNotices = 14400;

  int neededJuryNotices = 0;
  cout << "How many Jury Notices do you need? ";
  cin >> neededJuryNotices;
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

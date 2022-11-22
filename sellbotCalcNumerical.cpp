#include "sellbotCalcNumerical.h"

void sellbotCalcNumerical() {
  //============================ Single Factories ============================//
  const int shortRoute = 480, mediumRoute = 586, longRoute = 776;
  //=========================== Long Multiples ===========================//
  const int twoLong = 1552, threeLong = 2328, fourLong = 3104, fiveLong = 3880,
            sixLong = 4656, sevenLong = 5432;
  //========================== Multi-Office Combos ==========================//
  const int shortPlusLong = 1256;

  const int maxMerits = 5500;

  int neededMerits = 0; // This will be used to feed into the if/else madness
  cout << "How many Merits do you need? ";
  cin >> neededMerits;

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

/*------------------------------------------------------------------------------------
 Function Name: cashbotCalcNumerical
 Function Return Type: void
 Parameters: none
 Function Description: This function asks the user for the number of Cogbucks
 that they need. It will then output the number and type of Mints needed
 to be ready for promotion.
 -----------------------------------------------------------------------------------*/
#include "cashbotCalcNumerical.h"

void cashbotCalcNumerical() {
  //============ Coin Mint ranges ============//
  const int coinLow = 356, coinHigh = 544;
  //============ Dollar Mint ranges ============//
  const int dollarLow = 679, dollarHigh = 1004;
  //============ Bullion Mint ranges ============//
  const int bullionLow = 1202, bullionHigh = 1496;

  const int maxCogbucks = 8900;

  int neededCogbucks = 0; // This will be used to feed into the if/else madness
  string cogName;         // Cog Name
  system("clear");
  //============================== Disclaimer ==============================//
  cout << "A quick note on the Cashbot calculator:" << endl;
  cout << "Take all of the calculations here with a slight grain of salt."
       << endl;
  cout << "Each of the Cashbot Mints have 20 different floors, which means that"
       << endl;
  cout << "there is no way to know how many Cogbucks you'll get until you're "
          "in the mint."
       << endl;
  cout << "Because of the range of Cogbucks in each mint, you may need to do a "
          "building or two after the mint(s)."
       << endl;
  cout << "Also, I can't account for every possible combination of Mints."
       << endl;
  cout << "The ranges make it almost impossible." << endl;
  cout << "To get around this, you can do a Mint," << endl;
  cout << "then re-run the program and enter the actual number of Cogbucks you "
          "need."
       << endl
       << endl;
  cout << "Enter the number of Cogbucks you need: ";
  cin >> neededCogbucks;
 
  if (neededCogbucks < (coinLow / 2))
    cout << "You can do a Coin Mint if you want,\n"
         << "but doing Cashbot buildings during invasions may be easier."
         << endl;
  else if (neededCogbucks <= coinLow)
    cout << "You need to do a Coin Mint. Good Luck!" << endl;
  else if ((neededCogbucks > coinLow) && (neededCogbucks <= coinHigh))
    cout << "You need to do a Coin Mint, but you might need to do a building "
            "afterwards. Good Luck!"
         << endl;
  else if ((neededCogbucks > coinHigh) && (neededCogbucks <= dollarLow))
    cout << "You need to do a Dollar Mint. Good Luck!" << endl;
  else if ((neededCogbucks > dollarLow) && (neededCogbucks <= dollarHigh))
    cout << "You need to do a Dollar Mint, but you might need to do a building "
            "afterwards. Good Luck!"
         << endl;
  else if ((neededCogbucks > dollarHigh) && (neededCogbucks <= bullionLow))
    cout << "You need to do a Bullion Mint. Good Luck!" << endl;
  else if ((neededCogbucks > bullionLow) && (neededCogbucks <= bullionHigh))
    cout
        << "You need to do a Bullion Mint, but you might need to do a building "
           "afterwards. Good Luck!"
        << endl;
  else if ((neededCogbucks > bullionHigh) &&
           (neededCogbucks <= (bullionHigh + coinHigh)))
    cout << "You need to do a Bullion Mint and a Coin Mint. Good Luck!" << endl;
  else if ((neededCogbucks > (bullionHigh + coinHigh)) &&
           (neededCogbucks <= (bullionHigh + dollarHigh)))
    cout << "You need to do a Bullion Mint and a Dollar Mint. Good Luck!"
         << endl;
  else if ((neededCogbucks > (bullionHigh + dollarHigh)) &&
           (neededCogbucks <= (bullionLow * 2)))
    cout << "You need to do two Bullion Mints. Good Luck!" << endl;
  else if ((neededCogbucks > (2 * bullionLow)) &&
           (neededCogbucks <= (2 * bullionHigh)))
    cout << "You need to do two Bullion Mints, but you might need to do a "
            "building afterwards. Good Luck!"
         << endl;
  else if ((neededCogbucks > (2 * bullionHigh)) &&
           (neededCogbucks <= (3 * bullionLow)))
    cout << "You need to do three Bullion Mints. Good Luck!" << endl;
  else if ((neededCogbucks > (3 * bullionLow)) &&
           (neededCogbucks <= (3 * bullionHigh)))
    cout << "You need to do three Bullion Mints, but you might need to do a "
            "building afterwards. Good Luck!"
         << endl;
  else if ((neededCogbucks > (3 * bullionHigh)) &&
           (neededCogbucks <= (4 * bullionLow)))
    cout << "You need to do four Bullion Mints. Good Luck!" << endl;
  else if ((neededCogbucks > (4 * bullionLow)) &&
           (neededCogbucks <= (4 * bullionHigh)))
    cout << "You need to do four Bullion Mints, but you might need to do a "
            "building afterwards. Good Luck!"
         << endl;
  else if ((neededCogbucks > (4 * bullionHigh)) &&
           (neededCogbucks <= (5 * bullionLow)))
    cout << "You need to do five Bullion Mints. Good Luck!" << endl;
  else if ((neededCogbucks > (5 * bullionLow)) &&
           (neededCogbucks <= (5 * bullionHigh)))
    cout << "You need to do five Bullion Mints, but you might need to do a "
            "building afterwards. Good Luck!"
         << endl;
  else if ((neededCogbucks > (5 * bullionHigh)) &&
           (neededCogbucks <= (6 * bullionLow)))
    cout << "You need to do six Bullion Mints. Good Luck!" << endl;
  else if ((neededCogbucks > (6 * bullionLow)) &&
           (neededCogbucks <= (6 * bullionHigh)))
    cout << "You need to do six Bullion Mints, but you might need to do a "
            "building afterwards. Good Luck!"
         << endl;
  else if ((neededCogbucks > (6 * bullionHigh)) &&
           (neededCogbucks <= (7 * bullionLow)))
    cout << "You need to do seven Bullion Mints. Good Luck!" << endl;
  else if ((neededCogbucks > (7 * bullionLow)) &&
           (neededCogbucks <= (7 * bullionHigh)))
    cout << "You need to do seven Bullion Mints, but you might need to do a "
            "building afterwards. Good Luck!"
         << endl;
  else if ((neededCogbucks > (7 * bullionHigh)) &&
           (neededCogbucks <= (8 * bullionLow)))
    cout << "You need to do eight Bullion Mints. Good Luck!" << endl;
  else if (neededCogbucks > maxCogbucks) {
    cout << "Error: It looks like you somehow need more Cogbucks than is "
            "possible.\nThis can be caused by bad input, like adding an extra "
            "space or making a typo.\nCheck your input and try again."
         << endl;
  }
}

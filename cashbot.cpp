#include "cashbot.h"

void cashbotCalc() {
  int ShortChange[5] = {40, 50, 60, 70, 300};
  int PennyPincher[5] = {60, 80, 100, 120, 500};
  int Tightwad[5] = {100, 130, 160, 190, 800};
  int BeanCounter[5] = {160, 210, 260, 310, 1300};
  int NumberCruncher[5] = {260, 340, 420, 500, 2100};
  int MoneyBags[5] = {420, 550, 680, 810, 3400};
  int LoanShark[5] = {680, 890, 1100, 1310, 5500};
  int RobberBaron[42] = {1100, 1440, 1780, 2120, 8900, 1100, 8900, 1100, 1440,
                      1780, 2120, 8900, 1100, 1440, 1780, 2120, 2460, 2800,
                      3140, 3480, 3820, 8900, 1100, 1440, 1780, 2120, 2460,
                      2800, 3140, 3480, 3820, 8900, 1100, 1440, 1780, 2120,
                      2460, 2800, 3140, 3480, 3820, 8900};
  //============ Coin Mint ranges ============//
  const int coinLow = 356, coinHigh = 544;
  //============ Dollar Mint ranges ============//
  const int dollarLow = 679, dollarHigh = 1004;
  //============ Bullion Mint ranges ============//
  const int bullionLow = 1202, bullionHigh = 1496;

  const int maxCogbucks = 8900;

  int neededCogbucks = 0; // This will be used to feed into the if/else madness
  string cogName;         // Cog Name
  int cogLevel;           // Level of Cog
  int index; // This will be used to locate appropriate Cogbuck value.
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
  cout << "Enter the Cog name: ";
  cin.ignore();
  getline(cin, cogName);

  cout << "Enter the Cog level: ";
  cin >> cogLevel;

  if (cogName == "Short Change") {
    index = cogLevel - 1;
    neededCogbucks = ShortChange[index];
  } else if (cogName == "Penny Pincher") {
    index = cogLevel - 2;
    neededCogbucks = PennyPincher[index];
  } else if (cogName == "Tightwad") {
    index = cogLevel - 3;
    neededCogbucks = Tightwad[index];
  } else if (cogName == "Bean Counter") {
    index = cogLevel - 4;
    neededCogbucks = BeanCounter[index];
  } else if (cogName == "Number Cruncher") {
    index = cogLevel - 5;
    neededCogbucks = NumberCruncher[index];
  } else if (cogName == "Money Bags") {
    index = cogLevel - 6;
    neededCogbucks = MoneyBags[index];
  } else if (cogName == "Loan Shark") {
    index = cogLevel - 7;
    neededCogbucks = LoanShark[index];
  } else if (cogName == "Robber Baron") {
    index = cogLevel - 8;
    neededCogbucks = RobberBaron[index];
  } else {
    cout << "That Cog hasn't been invented yet!" << endl;
  }

  cout << "\nYour Cog Disguise needs " << neededCogbucks << " Cogbucks.\n"
       << endl;

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
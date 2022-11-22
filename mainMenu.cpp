/*============================================
 This sub-program shows the main menu options.
 =============================================*/

#include "mainMenu.h"

int mainMenu() {
  system("clear");
  int mainMenuChoice;
  char fill = '*';
  char spaceChar = ' ';
  string line1 = " Welcome to Lily's Toontown Rewritten Program! ";
  string line2 = " A tutorial on how to use the program can be found in the "
                 "readme.md file! ";
  int numStars;
  string stars;
  int numSpaces1;
  string spaces1;
  numStars = max(line1.length(), line2.length()) + 2;
  stars.assign(numStars, fill);
  numSpaces1 = (line2.length() - line1.length()) / 2;
  spaces1.assign(numSpaces1, spaceChar);

  cout << stars << endl;
  cout << fill << spaces1 << line1 << spaces1 << spaceChar << fill << endl;
  cout << fill << line2 << fill << endl;
  cout << stars << endl;
  cout << "Would you like to:" << endl;
  cout << "1. Use the Cog Suit Calculators?" << endl;
  cout << "2. Use the Golf Trophy Calculator?" << endl;
  cout << "3. Use the Racing Trophy Calculator?" << endl;
  cout << "4. Quit?" << endl;
  cout << "Enter your choice here: ";
  cin >> mainMenuChoice;
  cout << endl;
  return mainMenuChoice;
}

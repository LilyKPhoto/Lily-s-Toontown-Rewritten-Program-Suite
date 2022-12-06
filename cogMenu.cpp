/*------------------------------------------------------------------------------------
 Function Name: cogMenu
 Function Return Type: int
 Parameters: none
 Function Description: This function displays a menu and return the menu choice.
 -----------------------------------------------------------------------------------*/
#include "cogMenu.h"
int cogMenu() {
  system("clear");
  int cogMenuChoice;
  cout << "You have chosen to view your Cog Suit progress." << endl;
  cout << "Here, you can select one of the four Cog types, and you can either" << endl;
  cout << "enter the name and level of your Cog Disguise Suit," << endl;
  cout << "or you can enter the number of Stock Options/Jury "
          "Notices/Cogbucks/Merits"
       << endl;
  cout << "that you need. The program will then tell you how many and what type"
       << endl;
  cout << "of Golf Courses/DA Offices/Mints/Factories you should do." << endl << endl;
  cout << "Would you like to:" << endl;
  cout << "1. View the Bossbot Suit Calculator?" << endl;
  cout << "2. View the Lawbot Suit Calculator?" << endl;
  cout << "3. View the Cashbot Suit Calculator?" << endl;
  cout << "4. View the Sellbot Suit Calculator?" << endl;
  cout << "5. Go back to the main menu?" << endl;
  cout << "Enter your choice here: ";
  cin >> cogMenuChoice;
  cout << endl;
  return cogMenuChoice;
}

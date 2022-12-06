/*------------------------------------------------------------------------------------
 Function Name: bossbotMenu
 Function Return Type: int
 Parameters: none
 Function Description: This function displays a menu and return the menu choice.
 -----------------------------------------------------------------------------------*/
#include "cashbotMenu.h"

int cashbotMenu() {
  int cashbotChoice;
  system("clear");
  cout << "You have chosen to view your Cashbot progress." << endl;
  cout << "You can either tell the program your Cog Suit and Level" << endl;
  cout << "or the number of Cogbucks you need." << endl;
  cout << "Would you like to:" << endl;
  cout << "1. Enter your Cog Suit and Cog Level?" << endl;
  cout << "2. Enter the number of Cogbucks you need?" << endl;
  cout << "Enter your choice here: ";
  cin >> cashbotChoice;
  cout << endl;
  return cashbotChoice;
}

/*------------------------------------------------------------------------------------
 Function Name: bossbotMenu
 Function Return Type: char
 Parameters: none
 Function Description: This function displays a menu and return the menu choice.
 -----------------------------------------------------------------------------------*/
#include "sellbotTopMenu.h"

char sellbotTopMenu() {
  char sellbotTopChoice;
  system("clear");
  cout << "You have chosen to view your Sellbot progress." << endl;
  cout << "Are you able to do Sellbot Field Offices?" << endl;
  cout << "If you don't know what a Field Office is, enter 'N'." << endl;
  cout << "Enter Y if you can, or enter N if you can't yet: ";
  cin >> sellbotTopChoice;
  return sellbotTopChoice;
}

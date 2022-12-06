/*------------------------------------------------------------------------------------
 Function Name: cogGoBack
 Function Return Type: bool
 Parameters: none
 Function Description: This function displays a menu and returns either true or false.
 -----------------------------------------------------------------------------------*/
/* This program will go back to the Cog Suit sub-menu. */

#include "cogGoBack.h"

bool cogGoBack() {
  char input;
  bool cogGoBack;
  cout << "Would you like to go back to the Cog Suit menu?" << endl;
  cout << "Enter Y if you do, and N if you want to quit the program." << endl;
  cin >> input;
  if ((input == 'Y') || (input == 'y'))
    cogGoBack = true;
  else {
    cogGoBack = false;
    cout << "Thank you for using my program! I hope it was helpful!" << endl;
    exit(0); // terminates program
  }

  return cogGoBack;
}

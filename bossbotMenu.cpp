#include "bossbotMenu.h"

int bossbotMenu() {
  int bossbotChoice;
  system("clear");
  cout << "You have chosen to view your Bossbot progress." << endl;
  cout << "You can either tell the program your Cog Suit and Level" << endl;
  cout << "or the number of Stock Options you need." << endl;
  cout << "Would you like to:" << endl;
  cout << "1. Enter your Cog Suit and Cog Level?" << endl;
  cout << "2. Enter the number of Stock Options you need?" << endl;
  cout << "Enter your choice here: ";
  cin >> bossbotChoice;
  cout << endl;
  return bossbotChoice;
}
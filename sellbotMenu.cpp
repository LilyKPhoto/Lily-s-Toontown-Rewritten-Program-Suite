#include "sellbotMenu.h"

int sellbotMenu() {
  int sellbotChoice;
  system("clear");
  cout << "You have chosen to view your Sellbot progress." << endl;
  cout << "You can either tell the program your Cog Suit and Level" << endl;
  cout << "or the number of Merits you need." << endl;
  cout << "Would you like to:" << endl;
  cout << "1. Enter your Cog Suit and Cog Level?" << endl;
  cout << "2. Enter the number of Merits you need?" << endl;
  cout << "Enter your choice here: ";
  cin >> sellbotChoice;
  cout << endl;
  return sellbotChoice;
}

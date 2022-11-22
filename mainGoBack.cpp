/* This program will go back to the Cog Suit sub-menu. */

#include "mainGoBack.h"

char mainGoBack() {
    char mainGoBack;
    cout << "Would you like to go back to the main menu?" << endl;
    cout << "Enter Y if you do, and N if you want to quit the program." << endl;
    cin >> mainGoBack;
    return mainGoBack;
}


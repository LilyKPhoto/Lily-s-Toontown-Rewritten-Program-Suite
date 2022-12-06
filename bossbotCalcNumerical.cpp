/*-----------------------------------------------------------------------------
 Function Name: bossbotCalcNumerical
 Function Return Type: void
 Parameters: none
 Function Description: This function asks the user for the number of Stock Options
 that they need. It will then output the number and type of Cog Golf Courses needed
 to be ready for promotion.
 ------------------------------------------------------------------------------*/

#include "bossbotCalcNumerical.h"

void bossbotCalcNumerical() {
    // Declaring constants for all of the relevant combinations of Golf Courses //
    const int frontThree = 1120, middleSix = 3020, backNine = 5120, twoSix = 6040,
    ninePlusThree = 6240, ninePlusSix = 8140, twoNines = 10240,
    twoNinePlusSix = 13260, threeNines = 15360, fourNines = 20480,
    maxStockOptions =
    23300; // this is also 4 Back Nines and a Middle Six.
    
    int neededStockOptions; // This will be used to feed into the if/else madness
    
    cout << "How many Stock Options do you need? ";
    cin >> neededStockOptions;

    // Figuring out what golf courses are needed based on Stock Option
    // requirements //
    
    if (neededStockOptions < (frontThree/2)) { // If you need less than half of a Front 3
        cout << "You can do a Front Three if you want,\nbut doing Bossbot "
        "buildings during invasions may be easier.\n";
    } else if (neededStockOptions <= frontThree) {
        cout << "You need to do a Front Three. Good Luck!" << endl;
    } else if ((neededStockOptions > frontThree) &&
               (neededStockOptions <= middleSix)) {
        cout << "You need to do a Middle Six. Good Luck!" << endl;
    } else if ((neededStockOptions > middleSix) &&
               (neededStockOptions <= backNine)) {
        cout << "You need to do a Back Nine. Good Luck!" << endl;
    } else if ((neededStockOptions > backNine) &&
               (neededStockOptions <= twoSix)) {
        cout << "You need to do either two Middle Sixes or a Back Nine and a Front "
        "Three. Good Luck!"
        << endl;
    } else if ((neededStockOptions > twoSix) &&
               (neededStockOptions <= ninePlusThree)) {
        cout << "You need to do a Back Nine and a Front Three. Good Luck!" << endl;
    } else if ((neededStockOptions > ninePlusThree) &&
               (neededStockOptions <= ninePlusSix)) {
        cout << "You need to do a Back Nine and a Middle Six. Good Luck!" << endl;
    } else if ((neededStockOptions > ninePlusSix) &&
               (neededStockOptions <= twoNines)) {
        cout << "You need to do two Back Nines. Good Luck!" << endl;
    } else if ((neededStockOptions > twoNines) &&
               (neededStockOptions <= twoNinePlusSix)) {
        cout << "You need to do two Back Nines and a Middle Six. Good Luck!"
        << endl;
    } else if ((neededStockOptions > twoNinePlusSix) &&
               (neededStockOptions <= threeNines)) {
        cout << "You need to do three Back Nines. Good Luck!" << endl;
    } else if ((neededStockOptions > threeNines) &&
               (neededStockOptions <= fourNines)) {
        cout << "You need to do four Back Nines. Good Luck!" << endl;
    } else if ((neededStockOptions > fourNines) &&
               (neededStockOptions <= maxStockOptions)) {
        cout << "You need to do four Back Nines and a Middle Six. Good Luck!"
        << endl;
    } else if (neededStockOptions > maxStockOptions) {
        cout << "Error: It looks like you somehow need more Stock Options than is "
        "possible.\nThis can be caused by bad input, like adding an extra "
        "space or making a typo.\nCheck your input and try again.\n";
    }
}
    
    


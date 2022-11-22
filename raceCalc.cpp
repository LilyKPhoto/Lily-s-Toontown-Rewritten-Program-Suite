#include "raceCalc.h"
// I need to declare these variables outside of main() so that I can use
// them in other functions.

// declaring file stream objects and stuff
ifstream raceFileRead;  // this is used for option 2 in main().
ofstream raceFileWrite; // this is used in the raceProgressUpdate() function.

// Flag variables for row 1 trophies //
bool speedwayQualified1, speedwayQualified10, speedwayQualified50;
bool ruralQualified1, ruralQualified10, ruralQualified50;
bool urbanQualified1, urbanQualified10, urbanQualified50;
bool qualified100;

// Flag variables for row 2 trophies //
bool speedwayWon1, speedwayWon5, speedwayWon25;
bool ruralWon1, ruralWon5, ruralWon25;
bool urbanWon1, urbanWon5, urbanWon25;
bool racesWon50;

// Flag variables for row 3 trophies //
bool tournamentQual1, tournamentQual3, tournamentQual5, tournamentQual7,
    tournamentQual9, tournamentQual11, tournamentQual13, tournamentQual15,
    tournamentWon5, grandTouring;

bool goBackToRaceMain;

// Variables for storing values for each trophy //
int speedwayQualified, ruralQualified, urbanQualified, qualified, speedwayWon,
    ruralWon, urbanWon, racesWon, tournamentQual;

void raceTrophyRead() {
  raceFileRead.open("racingCategoryProgress.txt");
  raceFileRead >> speedwayQualified;
  raceFileRead >> ruralQualified;
  raceFileRead >> urbanQualified;
  raceFileRead >> qualified;
  raceFileRead >> speedwayWon;
  raceFileRead >> ruralWon;
  raceFileRead >> urbanWon;
  raceFileRead >> racesWon;
  raceFileRead >> tournamentQual;
  raceFileRead >> grandTouring;
  raceFileRead.close();
}
void raceTrophyWrite() {
  raceFileWrite.open("racingCategoryProgress.txt");
  raceFileWrite << speedwayQualified << endl;
  raceFileWrite << ruralQualified << endl;
  raceFileWrite << urbanQualified << endl;
  raceFileWrite << qualified << endl;
  raceFileWrite << speedwayWon << endl;
  raceFileWrite << ruralWon << endl;
  raceFileWrite << urbanWon << endl;
  raceFileWrite << racesWon << endl;
  raceFileWrite << tournamentQual << endl;
  raceFileWrite << grandTouring << endl;
  raceFileWrite.close();
}
void raceProgressRead() {
  raceFileRead.open("racingTrophyProgress.txt");
  cout << "Now reading your progress from racingTrophyProgress.txt...\n";
  raceFileRead >> speedwayQualified1;
  raceFileRead >> speedwayQualified10;
  raceFileRead >> speedwayQualified50;
  raceFileRead >> ruralQualified1;
  raceFileRead >> ruralQualified10;
  raceFileRead >> ruralQualified50;
  raceFileRead >> urbanQualified1;
  raceFileRead >> urbanQualified10;
  raceFileRead >> urbanQualified50;
  raceFileRead >> qualified100;
  raceFileRead >> speedwayWon1;
  raceFileRead >> speedwayWon5;
  raceFileRead >> speedwayWon25;
  raceFileRead >> ruralWon1;
  raceFileRead >> ruralWon5;
  raceFileRead >> ruralWon25;
  raceFileRead >> urbanWon1;
  raceFileRead >> urbanWon5;
  raceFileRead >> urbanWon25;
  raceFileRead >> racesWon;
  raceFileRead >> tournamentQual1;
  raceFileRead >> tournamentQual3;
  raceFileRead >> tournamentQual5;
  raceFileRead >> tournamentQual7;
  raceFileRead >> tournamentQual9;
  raceFileRead >> tournamentQual11;
  raceFileRead >> tournamentQual13;
  raceFileRead >> tournamentQual15;
  raceFileRead >> tournamentWon5;
  raceFileRead >> grandTouring;
  raceFileRead.close();
}
int raceTrophyCounter() {
  int trophyCount =
      speedwayQualified1 + speedwayQualified10 + speedwayQualified50 +
      ruralQualified1 + ruralQualified10 + ruralQualified50 + urbanQualified1 +
      urbanQualified10 + urbanQualified50 + speedwayWon1 + speedwayWon5 +
      speedwayWon25 + ruralWon1 + ruralWon5 + ruralWon25 + urbanWon1 +
      urbanWon5 + urbanWon25 + tournamentQual1 + tournamentQual3 +
      tournamentQual5 + tournamentQual7 + tournamentQual9 + tournamentQual11 +
      tournamentQual13 + tournamentQual15 + tournamentWon5 + grandTouring;
  return trophyCount;
}
void raceProgressUpdate() {
  raceFileWrite.open("racingTrophyProgress.txt");
  cout << "Now writing your progress to racingTrophyProgress.txt...\n";
  raceFileWrite << speedwayQualified1 << endl;
  raceFileWrite << speedwayQualified10 << endl;
  raceFileWrite << speedwayQualified50 << endl;
  raceFileWrite << ruralQualified1 << endl;
  raceFileWrite << ruralQualified10 << endl;
  raceFileWrite << ruralQualified50 << endl;
  raceFileWrite << urbanQualified1 << endl;
  raceFileWrite << urbanQualified10 << endl;
  raceFileWrite << urbanQualified50 << endl;
  raceFileWrite << qualified100 << endl;
  raceFileWrite << speedwayWon1 << endl;
  raceFileWrite << speedwayWon5 << endl;
  raceFileWrite << speedwayWon25 << endl;
  raceFileWrite << ruralWon1 << endl;
  raceFileWrite << ruralWon5 << endl;
  raceFileWrite << ruralWon25 << endl;
  raceFileWrite << urbanWon1 << endl;
  raceFileWrite << urbanWon5 << endl;
  raceFileWrite << urbanWon25 << endl;
  raceFileWrite << racesWon50 << endl;
  raceFileWrite << tournamentQual1 << endl;
  raceFileWrite << tournamentQual3 << endl;
  raceFileWrite << tournamentQual5 << endl;
  raceFileWrite << tournamentQual7 << endl;
  raceFileWrite << tournamentQual9 << endl;
  raceFileWrite << tournamentQual11 << endl;
  raceFileWrite << tournamentQual13 << endl;
  raceFileWrite << tournamentQual15 << endl;
  raceFileWrite << tournamentWon5 << endl;
  raceFileWrite << grandTouring << endl;
  raceFileWrite.close();
}

void raceCalc() {

  int completedTrophies = 0; // counter for number of completed trophies

  int choice = 0;      // menu choice
  // system("clear"); // clears the screen to avoid clutter
  while (choice != 4) {
    goBackToRaceMain = false;
    cout << "Welcome! Do you want to:\n";
    cout << "1. Update your Racing progress?\n";
    cout << "2. View your current Racing progress?\n";
    cout << "3. Reset your Racing progress?\n";
    cout << "4. Go back to the main menu?\n";
    cout << "Enter your choice here: ";
    cin >> choice;
    cout << endl;

    switch (choice) {
    case 1: {
      system("clear");
      cout << "You have chosen to update your Racing progress.\n\n";
      //================ BEGIN PROMPTS ================//
      cout << "How many Speedway races have you qualified? ";
      cin >> speedwayQualified;
      if ((speedwayQualified >= 1) && (speedwayQualified < 10))
        speedwayQualified1 = true;
      else if ((speedwayQualified >= 10) && (speedwayQualified < 50)) {
        speedwayQualified1 = true;
        speedwayQualified10 = true;
      } else if (speedwayQualified >= 50) {
        speedwayQualified1 = true;
        speedwayQualified10 = true;
        speedwayQualified50 = true;
      }
      cout << "How many Rural races have you qualified? ";
      cin >> ruralQualified;
      if ((ruralQualified >= 1) && (ruralQualified < 10))
        ruralQualified1 = true;
      else if ((ruralQualified >= 10) && (ruralQualified < 50)) {
        ruralQualified1 = true;
        ruralQualified10 = true;
      } else if (ruralQualified >= 50) {
        ruralQualified1 = true;
        ruralQualified10 = true;
        ruralQualified50 = true;
      }
      cout << "How many Urban races have you qualified? ";
      cin >> urbanQualified;
      if ((urbanQualified >= 1) && (urbanQualified < 10))
        urbanQualified1 = true;
      else if ((urbanQualified >= 10) && (urbanQualified < 50)) {
        urbanQualified1 = true;
        urbanQualified10 = true;
      } else if (urbanQualified >= 50) {
        urbanQualified1 = true;
        urbanQualified10 = true;
        urbanQualified50 = true;
      }
      // Calculating total # of races qualified //
      qualified = speedwayQualified + ruralQualified + urbanQualified;
      if (qualified >= 100)
        qualified100 = true;
      else
        qualified100 = false;

      cout << "How many Speedway races have you won? ";
      cin >> speedwayWon;
      if ((speedwayWon >= 1) && (speedwayWon < 5))
        speedwayWon1 = true;
      else if ((speedwayWon >= 5) && (speedwayWon < 25)) {
        speedwayWon1 = true;
        speedwayWon5 = true;
      } else if (speedwayWon >= 25) {
        speedwayWon1 = true;
        speedwayWon5 = true;
        speedwayWon25 = true;
      }
      cout << "How many Rural races have you won? ";
      cin >> ruralWon;
      if ((ruralWon >= 1) && (ruralWon < 5))
        ruralWon1 = true;
      else if ((ruralWon >= 5) && (ruralWon < 25)) {
        ruralWon1 = true;
        ruralWon5 = true;
      } else if (ruralWon >= 25) {
        ruralWon1 = true;
        ruralWon5 = true;
        ruralWon25 = true;
      }
      cout << "How many Urban races have you won? ";
      cin >> urbanWon;
      if ((urbanWon >= 1) && (urbanWon < 5))
        urbanWon1 = true;
      else if ((urbanWon >= 5) && (urbanWon < 25)) {
        urbanWon1 = true;
        urbanWon5 = true;
      } else if (urbanWon >= 25) {
        urbanWon1 = true;
        urbanWon5 = true;
        urbanWon25 = true;
      }
      // Calculating total number of races won
      racesWon = speedwayWon + ruralWon + urbanWon;
      if (racesWon >= 50)
        racesWon50 = true;
      else
        racesWon50 = false;

      cout << "How many tournament races have you qualified? ";
      cin >> tournamentQual;
      if ((tournamentQual >= 1) && (tournamentQual < 3))
        tournamentQual1 = true;
      else if ((tournamentQual >= 3) && (tournamentQual < 5)) {
        tournamentQual1 = true;
        tournamentQual3 = true;
      } else if ((tournamentQual >= 5) && (tournamentQual < 7)) {
        tournamentQual1 = true;
        tournamentQual3 = true;
        tournamentQual5 = true;
        tournamentQual7 = true;
      } else if ((tournamentQual >= 7) && (tournamentQual < 9)) {
        tournamentQual1 = true;
        tournamentQual3 = true;
        tournamentQual5 = true;
        tournamentQual7 = true;
        tournamentQual9 = true;
      } else if ((tournamentQual >= 9) && (tournamentQual < 11)) {
        tournamentQual1 = true;
        tournamentQual3 = true;
        tournamentQual5 = true;
        tournamentQual7 = true;
        tournamentQual9 = true;
        tournamentQual11 = true;
      } else if ((tournamentQual >= 11) && (tournamentQual < 13)) {
        tournamentQual1 = true;
        tournamentQual3 = true;
        tournamentQual5 = true;
        tournamentQual7 = true;
        tournamentQual9 = true;
        tournamentQual11 = true;
        tournamentQual13 = true;
      } else if ((tournamentQual >= 13) && (tournamentQual < 15)) {
        tournamentQual1 = true;
        tournamentQual3 = true;
        tournamentQual5 = true;
        tournamentQual7 = true;
        tournamentQual9 = true;
        tournamentQual11 = true;
        tournamentQual13 = true;
        tournamentQual15 = true;
      }
      cout << "The next two questions ask whether or not you have the last two "
              "trophies.\n";
      char doesHave5tournament;
      cout << "Have you won 5 tournament races?\n";
      cout << "Enter Y if you have, or enter N if you haven't: ";
      cin >> doesHave5tournament;
      if (toupper(doesHave5tournament) == 'Y')
        tournamentWon5 = true;
      else
        tournamentWon5 = false;
      char doesHaveGrandTouring;
      cout << "Have you played each of the 12 races?\n";
      cout << "Enter Y if you have, or enter N if you haven't: ";
      cin >> doesHaveGrandTouring;
      if (toupper(doesHaveGrandTouring) == 'Y')
        grandTouring = true;
      else
        grandTouring = false;
      //================= END OF PROMPTS =================//

      raceProgressUpdate(); // sets all the trophy flags to be either true or
                            // false
      raceTrophyWrite();    // writes progress for each of the 10 trophy
                            // categories.
      int completedTrophies = raceTrophyCounter(); // adds all bool vars
      cout << "\nYou have " << completedTrophies << "/30 trophies.\n";
      char goBack;
      cout << "Would you like to return to the main Racing menu?\n";
      cout << "Enter 'Y' to go back, or enter 'N' to quit. ";
      cin >> goBack;
      if ((goBack == 'Y') || (goBack == 'y')) {
        cout << "Going back to the main menu...\n";
        system("clear");
        break;
      } else if ((goBack == 'N') || (goBack == 'n')) {
        cout << "Quitting...\n";
        exit(0);
      }
      break;
    }
    case 2: {
      int readChoice;
      system("clear");
      cout << "You have chosen to view your current Racing progress.\n\n";
      cout << "Would you like to:\n";
      cout << "1. View the total number of trophies completed?\n";
      cout << "2. View your progress for each trophy?\n";
      cout << "3. Go back to main Racing menu?\n";
      cout << "Enter your choice here: ";
      cin >> readChoice;
      while ((readChoice != 3) && (goBackToRaceMain == false)) {
        switch (readChoice) {
        case 1: {
          raceProgressRead(); // gets current progress from the file
          completedTrophies = raceTrophyCounter(); // tallies # of trophies
          cout << "You have " << completedTrophies << " trophies.\n";
          char goBack;
          cout << "Would you like to return to the main Racing menu?\n";
          cout << "Enter 'Y' to go back, or enter 'N' to quit. ";
          cin >> goBack;
          if ((goBack == 'Y') || (goBack == 'y')) {
            goBackToRaceMain = true;
            cout << "Going back to the main menu...\n";
            system("clear");
            break;
          } else if ((goBack == 'N') || (goBack == 'n')) {
            cout << "Quitting...\n";
            exit(0);
          }
        }
        case 2: {
          raceTrophyRead();
          //================ Speedway Races Qualified ================//
          cout << "\nYou have qualified " << speedwayQualified
               << " Speedway races.\n";
          if (speedwayQualified == 0)
            cout << "You need to qualify one Speedway race for your first "
                    "trophy.\n\n";
          else if ((speedwayQualified >= 1) && (speedwayQualified < 10))
            cout << "You need " << 10 - speedwayQualified
                 << " more for your next trophy.\n\n";
          else if ((speedwayQualified >= 10) && (speedwayQualified < 50))
            cout << "You need " << 50 - speedwayQualified
                 << " more for your next trophy.\n\n";
          else if (speedwayQualified >= 50)
            cout << "Congratulations! You have all 3 trophies for Speedway "
                    "races qualified!\n\n";
          //================ Rural Races Qualified ================//
          cout << "You have qualified " << ruralQualified << " Rural races.\n";
          if (ruralQualified == 0)
            cout << "You need to qualify one Rural race for your first "
                    "trophy.\n\n";
          else if ((ruralQualified >= 1) && (ruralQualified < 10))
            cout << "You need " << 10 - ruralQualified
                 << " more for your next trophy.\n\n";
          else if ((ruralQualified >= 10) && (ruralQualified < 50))
            cout << "You need " << 50 - ruralQualified
                 << " more for your next trophy.\n\n";
          else if (ruralQualified >= 50)
            cout << "Congratulations! You have all 3 trophies for Rural races "
                    "under par!\n\n";
          //================ Urban Races Qualified ================//
          cout << "You have qualified " << urbanQualified << " Urban races.\n";
          if (urbanQualified == 0)
            cout << "You need to qualify one Urban race for your first "
                    "trophy.\n\n";
          else if ((urbanQualified >= 1) && (urbanQualified < 10))
            cout << "You need " << 10 - urbanQualified
                 << " more for your next trophy.\n\n";
          else if ((urbanQualified >= 10) && (urbanQualified < 50))
            cout << "You need " << 50 - urbanQualified
                 << " more for your next trophy.\n\n";
          else if (urbanQualified >= 50)
            cout << "Congratulations! You have all 3 trophies for Urban races "
                    "qualified!\n\n";
          //================ Total Races Qualified ================//
          cout << "In total, you have qualified " << qualified << " races.\n";
          if (qualified < 100)
            cout << "You need to qualify " << 100 - qualified
                 << " more races for this trophy.\n\n";
          else
            cout << "Congratulations! You have earned the trophy for "
                    "qualifying 100 races!\n\n";
          //================ Speedway Races Won ================//
          cout << "You have won " << speedwayWon << " Speedway races.\n";
          if (speedwayWon == 0)
            cout << "You need to win one Speedway race for your first "
                    "trophy.\n\n";
          else if ((speedwayWon >= 1) && (speedwayWon < 5))
            cout << "You need " << 10 - speedwayWon
                 << " more for your next trophy.\n\n";
          else if ((speedwayWon >= 5) && (speedwayWon < 25))
            cout << "You need " << 25 - speedwayWon
                 << " more for your next trophy.\n\n";
          else if (speedwayWon >= 25)
            cout << "Congratulations! You have all 3 trophies for Speedway "
                    "race wins!\n\n";
          //================ Rural Races Won ================//
          cout << "You have won " << ruralWon << " Rural races.\n";
          if (ruralWon == 0)
            cout << "You need to win one Rural race for your first "
                    "trophy.\n\n";
          else if ((ruralWon >= 1) && (ruralWon < 5))
            cout << "You need " << 10 - ruralWon
                 << " more for your next trophy.\n\n";
          else if ((ruralWon >= 5) && (ruralWon < 25))
            cout << "You need " << 25 - ruralWon
                 << " more for your next trophy.\n\n";
          else if (ruralWon >= 25)
            cout << "Congratulations! You have all 3 trophies for Rural "
                    "race wins!\n\n";
          //================ Urban Races Won ================//
          cout << "You have won " << urbanWon << " Rural races.\n";
          if (urbanWon == 0)
            cout << "You need to win one Urban race for your first "
                    "trophy.\n\n";
          else if ((urbanWon >= 1) && (urbanWon < 5))
            cout << "You need " << 10 - urbanWon
                 << " more for your next trophy.\n\n";
          else if ((urbanWon >= 5) && (urbanWon < 25))
            cout << "You need " << 25 - urbanWon
                 << " more for your next trophy.\n\n";
          else if (urbanWon >= 25)
            cout << "Congratulations! You have all 3 trophies for Urban "
                    "race wins!\n\n";
          //================ Total Races Qualified ================//
          cout << "In total, you have won " << racesWon << " races.\n";
          if (racesWon < 50)
            cout << "You need to win " << 50 - racesWon
                 << " more races for this trophy.\n\n";
          else
            cout << "Congratulations! You have earned the trophy for "
                    "winning 50 races!\n\n";
          //================ Tournament Races Qualified ================//
          cout << "You have qualified " << tournamentQual
               << " Tournament races.\n";
          if (tournamentQual == 0)
            cout << "You need to qualify one Tournament race for your first "
                    "trophy.\n\n";
          else if ((tournamentQual >= 1) && (tournamentQual < 3))
            cout << "You need to qualify " << 3 - tournamentQual
                 << " more races for your next trophy.\n\n";
          else if ((tournamentQual >= 3) && (tournamentQual < 5)) {
            cout << "You need to qualify " << 5 - tournamentQual
                 << " more races for your next trophy.\n\n";
          } else if ((tournamentQual >= 5) && (tournamentQual < 7)) {
            cout << "You need to qualify " << 7 - tournamentQual
                 << " more races for your next trophy.\n\n";
          } else if ((tournamentQual >= 7) && (tournamentQual < 9)) {
            cout << "You need to qualify " << 9 - tournamentQual
                 << " more races for your next trophy.\n\n";
          } else if ((tournamentQual >= 9) && (tournamentQual < 11)) {
            cout << "You need to qualify " << 11 - tournamentQual
                 << " more races for your next trophy.\n\n";
          } else if ((tournamentQual >= 11) && (tournamentQual < 13)) {
            cout << "You need to qualify " << 13 - tournamentQual
                 << " more races for your next trophy.\n\n";
          } else if ((tournamentQual >= 13) && (tournamentQual < 15)) {
            cout << "You need to qualify " << 15 - tournamentQual
                 << " more races for your next trophy.\n\n";
          } else
            cout << "Congratulations! You have all 8 trophies for Tournament "
                    "races qualified!\n\n";
          if (grandTouring == false) {
            cout << "You have not raced in all 12 courses.\n";
            cout << "You need to race in all 12 courses for this trophy.\n\n";
          } else
            cout << "Congratulations! You have the trophy for racing in all 12 "
                    "courses!\n\n";

          raceProgressRead(); // gets current progress from the file
          completedTrophies = raceTrophyCounter(); // tallies # of trophies
          cout << "You have " << completedTrophies << " total trophies.\n\n";

          cout << "Would you like to return to the main Racing menu?\n";
          cout << "Enter 'Y' to go back, or enter 'N' to quit. ";
          char goBack;
          cin >> goBack;
          if ((goBack == 'Y') || (goBack == 'y')) {
            goBackToRaceMain = true;
            system("clear");
            break;
          } else if ((goBack == 'N') || (goBack == 'n')) {
            cout << "Quitting...\n";
            exit(0);
          }
          break;
        }
        case 3:
          goBackToRaceMain = true;
          system("clear");
        }
        break;
      }

      break;
    }
    case 3: {
      system("clear");
      cout << "You have chosen to reset your current progress.\n\n";
      char areYouSure;
      cout << "WARNING: This will zero out your progress. This cannot be "
              "undone.\nTo get your progress back, you will have to re-enter "
              "it manually.\nAre you sure you want to do that?\n";
      cout << "Enter 'Y' to continue, or enter 'N' to go back: ";
      cin >> areYouSure;
      if ((areYouSure == 'y') || (areYouSure == 'Y')) {
        cout << "Zeroing progress...\n";
        raceFileWrite.open("racingTrophyProgress.txt");
        for (int i = 1; i <= 30; i++)
          raceFileWrite << "0" << endl;
        raceFileWrite.close();
        raceFileWrite.open("racingCategoryProgress.txt");
        for (int j = 1; j <= 10; j++)
          raceFileWrite << "0" << endl;
        raceFileWrite.close();
        system("clear");
        cout << "Progress has been reset.\n";

      } else if ((areYouSure == 'n') || (areYouSure == 'N')) {
        system("clear");
        cout << "Progress will not be reset. Returning to main menu...\n\n";
        break;
      } else
        cout << "hey whoa wait you can't do that, that's illegal\n";
      break;
    }
    case 4: {
      cout << "Quitting...\n\n";
      break;
    }
    default:
      system("clear");
      cout << "Your choice must be between 1 and 4. Returning to main "
              "menu...\n\n";
    }
  }
}

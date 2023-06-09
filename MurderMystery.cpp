#include "MurderMystery.h"
#include <vector>
#include <iostream>

//Create the text color objets
string RESET = "\033[0m";
string GREEN = "\033[38;2;0;255;0m";
string RED = "\033[38;2;255;0;0m";
string BOLD = "\033[1m"; 

MurderMystery::MurderMystery(MurderMysteryData Case) {
  MasterCaseData = Case;
}

//Clears the console
void clearConsole() { 
  printf("\033c"); 
}

void waitForEnter() {  //method that waits for an enter to be pressed
  cin.ignore(); 
}

void MurderMystery::Introduction() { //introduction to murder mystery 
  waitForEnter();
  clearConsole();
  for (int i = 0; i < MasterCaseData.IntroductionData.size(); i++) {
    cout << MasterCaseData.IntroductionData[i] << endl << endl;
    if (i != MasterCaseData.IntroductionData.size() - 1) {
      cout << GREEN << "Press " << BOLD << "ENTER" << RESET << GREEN << " to continue onto the next section." << RESET; 
      waitForEnter();
      clearConsole();
    } else {
      clearConsole();
      SuspectBackgroundInformation();
      cout << BOLD << "Now that you've seen the suspects and understood some basic knowledge about them, it is up to you to do the rest of the investigation and determine who was behind the murder." << RESET << "\nYou are able to access the suspect information using the suspect tab in the menu.\n\n" << GREEN << "Press " << BOLD << "ENTER" << RESET << GREEN << " to continue onto the next section." << RESET;

      waitForEnter();
      clearConsole();
    }
    for (int j = 0; j <= i; j++) {
      cout << MasterCaseData.IntroductionData[j] << endl;
    }
  }
  clearConsole();
  ShowSelectionMenu();
}

void MurderMystery::ShowSelectionMenu() {
  clearConsole();
  int UserSelectionChoice; bool et = true;
//NOTE: We use the et while loop throughout this program to error trap the menu switch statements
  while (et) { ///error trap loop
    //Prints our menu options
  cout << BOLD << "\nSelect Your Option" << RESET << "\nType (" << BOLD << "1" << RESET << ") to open the Case Information \nType (" << BOLD << "2" << RESET << ") to open the Suspect Information \nType (" << BOLD << "3" << RESET << ") to view the Evidence Collection\nType (" << BOLD << "4" << RESET << ") to Solve\n\nMenu Choice :: "; cin >> UserSelectionChoice;

    //Following switch statment gives the user the main menu choices (1-4)
    switch (UserSelectionChoice) { 
      case 1:
        et = false;
        Introduction();
        break;
      case 2:
        et = false;
        ShowSuspectSelectionMenu();
        break;
      case 3:
        et = false;
        ShowEvidence();
        break;
      case 4:
        et = false;
        SolveMurderMystery();
        break;
      default: 
        clearConsole();
        cout << RED << "You did not enter a valid option for this menu.\n" << RESET;
        break;
    }
  }
}

void MurderMystery::ShowSuspectSelectionMenu() {
  clearConsole();
  int UserSelectionChoice; bool et2 = true;
  cout << BOLD << "\nSelect Your Option" << RESET << "\nType (" << BOLD << "1" << RESET << ") to open Suspect Background Information \nType (" << BOLD << "2" << RESET << ") to interrogate the Suspect \nType (" << BOLD << "3" << RESET << ") to search the Suspect's Place of Residence\nType (" << BOLD << "4" << RESET << ") to Return to the Menu\n\nMenu Choice :: "; cin >> UserSelectionChoice;

  while(et2){ //error trapping method
  switch (UserSelectionChoice) {
    case 1:
      clearConsole();
      waitForEnter();
      SuspectBackgroundInformation();
      ShowSuspectSelectionMenu();
      break;
    case 2:
      SuspectInterrogation();
      break;
    case 3:
      SearchSuspectHouse();
      break;
    case 4:
      ShowSelectionMenu();
      break;
    default: 
      clearConsole();
      cout << RED << "You did not enter a valid option for this menu.\n" << RESET;
      break;
  }
 }
}

//This is the menu function gives options for the user to see background info on the suspects
void MurderMystery::SuspectBackgroundInformation() {
  for (int i = 1; i <= MasterCaseData.SuspectData.size(); i++) {
    cout << BOLD << "Suspect #" << i << "\n\n" << RESET << "\t" << BOLD << MasterCaseData.SuspectData[i - 1].name << RESET << "\n\tDate of Birth :: " << MasterCaseData.SuspectData[i - 1].dob << " (Age " << MasterCaseData.SuspectData[i - 1].age << ")\n\tOccupation :: " << MasterCaseData.SuspectData[i - 1].job << "\n\tRelation to Victim :: " << MasterCaseData.SuspectData[i - 1].relation << "\n\n" << MasterCaseData.SuspectData[i - 1].description << "\n\n";

    if (i != MasterCaseData.SuspectData.size()) {
      cout << GREEN << "Press " << BOLD << "ENTER" << RESET << GREEN << " to continue onto the next section." << RESET;
      waitForEnter();
      clearConsole();
    } else {
      cout << GREEN << "Press " << BOLD << "ENTER" << RESET << GREEN << " to return to the main menu." << RESET;

      waitForEnter();
      clearConsole();
    }
    for (int j = 1; j <= i; j++) {
      cout << BOLD << "Suspect #" << j << "\n\n" << RESET << "\t" << BOLD << MasterCaseData.SuspectData[j - 1].name << RESET << "\n\tDate of Birth :: " << MasterCaseData.SuspectData[j - 1].dob << " (Age " << MasterCaseData.SuspectData[j - 1].age << ")\n\tOccupation :: " << MasterCaseData.SuspectData[j - 1].job << "\n\tRelation to Victim :: " << MasterCaseData.SuspectData[j - 1].relation << "\n\n" << MasterCaseData.SuspectData[j - 1].description << "\n\n";
    }
  }
  clearConsole();
}

//Function that allows you to interrogate the suspects
void MurderMystery::SuspectInterrogation() {
  int UserSelectionChoice; bool annuzzi = true;

  while (annuzzi) {

    clearConsole();
    
    cout << BOLD << "\nSelect Your Option" << RESET << endl;
  
    for (int i = 1; i <= MasterCaseData.SuspectData.size(); i++) {
      cout << "Type (" << BOLD << i << RESET << ") to interrogate " << MasterCaseData.SuspectData[i - 1].name << endl;
    }


    //Prints the menu
    cout << endl << "Menu Choice :: "; cin >> UserSelectionChoice;

    if (UserSelectionChoice > 0 && UserSelectionChoice <= MasterCaseData.SuspectData.size()) {
  
      clearConsole();
    
      cout << BOLD << "#1 ~ " << MasterCaseData.SuspectData[UserSelectionChoice - 1].interrogation[0][0] << "\n" << RESET;
      cout << BOLD << MasterCaseData.SuspectData[UserSelectionChoice - 1].name << " :: " << MasterCaseData.SuspectData[UserSelectionChoice - 1].interrogation[0][1] << "\n" << RESET;
    
      cout << "\n" << endl;
    
      cout << GREEN << "Press " << BOLD << "ENTER" << RESET << GREEN << " to continue onto the next section." << RESET;
        
      waitForEnter();
      clearConsole();
    
      cout << BOLD << "#1 ~ " << MasterCaseData.SuspectData[UserSelectionChoice - 1].interrogation[0][0] << "\n" << RESET;
      cout << BOLD << MasterCaseData.SuspectData[UserSelectionChoice - 1].name << " :: " << MasterCaseData.SuspectData[UserSelectionChoice - 1].interrogation[0][1] << "\n" << RESET;
    
      cout << "\n" << endl;
    
      cout << BOLD << "#2 ~ " << MasterCaseData.SuspectData[UserSelectionChoice - 1].interrogation[1][0] << "\n" << RESET;
      cout << BOLD << MasterCaseData.SuspectData[UserSelectionChoice - 1].name << " :: " << MasterCaseData.SuspectData[UserSelectionChoice - 1].interrogation[1][1] << "\n" << RESET;
    
      cout << "\n" << endl;
    
      cout << GREEN << "Press " << BOLD << "ENTER" << RESET << GREEN << " to go back to the suspect menu." << RESET;
        
      waitForEnter();
      clearConsole();
    
      ShowSuspectSelectionMenu();
    } else {
      clearConsole();
      cout << RED << "You did not enter a valid option for this menu.\n" << RESET;
    }
  }
  
  
}

//Code function that lets the user search suspect houses
void MurderMystery::SearchSuspectHouse() {
  int UserSelectionChoice; int SuspectHouse; bool et = true; bool robert_doran = true;

  while(robert_doran) {

    clearConsole();
  
    cout << BOLD << "\nSelect Your Option" << RESET << endl;
  
    for (int i = 1; i <= MasterCaseData.SuspectData.size(); i++) {
  cout << "Type (" << BOLD << i << RESET << ") to search " << MasterCaseData.SuspectData[i - 1].name << "'s Place of Residence" << endl;
}
  
    cout << "Type (" << BOLD << MasterCaseData.SuspectData.size()+1 << RESET << ") to Return to the Suspect Menu\n\nMenu Choice :: "; cin >> SuspectHouse;

    if (SuspectHouse == MasterCaseData.SuspectData.size() + 1) {
      ShowSuspectSelectionMenu();
      robert_doran = false;
    }

    if (SuspectHouse > 0 && SuspectHouse <= MasterCaseData.SuspectData.size() + 1) {

      while (robert_doran) {
        for (int i = 1; i <= MasterCaseData.SuspectData[SuspectHouse - 1].rooms.size(); i++) {
      cout << "Type (" << BOLD << i << RESET << ") to search the " << MasterCaseData.SuspectData[SuspectHouse - 1].rooms[i - 1][0] << endl;
    }
  
    cin >> UserSelectionChoice;
  
    if (--UserSelectionChoice < MasterCaseData.SuspectData[SuspectHouse - 1].rooms.size()) {
      robert_doran = false;
      clearConsole();
  
      cout << BOLD << "You decided to search the " << MasterCaseData.SuspectData[SuspectHouse - 1].rooms[UserSelectionChoice][0] << " at " << MasterCaseData.SuspectData[SuspectHouse - 1].name << "'s Place of Residence...\n\n" << RESET;
      
        waitForEnter();
        waitForEnter();
  
      if (MasterCaseData.SuspectData[SuspectHouse - 1].rooms[UserSelectionChoice][1] == "") {
        cout << RED << "You didn't find anything suspicious inside the " << MasterCaseData.SuspectData[SuspectHouse - 1].rooms[UserSelectionChoice][0] << ".\n\n\n" << RESET;
        cout << "\n\n" << GREEN << "Press " << BOLD << "ENTER" << RESET << GREEN << " to go back to the menu." << RESET;
        waitForEnter();
        clearConsole();
        SearchSuspectHouse();
      } else {  
        int count = 0;
        for (int i = 0; i < MasterCaseData.EvidenceFound.size(); i++) {
          if (MasterCaseData.EvidenceFound[i]) {
            count++;
          }
        }
  
        if (count >= MasterCaseData.EvidenceCapacity) {
          cout << BOLD << "\n\nAy caramba! " << RESET << "You don't have enough space to hold all of ze evidence! Consider removing some evidence for your evidence case so ze evidence can fit. (To remove evidence, go to the Evidence Menu.)";
          cout << "\n\n" << GREEN << "Press " << BOLD << "ENTER" << RESET << GREEN << " to go to the evidence menu." << RESET;
          waitForEnter();
          waitForEnter();
          clearConsole();
          ShowEvidence();
        } else {
          int evidenceText = stoi(MasterCaseData.SuspectData[SuspectHouse - 1].rooms[UserSelectionChoice][1]);
          SetEvidenceStatus(evidenceText, true);
          cout << GREEN << "You found a " << MasterCaseData.EvidenceStorage[evidenceText][0] << " inside the " << MasterCaseData.SuspectData[SuspectHouse - 1].rooms[UserSelectionChoice][0] << ".\n\n\n" << RESET;
          cout << GREEN << "Press " << BOLD << "ENTER" << RESET << GREEN << " to go back to the menu." << RESET;
          waitForEnter();
          clearConsole();
          SearchSuspectHouse();
        }
      }
    } else {
      clearConsole();
      cout << RED << "You did not enter a valid option for this menu.\n" << RESET;
    }

  }
  }
  }
}

void MurderMystery::SetEvidenceStatus(int index, bool status) {
  MasterCaseData.EvidenceFound[index] = status; 
}

void MurderMystery::ShowEvidence() {

  int UserSelectionChoice; bool et = true;

  while (et) {
    clearConsole();
    
    cout << BOLD << "Here is all the evidence you have collected. Type the number to view a brief description of the item.\n\n" << RESET; 
  
    for (int i = 1; i <= MasterCaseData.EvidenceStorage.size(); i++) {
      if (MasterCaseData.EvidenceFound[i - 1]) {
        cout << "(" << BOLD << i << RESET << ") " << MasterCaseData.EvidenceStorage[i - 1][0] << endl;
      } else {
        cout << "(" << BOLD << i << RESET << ") Item has not been found yet." << endl; 
      }
    }

    cout << "(" << BOLD << MasterCaseData.EvidenceStorage.size()+1 << RESET << ") to Return to the Menu" << endl << endl << "Menu Option :: ";
  
    cin >> UserSelectionChoice;
    
    if (--UserSelectionChoice < MasterCaseData.EvidenceStorage.size()) {
      if (MasterCaseData.EvidenceFound[UserSelectionChoice]) {
        cout << BOLD << "\n\nEvidence Collection (#" << UserSelectionChoice << ")\n" << RESET;
        cout << "• " << MasterCaseData.EvidenceStorage[UserSelectionChoice][0] << " •\n\n" << MasterCaseData.EvidenceStorage[UserSelectionChoice][1] << RESET;
        cout << "\n\n" << GREEN << "Press " << BOLD << "ENTER" << RESET << GREEN << " to go back to the menu." << RESET;
        waitForEnter();
        waitForEnter();
        ShowEvidence();
      } else {
        cout << RED << "\n\nYou haven't found this piece of evidence yet.";
        cout << "\n\n" << GREEN << "Press " << BOLD << "ENTER" << RESET << GREEN << " to go back to the menu." << RESET;
        waitForEnter();
        waitForEnter();
        ShowEvidence();
      }
    } else if (UserSelectionChoice == MasterCaseData.EvidenceStorage.size()) {
      ShowSelectionMenu();
    } else {
      clearConsole();
      cout << RED << "You did not enter a valid option for this menu.\n\n" << RESET;
    }
  }
}

void MurderMystery::SolveMurderMystery() {
  int UserSelectionChoice; bool et = true;

  while(et) {
    cout << BOLD << "After analyzing and investigating this mystery, it appears you are ready to solve this. You only have one attempt to put the suspect behind bars. Choose wisely.\n\n" << RESET;
    cout << BOLD << "\nSelect Your Option" << RESET << endl;
    for (int i = 1; i <= MasterCaseData.SuspectData.size(); i++) {
      cout << "Type (" << BOLD << i << RESET << ") if you think " << MasterCaseData.SuspectData[i - 1].name << " is guilty." << endl;
    }
    cout << "\nMenu Choice :: "; cin >> UserSelectionChoice;
  
    if (--UserSelectionChoice < MasterCaseData.SuspectData.size()) {
      et = false;
      clearConsole();
      cout << BOLD << "You selected that " << MasterCaseData.SuspectData[UserSelectionChoice].name << " was behind the murder...\n\n";
      cout << MasterCaseData.SuspectData[UserSelectionChoice].name << " is... ";
      waitForEnter();
      waitForEnter();
      cout << "\n\n" << GREEN << "Press " << BOLD << "ENTER" << RESET << GREEN << " to continue..." << RESET;
      clearConsole();
      cout << BOLD << "You selected that " << MasterCaseData.SuspectData[UserSelectionChoice].name << " was behind the murder...\n\n";
      cout << MasterCaseData.SuspectData[UserSelectionChoice].name << " is... ";
      
      waitForEnter();
      
      if (MasterCaseData.SuspectSolveIndex == UserSelectionChoice) {
        cout << GREEN << "GUILTY" << RESET << ".";
      } else {
        cout << RED << "NOT GUILTY" << RESET << ".";
      }
      
      waitForEnter();
    } else {
      
      waitForEnter();
      clearConsole();
      cout << RED << "You did not enter a valid option for this menu.\n\n" << RESET;
    }
  }
}

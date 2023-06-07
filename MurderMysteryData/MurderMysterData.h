#include <iostream>
#include <string>
#include <vector>
#include <array>

using namespace std;

// As this is the master transmission file between the main file and the MurderMystery class file, we make flexible templates that allow for no more restrictions on the amount of rooms, characters, evidence, and scenes. This is the Suspect structure, which will hold the data for one suspect.
struct Suspect {
  // The suspect's name, in full, as a string. The name is used to help identify who each character is.
  string name;
  // The suspect's description, in full, as a string. The description is seen in the introduction and character background tabs.
  string description;
  // The suspect's relation to the victim, in full, as a string. This is also seen alongside the description.
  string relation;

  string dob;
  int age;
  string job;
  // The suspect's rooms in their house. In this MurderMystery, there is a house searching feature. We use a vector of arrays to allow flexible room counts depending on the MurderMystery case and ensure that it is filled with arrays with two elements. The first element is the room title and the second element being the evidence found.
  vector<array<string, 2>> rooms;

  vector<array<string, 2>> interrogation;
};

// This is the main data function of the class. Here, we store all of the case's data plus allow for additional case information to be added to the current game.
struct MurderMysteryData {

  /* 
   * We include a title and credit system for each MurderMystery. 
   * The name will hold the value of the case name.
   * The author will hold the value of the case/lore writer.
   */

  string name;
  string author;

  /* 
   * Here is the core data of the player's current game.
   * We hold information on both the pre-set case information, but also information on the player's game data.
   * This can include the evidence collected and other statistics that are essential for game playablity.
   */

  // This vector will hold as many introduction messages, paragraphs, and other lines of text to help faciliate the introduction.
  vector<string> IntroductionData;
  // This vector will hold as many of the Suspect structures for the introduction and the suspect menu.
  vector<Suspect> SuspectData;
  // This integer is essential to the game. We use this integer to determine the index of the guilty individual.
  int SuspectSolveIndex;

  // This is the vector that will hold the names and descriptions of all evidence that is in the story.
  
  vector<array<string, 2>> EvidenceStorage;
 
// This is the bool vector that is a parallel vector to the EvidenceStorage (vector<string>) and holds whether the evidence has been found.
  vector<bool> EvidenceFound;
  // This is the amount of evidence that a single player can have at once. 
  int EvidenceCapacity;

};

MurderMysteryData CreateNewSave(int Case);

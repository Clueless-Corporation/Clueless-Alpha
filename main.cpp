//Andrew, Thijs, Frankie, Devyn
// Clueless
// June 6th, 2022
// No Extra (Not req)
// Githubathon 

#include <iostream>
#include "MurderMystery.h"
using namespace std;

//insertion sort for sorting the things
void insertionSort(string arr[], int n)
{
    int i, j; string key;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
 
        // Move elements of arr[0..i-1],
        // that are greater than key,
        // to one position ahead of their
        // current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

//main program
int main() {

	int choice;
	string yes = "a";

  // case name
  string caseName[1] = {"Clone in CompSci"};

  //title
		cout << "Hello detective, and welcome to Clueluess™. We've got some cases for you to analyze today. Select a case to begin. If you want to sort cases by name, please type 0." << endl; 
 
	while(yes == "a"){
    for (int i = 1; i <= 1; i++) {
      cout << i << ": " << caseName[i - 1] << endl;
    }
	cin >> choice; // add choice

    //sorting method

		if (choice == 0) {
      
      cout << "\n\n I have done the sorting for you! Here are the cases sorted by name: " << endl;
      insertionSort(caseName, 1);
    } 

    //case 1
    if(choice == 1) {
      yes = "b";
      MurderMysteryData Case;
      Case = CreateNewSave(1);
      MurderMystery Game = MurderMystery(Case);
      Game.Introduction();
		}
    // for exit
		if(choice == 2){
		yes = "b";
		}
		
	}
}


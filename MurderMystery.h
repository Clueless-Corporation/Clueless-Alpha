#ifndef MURDERMYSTERY_H
#define MURDERMYSTERY_H

#include <iostream>
#include <string>
#include <vector>
#include <array>

#include "MurderMysteryData/MurderMysteryData.h"

using namespace std;

// This is the header for the MurderMystery class.
class MurderMystery {
  // Here, we have our private variables and methods. 
  private:

    // Here is our MasterCaseData variable, which is what stores the case information and data.
    MurderMysteryData MasterCaseData;

  public:

    // We have our parameterized constructor here. Whenever the MurderMystery class is called, it takes in an input which is the case data and information.
    MurderMystery(MurderMysteryData Case);

    // Here we have the header for the Introduction method.
    void Introduction();
    // Here we have the header for the ShowSelectionMenu method.
    void ShowSelectionMenu();

    // Here we have the header for the ShowSuspectSelectionMenu method.
    void ShowSuspectSelectionMenu();
    // Here we have the header for the SuspectBackgroundInformation method.
    void SuspectBackgroundInformation();
    // Here we have the header for the SuspectInterrogation method.
    void SuspectInterrogation();
    // Here we have the header for the SearchSuspectHouse method.
    void SearchSuspectHouse();


    // Here we have the header for the SetEvidenceStatus method.
    void SetEvidenceStatus(int index, bool status);
    // Here we have the header for the ShowEvidence method.
    void ShowEvidence();
    // Here we have the header for the SolveMurderMystery method.
    void SolveMurderMystery();

    // We have our deconstructor located right here at the end of the MurderMystery class.
    ~MurderMystery(){};
};
 
#endif

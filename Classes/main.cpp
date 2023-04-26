#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>


string names[3] = {"USS Cool Boat", "USS Does Things", "USS Doesn't sink"};

class spaceship {
public:  
string name;
  int fuelLevel;
// class one = carrier, class two = destroyer, 3 = fighter
  int shipClass = 2;


  spaceship(string givenName = "USS Boat", int givenFuel = -1, int givenClass = -1) {
    // randomize here
    if (givenName == "UUS Boat") {
      // randomize here
      name = names[rand() % 3];
    } 
    else {
      name = givenName;
    }

    if (givenFuel == -1) {
      // randomize
      fuelLevel = rand() % 75 + 25;
    } 
    else {
      fuelLevel = givenFuel;
    }

    if (givenClass == -1) {
      shipClass = rand() % 3 + 1;
    } 
    else {
      shipClass = givenClass;
    }
  } // end of constructor

  void sitrep() {
    cout << "The spaceship" << name << " has " << fuelLevel << " fuel.\n";
    cout << "This ship is a ";

    switch (shipClass) {
      case 1: cout << "Carrier.\n";
      break;
      case 2: cout << "Destroyer.\n";
      break;
      case 3: cout << "Fighter.\n";
      break;
      default: cout << "\n[Unknown Ship]\n";
      break;
    }
  }
};

int main() {
  srand(time(0));
  cout << "Testing\n";
  //Problem: not repeating back
  spaceship apollo;                            // randomize everything
  spaceship falcon ("Millenium Falcon");       // randomize all but name
  spaceship bananaBoat ("Banana Boat", 45, 3); // randomizes nothing
}
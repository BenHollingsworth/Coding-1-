#include <iostream>
using namespace std;
#include <cstdlib> //this is the seeding rand()
#include <ctime>   // rand() and srand()

// Make treasure total at the end

// Your Assignment
// In a new program create the following functions:

// Create the following global variables:
// health
// totalTreasure
int health = 30;
int totalTreasure = 0;

// Story
// return type is void
void story() {
  cout << "Welcome adventurer to the cave of loot and Monsters!\n";
}

// AskYesNo
// One string argument named "question"
// return type is bool
bool askYesNo(string question) {
  while (true) {
    cout << question << " \n(y/n)\n";
    char input;
    cin >> input;

    if (input == 'y' || input == 'Y') {
      return true;
    } else if (input == 'n' || input == 'N') {
      return false;
    }
  }
} // End of Bool

// RollDie
// one int parameter named "sides" with a default value of 6
// return type is int
int rollDie(int sides = 6) {
  int roll = rand() % sides + 1; // get the remainder of a random number
  return roll;
}
// Ending
// return type is void
void ending() {
  
  cout << "you went home with " << totalTreasure  
       << " treasure you brought back.\n";
  
}

// Adventure
// return type is void or bool
// calls rollDie for attack, block, & treasure
// tells the player their health after the encounter
void adventure() {

  int attack = rollDie();
  int block = rollDie();

  if (block >= attack) {
    totalTreasure += rollDie(20);
    cout << "congrats, you blocked! You have " << health << " health left and "
         << totalTreasure << " treasure\n";
    return;

  } else if (block < attack) {
    cout << "You got hit for " << attack << " damage!\n";
    health -= attack;
    cout << "You have " << health << " health left.\n";
  }
}
// obviously main
// calls story,
// has a loop for adventure,
// checks for health
// calls ending

// The game should run as follows:
// The player is told a story prompting them to seek treasure on an adventure.
// The player is asked if they would like to go adventuring.
// If the player says yes, numbers for an enemy attack, their own block, and an
// amount of treasure are randomly generated. if the player's block is higher
// than the enemy attack, they have successfully blocked and they receive the
// treasure. However, if the attack is higher, that number is subtracted from
// their health and they do not get the treasure. The player is then told their
// health and amount of totalTreasure and asked if they would like to adventure
// again. They can continue to adventure as long as their health is greater than
// zero, at which point the ending is run and they are told that they are dead.
// If they instead quit before their health is zero, they are told how much
// health they have and how much treasure they ended up with.

int main() {
  srand(time(0));

  story();

  while (health > 0) {
    if (askYesNo("Would you like to play?") == true) {
      cout << "Lets go!\n";
      adventure();
    } else {
      ending();
      return 0;
    }
  }
}
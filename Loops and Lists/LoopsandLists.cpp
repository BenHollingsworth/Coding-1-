#include <cstdlib>
#include <ctime> //this is the seeding rand()
#include <iostream>
using namespace std;

// set up the game
int main() {

  //     seed the random number generator
  srand(time(0));

  // welcome the player
  cout << "Hello there player! and welcome to Ramble Random where your life is "
          "gambled to see if you live or not. Are you ready? Too bad! Here we "
          "Go!\n";

  //      int health = 10, attack, block, turns = 0
  int health = 10;
  int turn = 0;

  do {
    // start the loop

    int min = 0;
    int max = 4;

    // randomly generate numbers for attack (range = 0-4) and block (range =
    // 0-4)
    int attack = rand() % ((max - min) + 1) + min;
    int block = rand() % ((max - min) + 1) + min;

    // add 1 to turns
    turn += 1;

    //     start the encounter
    cout << "Here comes a goblin!\n";
    cout << "it attacks with " << attack << " while you block for " << block
         << " .\n";

    //         if block is greater or equal to attack, successful block
    if (attack <= block) {
      cout << "Congrats, you blocked it!\n";
    }
    //         otherwise, subtract attack value from health.
    else if (attack > block) {
      cout << "oow, you got hit for " << attack << " damage.\n";
      health -= attack;
      cout << "You have " << health << " left.\n";
    }

    // keep looping while health is greater than zero and fewer than 4 turns
    // have
    // happened
  } while (turn < 4 && health > 0);

  // if health is greater than 0, congratulate player
  if (health > 0) {
    cout << "Congrats, you lived with " << health
         << " health left, now get out.\n";
  }

  // otherwise, tell the player they're dead.
  else if (health <= 0) {
    cout << "Oh would you look at that, you're dead. Oh well!\n";
  }
  // Endpoint
}
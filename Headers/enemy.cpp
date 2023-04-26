#include "enemy.h"
#include <iostream>
using std::cout;

// define the constructor
//hS A DEFAULT VALUE FOR givenName.
enemy ::enemy(string givenName) {
  name = givenName;
  health = 10;
  cout << name << " has appeared!\n";
}

void enemy ::status() {// won't work without void
    cout
    << "My name is " << name << " and my health is ";
cout << health << ".\n";
}

void enemy ::changeHealth(int by) {
  health += by;

  if (health < 0) {health = 0;}
   else if (health > 10) {health = 10;}
  return;
}
int enemy::getHealth() { 
  return health;
    };


void enemy :: setName (string to) {
  name = to;
  if (to == "poop" && "Poop") {
    cout << "uh oh, stinky poo\n.";
    return;
  }
  name = to;
}

string enemy :: getName () {
  return name;
}
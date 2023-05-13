#include "enemy.h"
#include <iostream>
using namespace std;
// header and source file
// Header is the declaration (short)
// Source is the definition (long)

int main() {
  std::cout << "Hello World!\n";

  enemy duke("Duke"); // won't work without #include "enemy.h"
  duke.status();

  cout << "there was a storm! Duke lost 2 health.\n";
duke.changeHealth(-2);
  
  cout << "Duke's health is now " << duke.getHealth() << "\n.";

  cout << "What would you like to name Duke?\n";
  string input;
  cin >> input;

  duke.setName(input);
  cout << "Duke's name is now " << duke.getName() << ".\n";
}
#include <iostream>
using namespace std;
int main() {
  for (int loopCount = 0; true; loopCount += 1) {
    cout << loopCount << "\n";

    if (loopCount > 5)
      break; // end of the statement
  }          // end of loop

  if (true) {
    // An array can hold on type of variable
    // Variable type, varableName[size of array]
    string pizzaToppings[5];
    int scores[10];
    pizzaToppings[0] = "Cheese";
    pizzaToppings[1] = "Ham";
    pizzaToppings[2] = "Pineapple";
    pizzaToppings[3] = "Pepperoni";
    pizzaToppings[4] = "mushrooms";

    cout << pizzaToppings[0] << ".\n";
    cout << pizzaToppings[1] << ".\n";
    cout << pizzaToppings[2] << ".\n";
    cout << pizzaToppings[3] << ".\n";
    cout << pizzaToppings[4] << ".\n";

    cout << "Same thing but with a loop.\n";

    for (int i = 0; i < 5; i += 1) {
      cout << pizzaToppings[i] << ".\n";
    }
  }
  cout << "Hello World!\n";

  string name = "Bob Strud";
  //.size() = 12

  cout << name << "has the size of " << name.size() << ".\n";

  string favGames[100];

  int index = 0;

  while (true) {

    cout << "what would you like to do?\n";
    cout << "Type 'quit' to quit the program.\n";
    // cout << "Type 'bulkadd' to add a game.\n";
    cout << "Type 'add' to add a game.\n";
    cout << "Type 'show' to show the list.\n";
    cout << "Type 'editlast' to edit the last game added on the list.\n";
    cout << "Type 'edit' to edit the list.\n";

    // get input
    string input;
    cin >> input;

    if (input == "quit") {
      cout << "Shutting Down....\n";
      break; // or return 0
    }

    else if (input == "add") {
      cout << "What game would you like to add?\n";
      cin >> input;
      favGames[index] = input; // exmaple favGame[0] = Mario
      index += 1;              // index is now pointing at the next spot
    }                          //
    else if (input == "show") {
      cout << "Here is the list so far:\n";
      for (int i = 0; i < index; i += 1) {
        cout << i + 1 << ". " << favGames[i] << "\n"; // makes it so 0 = 1.
      }
    }
    // What if we messed up?
    else if (input == "edit") {
      cout << "what is the number of the name you want to change?\n";
      int numInput;
      cin >> numInput;

      cout << "what would you like to change " << favGames[numInput - 1]
           << " to?\n";
      cin >> input;
      favGames[numInput - 1] = input;
    }
    //
    else if (input == "editlast") {
      cout << "Last entry was " << favGames[index - 1] << ", change to what?\n";
      cin >> input;
      favGames[index - 1] = input;
    }
    // how to do a find input
    else if (input == "find") {
      cout << "What game do you want to find?\n";
      cin >> input;
      // look through the game to find the input
      for (int i = 0; i < index; i++) {
        if (input == favGames[i]) {
          cout << "Found it! What would you like to change it to?\n";
          cin >> input;
          favGames[i] = input;
          break;
        }

        if (i + 1 == index) {
          cout << "Sorry, I was not able to find " << input << ".\n";
        }
      } // end of for loop

    }

    else if (input == "addbulk") {
      cout << "What games would you like to add?\n";
      cout << "\nType 'done' when you are done.\n";
      bool done = false;
      while (done == false) {
        cin >> input;
        favGames[index] = input;
        index += 1;
        if (input == "done") {
          index -= 1;
          done = true;
          break;
        } //
        else {
          continue;
        }
      }
    }
    cout << "The games you've added are.\n";
    for (int i = 0; i < index; i += 1) {
      cout << i + 1 << ". " << favGames[i] << "\n";
    }

  } //
    // else {
    //   cout << "\n\n[Command not reconized]\n\n";
    // }
} // end of program
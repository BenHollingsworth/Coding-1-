#include <string>
// instead of using namespace std;
using std::string;

class enemy {
string name;
  int health;

public:
  enemy(string givenName = "Bad Guy Peat");
  void status();


void changeHealth(int by);
int getHealth();

void setName(string to);
string getName();

};
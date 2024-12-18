#include <iostream>
#include <map>
using namespace std;

int main() {
  map<string, int> people = { {"John", 32}, {"Adele", 45}, {"Bo", 29} };

  people["Turja"] = 22;
  people["Tanay"] = 24;
  people["CKB"] = 20;
 

  cout << "Jenny is: " << people.at("Turja") << "\n";
  cout << "Liam is: " << people.at("Tanay") << "\n";
  
  return 0;
}
#include <iostream>
#include <map>
using namespace std;

int main() {
  
  map<string, int> people = { {"John", 32}, {"Adele", 45}, {"Bo", 29} };
  cout << "Adele is: " << people.at("Adele") << "\n"; 
  cout << "Bo is: " << people.at("Bo") << "\n";

  return 0;
}

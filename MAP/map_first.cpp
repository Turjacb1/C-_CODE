#include <iostream>
#include <map>
using namespace std;

int main() {

  map<string, int> people = { {"John", 32}, {"Adele", 45}, {"Bo", 29} };

  cout << "John is: " << people["John"] << "\n"; 

  cout << "Adele is: " << people["Adele"] << "\n";

  return 0;
}
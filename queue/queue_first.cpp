#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<string>cars;
    cars.push("BMW");
    cars.push("ROLLS ROYELCE");
    cars.push("TESLA");


cars.pop();

cout<<cars.front();
}
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<string>cars={"BMW","TESLA","RANGE ROVER","PARDO"};

    for(string car :cars)
    {
        cout<<car<<"\n";

    }
    return 0;
}
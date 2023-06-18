#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string name;
    cout << "Whats your name?";
    cin >> name;
    
    string s = "You want a pizza, ?";
    s.insert(18, name);
    s += "\n Yes!";
    


    string::iterator i;
    for (i = s.begin(); i < s.end(); i++)
    {
        cout << *i;
    }
    
    return 0;

}
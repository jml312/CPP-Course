#include <iostream>
#include <sstream>
#include "challenge3.h"
using namespace std;

int main()
{
    cout << wordHunt("My what a lovely day", "hate    love") << endl;
    cout << wordHunt("StopThat!!", "!  ?  *") << endl;
    cout << wordHunt("Guess who is coming to dinner?", "Who Dinner") << endl;
    cout << wordHunt("One last example", "") << endl;
    return 0;
}

bool wordHunt(string first, string second) {
    // A string stream to get the words in the second string
    stringstream secondStream(second);
    // Loops while there is a word in the second string
    while (secondStream >> second) {
        // Checks if the second string is found in the first string and checks that both strings are identical
        if (first.find(second) != string::npos && first.substr(first.find(second), second.length()) == second) {
            return true;
        }
    }
    return false;
}


#include <iostream>
using namespace std;

int main(){
    // two input strings and the number to check
    string A;
    string B;
    int n;

    // Getting string A
    cout << "Enter a string: ";
    getline (cin, A);

    // Getting string B
    cout << "Enter a string: ";
    getline (cin, B);

    // Getting int n
    cout << "Enter an integer number: ";
    cin >> n;

    // Checking for invalid input
    if (!cin || n < 1) {
        return -1;
    }

    // if the strings are equal for the n letters
    bool equal = true;
    // The longer string length between A and B
    int longestStringLength = (A.length() > B.length()) ? A.length() : B.length();
    // Loops while i is less than n and i is less than the longest string length
    for (int i = 0; i < n && i < longestStringLength; i++) {
        // The loop breaks if the letters of the strings are different at an index
        if (A[i] != B[i]) {
            equal = false;
            break;
        }
    }
    // Prints True if the strings are equal or False if they are not
    equal ? cout << "True" : cout << "False";
    return 0;
}



#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file ("./question_2.txt");
    // If the file is found
    if (file) {
        // input string for words in the file
        string input;
        // total words in the file
        int totalWords = 0;
        // Reads words from the file while true
        while (file >> input) {
            totalWords++;
        }
        // prints the total number of words in the file
        cout << totalWords;
    }
    // If the file is not found
    else cout << "Could not open file";
    return 0;
}

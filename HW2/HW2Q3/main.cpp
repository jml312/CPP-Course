#include <iostream>
#include <sstream>
using namespace std;

string flipEveryXthWord(string sentence[], int size, int x);

int main() {
    string sentence[3] = {"This gnirts i", "s on", "t a test !drow"};
    cout << flipEveryXthWord(sentence, 3, 2);
}

string flipEveryXthWord(string sentence[], int size, int x) {
    // The sentence to be returned
    string flippedSentence;
    // Loops over the sentence array
    for (int i = 0; i < size; i++) {
        // The current index of the sentence array and a copy of that
        string curr = sentence[i], index = curr;
        // A counter for when to flip a word
        int counter = 1;
        // A string stream for the curr string
        stringstream stream(curr);
        // Loops while there is a space separated word in curr
        while (stream >> curr) {
            // Checks if the word should be flipped
            if (counter % x == 0) {
                // The start of the index to be flipped
                int currIndex = index.find(curr);
                // Reversed the word
                reverse(curr.begin(), curr.end());
                // Replaces the word in the index string
                index.replace(currIndex, curr.length(), curr);
            }
            counter++;
        }
        // Adds the index (with the proper words flipped) to the sentence string
        flippedSentence += index;
        // Resets the counter to 1
        counter = 1;
    }
    return flippedSentence;
}

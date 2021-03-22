#include <iostream>
using namespace std;

string buildSentence(char components[], int lc, int places[], int lp);

int main() {
    char components[] = {"ol,wrd eH"};
    int places[] = {8, 7, 1, 1, 0, 2, 6, 3, 0, 4, 1, 5};
    cout << buildSentence(components, 9 , places, 12);
    return 0;
}

string buildSentence(char components[], int lc, int places[], int lp) {
    // The sentence string to be returned
    string sentence;
    // Loops over the length of the places array and adds the corresponding component at the current place index to the sentence
    for (int i = 0; i < lp; i++) {
        sentence += components[places[i]];
    }
    return sentence;
}
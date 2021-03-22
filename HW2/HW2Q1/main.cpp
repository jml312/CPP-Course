#include <iostream>
using namespace std;

void codeCipher(const int amt, char* str, int n);

int main() {
    char sentence[] = "The answer to Question 1 is...!";
    codeCipher(5, sentence, 31);
    return 0;
}

void codeCipher(const int amt, char* str, int n) {
    // Loops over each character of the sentence
    for (int i = 0; i < n; i++) {
        // The current character
        char element = str[i];
        // Checks if the character is a letter
        if ((element >= 'A' && element <= 'Z') || (element >= 'a' && element <= 'z')) {
            // The ascii value of the character and the ascii start number (lower or upper case)
            int asciiValue = (int) element, asciiStartNumber;
            // Checks if the character is lower case or upper case and sets ascii start number
            asciiValue >= 97 && asciiValue <= 122 ? asciiStartNumber = 97 : asciiStartNumber = 65;
            str[i] = (char) ((((asciiValue - asciiStartNumber) + amt) % 26) + asciiStartNumber);
        }
    }
    cout << str << endl;
}

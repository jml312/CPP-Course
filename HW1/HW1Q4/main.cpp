#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main() {
    // The input stream
    ifstream inputFile ("./question_4.txt");
    // The output stream
    ofstream outputFile("question_4_transformed.txt");
    // If the file is found
    if (inputFile) {
        // The contents of the file
        string inputString;
        // Loops while a line in the file is found
        while (getline(inputFile, inputString)) {
            // A word in the line of the file
            string word;
            // A string stream for the input string
            stringstream stream(inputString);
            // Loops while a word in the line is found
            while (stream >> word) {
                // If a division sign is found in the word
                if (word.find('/') != string::npos) {
                    // The index of the division sign and the start and end indices of the before and after string
                    int divisionIndex = word.find('/'), start = divisionIndex, end = divisionIndex;
                    // Loops while the prior index is greater than or equal to zero
                    while (start - 1 >= 0) start--;
                    // Loops while the next index is less than the length of the string
                    while (end + 1 < word.length()) end++;
                    // The left side of the division sign string
                    string before = word.substr(start, divisionIndex - start);
                    // The right side of the division sign string
                    string after = word.substr(divisionIndex + 1, end - divisionIndex);
                    // Checks if the length of the word is greater than or equal to 2, the last character of the before string is a digit, and first character of the after string is a digit
                    if (word.length() > 2 &&
                        (before.at(before.length() - 1) >= '0' && before.at(before.length() - 1) <= '9') &&
                        (after.at(0) >= '0' && after.at(0) <= '9')) {
                        // Loops over the before string and erases any non-digit characters
                        for (int i = 0; i < before.length(); i++) {
                            if (!(before.at(i) >= '0' && before.at(i) <= '9')) {
                                before.erase(i, 1);
                                i++;
                            }
                        }
                        // Loops over the after string and erases any non-digit characters
                        for (int i = 0; i < after.length(); i++) {
                            if (!(after.at(i) >= '0' && after.at(i) <= '9')) {
                                after.erase(i, 1);
                                i++;
                            }
                        }
                        // The result of the division
                        string result = to_string(stoi(before) / stoi(after));
                        // The string to replace
                        string toReplace = before + "/" + after;
                        // Replaces the toReplace string with the result of the division
                        inputString.replace(inputString.find(toReplace), toReplace.length(), result);
                    }
                }
                // If a multiplication sign is found in the word
                if (word.find('*') != string::npos) {
                    // The index of the multiplication sign and the start and end indices of the before and after string
                    int multiplicationIndex = word.find('*'), start = multiplicationIndex, end = multiplicationIndex;
                    // Loops while the prior index is greater than or equal to zero
                    while (start - 1 >= 0) start--;
                    // Loops while the next index is less than the length of the string
                    while (end + 1 < word.length()) end++;
                    // The left side of the multiplication sign string
                    string before = word.substr(start, multiplicationIndex - start);
                    // The right side of the multiplication sign string
                    string after = word.substr(multiplicationIndex + 1, end - multiplicationIndex);
                    // Checks if the length of the word is greater than or equal to 2, the last character of the before string is a digit, and first character of the after string is a digit
                    if (word.length() > 2 &&
                        (before.at(before.length() - 1) >= '0' && before.at(before.length() - 1) <= '9') &&
                        (after.at(0) >= '0' && after.at(0) <= '9')) {
                        // Loops over the before string and erases any non-digit characters
                        for (int i = 0; i < before.length(); i++) {
                            if (!(before.at(i) >= '0' && before.at(i) <= '9')) {
                                before.erase(i, 1);
                                i++;
                            }
                        }
                        // Loops over the after string and erases any non-digit characters
                        for (int i = 0; i < after.length(); i++) {
                            if (!(after.at(i) >= '0' && after.at(i) <= '9')) {
                                after.erase(i, 1);
                                i++;
                            }
                        }
                        // The result of the multiplication
                        string result = to_string(stoi(before) * stoi(after));
                        // The string to replace
                        string toReplace = before + "*" + after;
                        // Replaces the toReplace string with the result of the multiplication
                        inputString.replace(inputString.find(toReplace), toReplace.length(), result);
                    }
                }
                // If a subtraction sign is found in the word
                if (word.find('-') != string::npos) {
                    // The index of the subtraction sign and the start and end indices of the before and after string
                    int subtractionIndex = word.find('-'), start = subtractionIndex, end = subtractionIndex;
                    // Loops while the prior index is greater than or equal to zero
                    while (start - 1 >= 0) start--;
                    // Loops while the next index is less than the length of the string
                    while (end + 1 < word.length()) end++;
                    // The left side of the subtraction sign string
                    string before = word.substr(start, subtractionIndex - start);
                    // The right side of the subtraction sign string
                    string after = word.substr(subtractionIndex + 1, end - subtractionIndex);
                    // Checks if the length of the word is greater than or equal to 2, the last character of the before string is a digit, and first character of the after string is a digit
                    if (word.length() > 2 &&
                        (before.at(before.length() - 1) >= '0' && before.at(before.length() - 1) <= '9') &&
                        (after.at(0) >= '0' && after.at(0) <= '9')) {
                        // Loops over the before string and erases any non-digit characters
                        for (int i = 0; i < before.length(); i++) {
                            if (!(before.at(i) >= '0' && before.at(i) <= '9')) {
                                before.erase(i, 1);
                                i++;
                            }
                        }
                        // Loops over the after string and erases any non-digit characters
                        for (int i = 0; i < after.length(); i++) {
                            if (!(after.at(i) >= '0' && after.at(i) <= '9')) {
                                after.erase(i, 1);
                                i++;
                            }
                        }
                        // The result of the subtraction
                        string result = to_string(stoi(before) - stoi(after));
                        // The string to replace
                        string toReplace = before + "-" + after;
                        // Replaces the toReplace string with the result of the subtraction
                        inputString.replace(inputString.find(toReplace), toReplace.length(), result);
                    }
                }
                // If a addition sign is found in the word
                if (word.find('+') != string::npos) {
                    // The index of the addition sign and the start and end indices of the before and after string
                    int additionIndex = word.find('+'), start = additionIndex, end = additionIndex;
                    // Loops while the prior index is greater than or equal to zero
                    while (start - 1 >= 0) start--;
                    // Loops while the next index is less than the length of the string
                    while (end + 1 < word.length()) end++;
                    // The left side of the addition sign string
                    string before = word.substr(start, additionIndex - start);
                    // The right side of the addition sign string
                    string after = word.substr(additionIndex + 1, end - additionIndex);
                    // Checks if the length of the word is greater than or equal to 2, the last character of the before string is a digit, and first character of the after string is a digit
                    if (word.length() > 2 &&
                        (before.at(before.length() - 1) >= '0' && before.at(before.length() - 1) <= '9') &&
                        (after.at(0) >= '0' && after.at(0) <= '9')) {
                        // Loops over the before string and erases any non-digit characters
                        for (int i = 0; i < before.length(); i++) {
                            if (!(before.at(i) >= '0' && before.at(i) <= '9')) {
                                before.erase(i, 1);
                                i++;
                            }
                        }
                        // Loops over the after string and erases any non-digit characters
                        for (int i = 0; i < after.length(); i++) {
                            if (!(after.at(i) >= '0' && after.at(i) <= '9')) {
                                after.erase(i, 1);
                                i++;
                            }
                        }
                        // The result of the addition
                        string result = to_string(stoi(before) + stoi(after));
                        // The string to replace
                        string toReplace = before + "+" + after;
                        // Replaces the toReplace string with the result of the addition
                        inputString.replace(inputString.find(toReplace), toReplace.length(), result);
                    }
                }
            }
            // Writing to the output file
            outputFile << inputString << endl;
        }
        // Closing files
        inputFile.close();
        outputFile.close();
    }
    // If the file is not found
    else cout << "Could not open file";
    return 0;
}

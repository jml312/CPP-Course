#include <iostream>
using namespace std;

int main() {
    // The expression string
    string expression;
    do {
        // Getting the expression
        cout << "Enter an expression: ";
        getline(cin, expression);

        // Checks if the expression is empty
        if (expression.empty() || expression.at(0) == '/' || expression.at(0) == '*' || expression.at(0) == '-' || expression.at(0) == '+') return 0;

        // Checks for any invalid spaces or letters in the expression
        for (char element : expression) {
            if (!(element >= '0' && element <= '9') && !(element == '/' || element == '*' || element == '-' || element == '+') || element == ' ') {
                return 0;
            }
        }

        // Checks for any operators that are side by side in the expression
        for (int i = 0; i < expression.length() - 1; i++) {
            if ((expression.at(i) == expression.at(i + 1) && (expression.at(i) == '/' || expression.at(i) == '*' || expression.at(i) == '-' || expression.at(i) == '+'))) {
                return 0;
            }
        }
        // division
        // Loops while the expression contains a division sign
        while (expression.find('/') != string::npos) {
            // The index of the division sign
            int index = expression.find('/');
            // Initializing the start and end indexes of the operation
            int start = index, end = index;
            // Loops while the prior index is a digit and the prior index is greater than or equal to zero
            while (start - 1 >= 0 && expression.at(start - 1) >= '0' && expression.at(start - 1) <= '9') start--;
            // Loops while the next index is a digit and the next index is less than or equal to zero
            while (end + 1 < expression.length() && expression.at(end + 1) >= '0' && expression.at(end + 1) <= '9') end++;
            // The string result of the division
            string result = to_string(
                    stoi(expression.substr(start, index - start)) / stoi(expression.substr(index + 1, end - index)));
            // Exits the program if the result is negative
            if (stoi(result) < 0) return 0;
            // Replaces the operation with the result
            expression.replace(start, (end - start) + 1, result);
        }

        // multiplication
        // Loops while the expression contains a multiplication sign
        while (expression.find('*') != string::npos) {
            // The index of the multiplication sign
            int index = expression.find('*');
            // Initializing the start and end indexes of the operation
            int start = index, end = index;
            // Loops while the prior index is a digit and the prior index is greater than or equal to zero
            while (start - 1 >= 0 && expression.at(start - 1) >= '0' && expression.at(start - 1) <= '9') start--;
            // Loops while the next index is a digit and the next index is less than or equal to zero
            while (end + 1 < expression.length() && expression.at(end + 1) >= '0' && expression.at(end + 1) <= '9') end++;
            // The string result of the multiplication
            string result = to_string(
                    stoi(expression.substr(start, index - start)) * stoi(expression.substr(index + 1, end - index)));
            // Exits the program if the result is negative
            if (stoi(result) < 0) return 0;
            // Replaces the operation with the result
            expression.replace(start, (end - start) + 1, result);
        }

        // subtraction
        // Loops while the expression contains a subtraction sign
        while (expression.find('-') != string::npos) {
            // The index of the subtraction sign
            int index = expression.find('-');
            // Initializing the start and end indexes of the operation
            int start = index, end = index;
            // Loops while the prior index is a digit and the prior index is greater than or equal to zero
            while (start - 1 >= 0 && expression.at(start - 1) >= '0' && expression.at(start - 1) <= '9') start--;
            // Loops while the next index is a digit and the next index is less than or equal to zero
            while (end + 1 < expression.length() && expression.at(end + 1) >= '0' && expression.at(end + 1) <= '9') end++;
            // The string result of the subtraction
            string result = to_string(
                    stoi(expression.substr(start, index - start)) - stoi(expression.substr(index + 1, end - index)));
            // Exits the program if the result is negative
            if (stoi(result) < 0) return 0;
            // Replaces the operation with the result
            expression.replace(start, (end - start) + 1, result);
        }

        // addition
        // Loops while the expression contains an addition sign
        while (expression.find('+') != string::npos) {
            // The index of the addition sign
            int index = expression.find('+');
            // Initializing the start and end indexes of the operation
            int start = index, end = index;
            // Loops while the prior index is a digit and the prior index is greater than or equal to zero
            while (start - 1 >= 0 && expression.at(start - 1) >= '0' && expression.at(start - 1) <= '9') start--;
            // Loops while the next index is a digit and the next index is less than or equal to zero
            while (end + 1 < expression.length() && expression.at(end + 1) >= '0' && expression.at(end + 1) <= '9') end++;
            // The string result of the addition
            string result = to_string(
                    stoi(expression.substr(start, index - start)) + stoi(expression.substr(index + 1, end - index)));
            // Exits the program if the result is negative
            if (stoi(result) < 0) return 0;
            // Replaces the operation with the result
            expression.replace(start, (end - start) + 1, result);
        }
        cout << expression << "\n\n";
    }
    while(true);
    return 0;
}

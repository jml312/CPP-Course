#include <iostream>
using namespace std;

void moveD(int* block, int width, int height, int target);

int main() {
    int block[4][5] = {{1, 2, 0, 0, 5}, {2, 2, 9, 8, 4}, {3, 2, 9, 0, 4}, {6, 6, 6, 6, 0}};
    moveD(&block[0][0], 5, 4, 0);
    return 0;
}

void moveD(int* block, int width, int height, int target) {
    // Loops over all indices of the block array
    for (int i = 0; i < width * height; i++) {
        // Checks if the current index is a target number
        if (block[i] == target) {
            // Stores the current index
            int index = i;
            // Loops while the index plus the width is less than width times the height minus one
            // Adds the width to the index on each iteration
            while ((index + width) <= (width * height) - 1) {
                index += width;
            }
            // Swapping the value at the target index (i) with the value at index
            int tmp = block[i];
            block[i] = block[index];
            block[index] = tmp;
        }
        // Checks if a new line should be printed
        if (i % width == 0 && i != 0) cout << endl;
        cout << block[i] << " ";
    }
}
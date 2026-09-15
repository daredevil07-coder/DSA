// 🔢 Subchapter 2.7 — Maximum and Minimum Elements
// 📌 2.7.5 Finding the Second Smallest Element

// The second smallest element is the second-lowest distinct value in an array. 🔍

// Example:

// int arr[6] = {12, 5, 30, 8, 2, 20};

// Output:

// Smallest: 2
// Second Smallest: 5


#include <iostream>
using namespace std;

int main() {

    int arr[6] = {12, 5, 30, 8, 2, 20};

    int minimum = arr[0];
    int secminimum = arr[0];

    for (int i = 1; i < 6; i++) {

        if (arr[i] < minimum) {
            secminimum = minimum;
            minimum = arr[i];
        }

        else if (arr[i] > minimum && arr[i] < secminimum) {
            secminimum = arr[i];
        }
    }

    cout << "Minimum: " << minimum << endl;
    cout << "Second Minimum: " << secminimum;

    return 0;
}

// ⏱️ Complexity

// Time Complexity: O(n) — one loop traverses the array.

// Space Complexity: O(1) — only a few variables are used.

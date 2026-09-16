// 🔢 Subchapter 2.8 — Counting & Frequency
// 🎯 Topic: Print Elements That Occur Only Once
// 🧠 Meaning

// An element that appears exactly one time is called a unique-occurrence element.

// Example:

// int arr[9] = {5, 10, 5, 20, 30, 10, 40, 20, 50};

// Frequencies:

// 5  → 2
// 10 → 2
// 20 → 2
// 30 → 1
// 40 → 1
// 50 → 1




#include <iostream>
using namespace std;

int main() {
    int arr[9] = {5, 10, 5, 20, 30, 10, 40, 20, 50};

    bool visit[9] = {false};

    for (int i = 0; i < 9; i++) {

        if (visit[i] == true) {
            continue;
        }

        int count = 1;

        for (int j = i + 1; j < 9; j++) {

            if (arr[i] == arr[j]) {
                count++;
                visit[j] = true;
            }
        }

        if (count == 1) {
            cout << arr[i] << endl;
        }
    }

    return 0;
}
// 🎯 Topic: Print All Least Frequent Elements

// Previously, we printed only the first least frequent element. Now we will print all elements having the minimum frequency.

// Example
// int arr[7] = {10, 20, 10, 30, 20, 10, 40};

// Frequencies:

// 10 → 3
// 20 → 2
// 30 → 1
// 40 → 1

// Minimum frequency is:

// 1

#include <iostream>
using namespace std;

int main() {
    int arr[7] = {10, 20, 10, 30, 20, 10, 40};

    bool visit[7] = {false};

    int minFrequency = 8;

    // Find minimum frequency
    for (int i = 0; i < 7; i++) {

        if (visit[i] == true) {
            continue;
        }

        int count = 1;

        for (int j = i + 1; j < 7; j++) {

            if (arr[i] == arr[j]) {
                count++;
                visit[j] = true;
            }
        }

        if (count < minFrequency) {
            minFrequency = count;
        }
    }

    // Reset visit array
    for (int i = 0; i < 7; i++) {
        visit[i] = false;
    }

    cout << "Least frequent elements: ";

    // Print all least frequent elements
    for (int i = 0; i < 7; i++) {

        if (visit[i] == true) {
            continue;
        }

        int count = 1;

        for (int j = i + 1; j < 7; j++) {

            if (arr[i] == arr[j]) {
                count++;
                visit[j] = true;
            }
        }

        if (count == minFrequency) {
            cout << arr[i] << " ";
        }
    }

    cout << endl;

    return 0;
} 
// 🎯 Topic: Least Frequent Element
// 🧠 Meaning

// The least frequent element is the value that appears the fewest number of times.

// Example:

// int arr[7] = {10, 20, 10, 30, 20, 10, 40};

// Frequencies:

// 10 → 3
// 20 → 2
// 30 → 1
// 40 → 1

// The least frequency is 1.


#include <iostream>
using namespace std;

int main() {
    int arr[7] = {10, 20, 10, 30, 20, 10, 40};

    bool visit[7] = {false};

    int minFrequency = 8;
    int leastFrequent = 0;

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
            leastFrequent = arr[i];
        }
    }

    cout << "Least frequent element = "
         << leastFrequent << endl;

    cout << "Frequency = "
         << minFrequency << endl;

    return 0;
}
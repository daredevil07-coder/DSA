// 🔥 Find the Most Frequent Element

// Example:

// arr = {10, 20, 10, 30, 20, 10, 40};

// Output:

// Most frequent element = 10
// Frequency = 3

#include <iostream>
using namespace std;

int main() {
    int arr[7] = {10, 20, 10, 30, 20, 10, 40};

    bool visit[7] = {false};

    int maxFrequency = 0;
    int mostFrequent = 0;

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

        if (count > maxFrequency) {
            maxFrequency = count;
            mostFrequent = arr[i];
        }
    }

    cout << "Most frequent element = " << mostFrequent << endl;
    cout << "Frequency = " << maxFrequency << endl;

    return 0;
}

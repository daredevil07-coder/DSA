// 2.6 Binary Search
// 🧩 Practice Question 1 — Search for an Element

// Task: Find whether the target exists using Binary Search.

// Array: [10, 20, 30, 40, 50, 60, 70]
// Target: 50

#include <iostream>
using namespace std;

int main() {
    int arr[7] = {10, 20, 30, 40, 50, 60, 70};
    int target = 20;

    int low = 0;
    int high = 6;

    bool found = false;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == target) {
            cout << "Element found at index " << mid;
            found = true;
            break;
        }
        else if (arr[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if (!found) {
        cout << "Element not found";
    }

    return 0;
}



// Index:   0   1   2   3   4   5   6
// Value:  10  20  20  20  30  40  50
// Target = 20

// The target appears at:

// Indexes: 1, 2, 3
// So the answer is:

// First occurrence = 1
// Last occurrence  = 3
// Range            = [1, 3]

#include <iostream>
using namespace std;

int main() {
    int arr[7] = {10, 20, 20, 30, 30, 40, 50};
    int target = 30;

    int low = 0;
    int high = 6;
    int first = -1;
    int last = -1;

    // Find first occurrence
    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == target) {
            first = mid;
            high = mid - 1;
        }
        else if (arr[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    low = 0;
    high = 6;

    // Find last occurrence
    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == target) {
            last = mid;
            low = mid + 1;
        }
        else if (arr[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    cout << "First occurrence: " << first << endl;
    cout << "Last occurrence: " << last << endl;
    cout << "Range: [" << first << ", " << last << "]" << endl;

    return 0;
}

// We will continue from there. Ignore the insertion practice for now.

// 🎯 Practice Question: Find the Closest Element
// int arr[7] = {10, 20, 30, 40, 50, 60, 70};
// int target = ;5
// Your task 🧠

// Find:



#include <iostream>
using namespace std;

int main() {
    int arr[7] = {10, 20, 30, 40, 50, 60, 70};
    int target = 5;

    int low = 0;
    int high = 6;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    int left = arr[low - 1];
    int right = arr[low];

    int leftDifference = target - left;
    int rightDifference = right - target;

    if (leftDifference <= rightDifference) {
        cout << "Closest element: " << left << endl;
    }
    else {
        cout << "Closest element: " << right << endl;
    }

    return 0;
}
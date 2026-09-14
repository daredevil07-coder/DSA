// 2.6 Binary Search
// 🧩 Practice Question 6 — Count Occurrences of an Element

// Now we combine what you learned about first occurrence + last occurrence. 🔥

// Given:

// Array:   10 20 20 20 30 40
// Index:    0  1  2  3  4  5
// Target: 20

// 🎯 Task: Use Binary Search to find how many times 20 occurs.

// Expected output:

// 20 occurs 3 times


#include <iostream>
using namespace std;

int main() {

    int arr[6] = {10, 20, 20, 20, 30, 40};
    int target = 20;

    int low = 0;
    int high = 5;

    int count = 0;

    while (low <= high) {

        int mid = (low + high) / 2;

        if (arr[mid] == target) {

            count++;

            int left = mid - 1;
            while (left >= 0 && arr[left] == target) {
                count++;
                left--;
            }

            int right = mid + 1;
            while (right <= high && arr[right] == target) {
                count++;
                right++;
            }

            break;
        }
        else if (arr[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    cout << target << " occurs "
         << count << " times" << endl;

    return 0;
}
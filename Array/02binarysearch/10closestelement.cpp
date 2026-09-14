// 🔍 Subchapter 2.6.9 — Binary Search: Find the Closest Element

// We will continue from there. Ignore the insertion practice for now.

// 🎯 Practice Question: Find the Closest Element
// int arr[7] = {10, 20, 30, 40, 50, 60, 70};
// int target = 36;
// Your task 🧠

// Find:


// #include <iostream>
// using namespace std;

// int main() {
//     int arr[7] = {10, 20, 30, 40, 50, 60, 70};
//     int target = 47;

//     int low = 0;
//     int high = 6;

//     while (low <= high) {
//         int mid = (low + high) / 2;

//         if (arr[mid] == target) {
//             cout << "Closest element: " << arr[mid] << endl;
//             return 0;
//         }
//         else if (arr[mid] < target) {
//             low = mid + 1;
//         }
//         else {
//             high = mid - 1;
//         }
//     }

//     if (high < 0) {
//         cout << "Closest element: " << arr[low] << endl;
//     }
//     else if (low > 6) {
//         cout << "Closest element: " << arr[high] << endl;
//     }
//     else {
//         int leftDifference;
//         int rightDifference;

//         if (arr[high] > target) {
//             leftDifference = arr[high] - target;
//         }
//         else {
//             leftDifference = target - arr[high];
//         }

//         if (arr[low] > target) {
//             rightDifference = arr[low] - target;
//         }
//         else {
//             rightDifference = target - arr[low];
//         }

//         if (leftDifference <= rightDifference) {
//             cout << "Closest element: " << arr[high] << endl;
//         }
//         else {
//             cout << "Closest element: " << arr[low] << endl;
//         }
//     }

//     return 0;
// }




#include <iostream>
using namespace std;

int main() {
    int arr[7] = {10, 20, 30, 40, 50, 60, 70};
    int target = 47;

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
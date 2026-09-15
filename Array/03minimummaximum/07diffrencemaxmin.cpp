// 📌 2.7.6 Finding the Difference Between Maximum and Minimum

// The difference is calculated as:

// Difference=Maximum−Minimum
// Example
// int arr[6] = {12, 5, 30, 8, 2, 20};

// Maximum = 30

// Minimum = 2

// Therefore:

// Difference = 30 - 2 = 28



#include <iostream>
using namespace std;

int main() {
    int arr[6] = {12, 5, 30, 8, 2, 20};

    int maximum = arr[0];
    int minimum = arr[0];

    for (int i = 1; i < 6; i++) {
        if (arr[i] > maximum) {
            maximum = arr[i];
        }

        if (arr[i] < minimum) {
            minimum = arr[i];
        }
    }

    cout << "Maximum: " << maximum << endl;
    cout << "Minimum: " << minimum << endl;
    cout <<"diffrence is : "<<maximum - minimum << endl;

    return 0;
}
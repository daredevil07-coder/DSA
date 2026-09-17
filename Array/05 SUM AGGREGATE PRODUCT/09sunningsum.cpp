// 🟢 Practice Question

// Write a C++ program that prints the running sum of:

// int arr[5] = {2, 4, 6, 8, 10};




#include <iostream>
using namespace std;

int main() {
    int arr[5] = {2, 4, 6, 8, 10};

    int sum = 0;

    for (int i = 0; i < 5; i++) {
        sum += arr[i];
        cout << sum << " ";
    }

    return 0;
}
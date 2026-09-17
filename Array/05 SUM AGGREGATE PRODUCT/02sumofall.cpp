// 🟢 Practice 1 — Calculate Sum of All Elements

// Now you write the C++ code yourself. 💻

// Problem

// Given an array:

// int arr[6] = {12, 5, 8, 20, 3, 7};

// Calculate the sum of all elements and print the result.

// Expected output
// 55


#include <iostream>
using namespace std;

int main(){
    int arr[6] = {12, 5, 8, 20, 3, 7};

    int sum = 0;

    for (int i=0; i<6; i++){
        sum += arr[i];
    }

    cout << sum;
}
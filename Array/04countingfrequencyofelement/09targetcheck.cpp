// 🔢 Subchapter 2.8 — Counting and Frequency
// 📌 2.8.9 Check Whether a Target Exists

// Now we will check whether a target value is present in the array. 🔍

// Example
// int arr[6] = {10, 20, 30, 40, 50, 60};
// int target = 40;

// Expected output:

// Target exists

// If the target is 25:



#include <iostream>
using namespace std;

int main(){
    int arr[6] = {10, 20, 30, 40, 50, 60};
    int target = 40;

    bool found = false;

    for (int i = 0 ;i<6; i++){
        if ( arr[i]==target){
            cout<<"target exists"<<endl;
            found = true;
        }
    }
    if (!found){
        cout<<"Target does not exist"<<endl;
    }
}

// ⏱️ Complexity

// Best-case Time Complexity: O(1) — target is at the beginning.

// Worst-case Time Complexity: O(n) — target is at the end or absent.

// Space Complexity: O(1) — only one Boolean v
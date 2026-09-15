// 📘 Chapter 2 — ARRAYS
// 🔢 Subchapter 2.8 — Counting and Frequency
// 📌 2.8.3 Counting Zeros

// Zero is neither positive nor negative.


// int arr[7] = {-5, 10, 0, 8, -2, 7, 0};

// There are two zeros:

// Zero count: 2


#include <iostream>
using namespace std;

int main(){
    int arr[7] = {-5, 10, 0, 8, -2, 7, 0};
    int zeros = 0;

    for (int i=0; i<7;i++){
        if (arr[i]==0){
            zeros++;
        }
    }
    cout << "zeros: "<< zeros;


}


// ⏱️ Complexity

// Time Complexity: O(n) — each element is checked once.

// Space Complexity: O(1) — only one counter variable is used.
// 📘 Chapter 2 — ARRAYS
// 🔢 Subchapter 2.8 — Counting and Frequency
// 📌 2.8.2 Counting Negative Numbers
// A negative number is less than zero.

// int arr[7] = {-5, 10, 0, 8, -2, 7, 0};

// Negative numbers are:

// -5, -2

// Expected count:

// Negative count: 2




#include <iostream>
using namespace std;

int main(){
    int arr[7] = {-5, 10, 0, 8, -2, 7, 0};
    int neg = 0;

    for (int i=0; i<7;i++){
        if (arr[i]<0){
            neg++;
        }
    }
    cout << "negativecount: "<< neg;


}
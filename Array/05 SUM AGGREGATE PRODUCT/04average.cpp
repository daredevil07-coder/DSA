// 🟢 Practice 3 — Calculate Average of All Elements
// Problem

// Given the array:

// int arr[5] = {10, 20, 15, 25, 30};

// Calculate and print the average of all elements.


#include <iostream>
using namespace std;

int main(){
    int arr[5] = {10, 20, 15, 25, 30};

    int sum = 0;
    int n =0;

    for(int i=0;i<5;i++){
        sum += arr[i];
        n++;

    }

    double average = sum/n;
    cout << average << endl;
}
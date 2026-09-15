// 🔢 Subchapter 2.7 — Maximum and Minimum Elements
// 📌 2.7.2 Finding the Minimum Element

// The minimum element is the smallest value in an array.

// Example:

// int arr[5] = {10, 25, 7, 40, 15};

// The minimum element is:

// 7


#include <iostream>
using namespace std;

int main(){

    int arr[5] = {10,15,7,40,15 };
    int target = 7;

    int minimum = arr[0];

    for (int i=1 ; i<5; i++){
        if (arr[i]<minimum){
            minimum = arr[i];
        }
    }
    cout << "minimum: "<< minimum;

}
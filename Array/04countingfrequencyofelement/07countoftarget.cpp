// 💻 Practice Question 6

// Write a C++ program for:

// int arr[8] = {10, 20, 30, 20, 40, 20, 50, 20};
// int target = 20;

// Expected output:

// Target count: 4

#include <iostream>
using namespace std;

int main(){
    int arr[8] = {10, 20, 30, 20, 40, 20, 50, 20};
    int target = 20;

    int count = 0;

    for (int i = 0; i<8;i++){
        if(arr[i]==target){
            count++;
            

        }
    }
    cout<<"count: "<< count << endl;

}

// Complexity
// Time Complexity: O(n) — every element is checked once.

// Space Complexity: O(1) — only the counter variable is used.
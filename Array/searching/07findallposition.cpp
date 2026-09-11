// 🔥 Practice 7 — Find All Positions

// Given:

// int arr[8] = {10, 20, 20, 30, 20, 40, 20, 50};
// int target = 20;

// Print every index where 20 occurs.

#include <iostream>
using namespace std;

int main(){
    int arr[8] = {10, 20, 20, 30, 20, 40, 20, 50};
    int target = 20;

    for (int i=0;i<8;i++){
        if (arr[i]==target){
            cout<< "position "<<i<<endl;
        }
    }
}
// 🔥 Practice 8 — Existence Check

// Given:

// int arr[7] = {15, 8, 23, 42, 10, 7, 19};
// int target = 25;

// Determine whether 25 exists.

#include <iostream>
using namespace std;

int main(){
    int arr[7] = {15, 8, 23, 42, 10, 7, 19};
    int target = 25;

    bool found = false;

    for (int i=0;i<7;i++){

        if (arr[i]==target){
            cout<<"element found"<<endl;
            found = true;
            break;

        }
    }
    if(!found){
        cout<<"element not found"<<endl;
    }
}
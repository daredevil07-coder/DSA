// 🧠 Practice 9 — Missing Value

// Given:

// int arr[6] = {5, 12, 8, 20, 15, 7};
// int target = 20;

// Write a program that:

// Searches for 20
// If found → print its index
// If not found → print "Element not found"


#include <iostream>
using namespace std;

int main(){
    int arr[6] = {5, 12, 8, 20, 15, 7};
    int target = 20;
    bool found = false;

    for (int i=0;i<6;i++){
        if (arr[i]==target){
            // found =true;
            cout<<"index: "<<i<<endl;
            found = true;
            break;
        }
    }
    if(!found){
        cout<<"element not found"<<endl;
    }
}
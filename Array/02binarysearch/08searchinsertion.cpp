// 2.6 Binary Search
// 🧩 Practice Question 7 — Search Insertion Position

// Now we’ll learn a very useful Binary Search problem. 🚀

// 🎯 Task

// Given this sorted array:

// Array: 10 20 30 40 50
// Index:  0  1  2  3  4

// Target:

// 25

// The target 25 is not present.

// We need to find:

// Where should 25 be inserted so the array remains sorted?

// Expected answer:

// Insertion position: 2

#include <iostream>
using namespace std;

int main(){
    int arr[5]= {10,20,30,40,50};
    int target = 25;

    bool found = false;

    int low = 0;
    int high = 4;



    while(low<=high){
        int mid = (low + high)/2;
        if (arr[mid]==target){

            cout <<"element  found"<<endl;
            found = true;
            break;
        }
        else if(arr[mid]<target){
            low = mid+1;

        }
        else{
            high = mid -1;
        }
        cout <<"insertion position: "<<low << endl;
    
    

}
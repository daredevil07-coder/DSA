// 🧩 Practice Question 2 — Find the Index of an Element

// Given:

// Array: 5 10 15 20 25 30 35 40
// Target: 25

// 🎯 Task: Use Binary Search to find and print the index of 25


#include <iostream>
using namespace std;

int main(){

    int arr[8] = {5,10,15,20,25,30,35,40};
    int target = 25;

    int low = 0;
    int high = 7;

    bool found = false;

    while (low<=high){
        int mid = (low + high)/2;
        if (arr[mid] == target){
            cout << "elment at index: "<<mid<< endl;
            found = true;
            break;
        }
        else if(arr[mid]< target){
            low = mid +1;
        }
        else{
            high = mid -1;
        }
    }
    if (!found){
        cout <<"element not found"<<endl;
    }

}
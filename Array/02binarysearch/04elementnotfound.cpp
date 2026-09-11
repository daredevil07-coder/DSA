// 🔎 Chapter 2 — Arrays
// 2.6 Binary Search
// 🧩 Practice Question 3 — Element Not Found

// Given:

// Array: 10 20 30 40 50 60 70
// Target: 45

#include <iostream>
using namespace std;

int main(){

    int arr[7] = {10,20,30,40,50,60,70};
    int target = 45;

    int low = 0;
    int high = 6;

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
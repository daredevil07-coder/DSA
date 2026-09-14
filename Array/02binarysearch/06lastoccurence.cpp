// 🧩 Practice Question 5 — Last Occurrence of a Duplicate

// Now we do the opposite of First Occurrence. 🔥

// Given:

// Array:   10 20 20 20 30 40
// Index:    0  1  2  3  4  5
// Target: 20
// kn ef

#include <iostream>
using namespace std;

int main(){
    int arr[6]={10,20,20,20,30,40};
    int target = 20;

    int low = 0 ;
    int high = 5;


    int result = -1;

    while(low<=high){
        int mid = (low + high)/2;
        if(arr[mid]==target){
            result = mid;
            low = mid+1;

        }
        else if (arr[mid]<target){
            low = mid + 1;

        }
        else{
            high = mid-1;
        }


    }
    if (result != -1){
        cout <<"elment found at : "<<result << endl;
    }
}
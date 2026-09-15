// 💻 Practice Question 1: Find Maximum

// Write a C++ program for:

// int arr[5] = {10, 25, 7, 40, 15};

// Expected output:

// Maximum = 40

#include <iostream>
using namespace std;


int main(){

    int arr[5] = {10, 25, 7, 40, 15};
    int target = 40;

    int maximum = arr[0];

    for (int i = 1;i<5;i++){
        if(arr[i]>target){
            maximum = arr[i];
        }
    }
    cout << "maximum: "<< maximum;

}
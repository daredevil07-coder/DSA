// 💻 Practice Question 1: Count Positive Numbers

// Write a C++ program for:

// int arr[7] = {-5, 10, 0, 8, -2, 7, 0};

// Expected output:

// Positive count: 3


#include <iostream>
using namespace std;

int main(){
    int arr[7] = {-5, 10, 0, 8, -2, 7, 0};
    int positivecount = 0;

    for (int i=0; i<7;i++){
        if (arr[i]>0){
            positivecount++;
        }
    }
    cout << "positivecount: "<< positivecount;


}
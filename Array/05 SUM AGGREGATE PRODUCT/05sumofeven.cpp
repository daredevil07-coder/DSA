// Write a C++ program to calculate the sum of only the even elements.

// Given array
// int arr[6] = {10, 15, 20, 7, 8, 11};
// Expected output
// 38



#include <iostream>
using namespace std;

int main() {
    int arr[6] = {10, 15, 20, 7, 8, 11};

    int sum = 0;

    for (int i=0;i<6;i++){
        if(arr[i]%2==0){
            sum += arr[i];
        }
    }

    cout << sum << endl;

    return 0;
}
// Now write a program to calculate the sum of only the odd elements.

// Given array
// int arr[6] = {10, 15, 20, 7, 8, 11};
// Expected output
// 33



#include <iostream>
using namespace std;

int main() {
    int arr[6] = {10, 15, 20, 7, 8, 11};

    int sum = 0;

    for (int i=0;i<6;i++){
        if(arr[i]%2!=0){
            sum += arr[i];
        }
    }

    cout << sum << endl;

    return 0;
}
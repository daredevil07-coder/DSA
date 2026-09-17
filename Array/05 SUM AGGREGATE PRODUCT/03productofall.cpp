// 🟢 Practice 2 — Product of All Elements

// Given:

// int arr[5] = {2, 3, 4, 5, 1};

// Calculate the product of all elements.

// Expected output:

// 120


#include <iostream>
using namespace std;

int main(){
    int arr[5] = {2, 3, 4, 5, 1};

    int product = 1;

    
    for (int i=0; i<5; i++){
        product *= arr[i];
    }

    cout << product;
}

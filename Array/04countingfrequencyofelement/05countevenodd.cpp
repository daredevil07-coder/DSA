// 💻 Practice Question 4

// Write a C++ program to count both even and odd numbers:

// int arr[6] = {10, 7, 4, 9, 2, 5};

// Expected output:

// Even count: 3
// Odd count: 3


#include <iostream>
using namespace std;

int main(){
    int arr[6] = {10, 7, 4, 9, 2, 5};

    int even=0;
    int odd = 0;

    for (int i=0; i<6; i++){
        if (arr[i]%2 ==0){
            even++;
        }
        if (arr[i]%2 != 0){
            odd++;

        }
    }
    cout << "even: "<<even << endl;
    cout << "odd: "<<odd << endl;
}
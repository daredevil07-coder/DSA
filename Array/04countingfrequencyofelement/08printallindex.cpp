// 📌 2.8.8 — Print All Indexes of a Target

// Example:

// int arr[8] = {10, 20, 30, 20, 40, 20, 50, 20};
// int target = 20;

// Expected output:

// Indexes: 1 3 5 7


#include <iostream>
using namespace std;

int main(){
    int arr[8] = {10, 20, 30, 20, 40, 20, 50, 20};
    int target = 20;

    int count = 0;

    for (int i = 0; i<8;i++){
        if(arr[i]==target){
            count++;
            cout<<"index: "<< i << endl;

        }
    }
     cout << "Total count: " << count << endl;

     return 0;
    

}
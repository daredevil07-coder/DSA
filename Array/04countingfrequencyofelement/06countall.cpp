// 🔢 Subchapter 2.8 — Counting and Frequency
// 📌 2.8.5 Counting Positive, Negative, and Zero Togethe

// int arr[8] = {-5, 10, 0, 8, -2, 7, 0, -9};

// Positive count: 3
// Negative count: 3
// Zero count: 2


#include <iostream>
using namespace std;

int main(){
    int arr[8] = {-5, 10, 0, 8, -2, 7, 0, -9};

    int positive=0;
    int negative = 0;
    int zero = 0;

    for (int i=0; i<8; i++){
        if (arr[i]>0){
            positive++;
        }
        if (arr[i]<0){
            negative++;

        }
        if(arr[i]==0){
            zero++;

        }
    }
    cout << "even: "<<positive << endl;
    cout << "odd: "<<negative<< endl;
    cout << "zero: "<<zero << endl;
}
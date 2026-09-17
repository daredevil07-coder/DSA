// int arr[7] = {10, -5, 20, -7, 0, 8, -2};

// We need two separate sums:


// Expected result

// Positive sum = 10 + 20 + 8 = 38

// Negative sum = -5 + (-7) + (-2) = -14


#include <iostream>
using namespace std;

int main() {
    int arr[7] = {10, -5, 20, -7, 0, 8, -2};

    int positivesum = 0;
    int negativesum = 0;

    for (int i=0;i<7;i++){
        if(arr[i]>0){
            positivesum+= arr[i];
        }

        if(arr[i]<0){
            negativesum +=arr[i];
        }
        if(arr[i]==0){

        }
    }

    cout << positivesum << endl;
    cout <<negativesum<<endl;

    return 0;
}
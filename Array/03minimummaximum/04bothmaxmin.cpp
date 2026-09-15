// 🔢 Subchapter 2.7 — Maximum and Minimum Elements
// 📌 2.7.3 Finding Both Maximum and Minimum

// Now we will find the largest and smallest elements in the same loop. 🚀

// Example:

// int arr[6] = {12, 5, 30, 8, 2, 20};

// Expected output:

// Maximum: 30
// Minimum: 2


#include <iostream>
using namespace std;

int main(){
    int arr[6] = {12, 5, 30, 8, 2, 20};

    int maximum = arr[0];

    for (int i = 1;i<6;i++){
        if(arr[i]>maximum){
            maximum = arr[i];
        }
    }
    cout << "maximum: "<< maximum<< endl;

    int minimum = arr[0];

    for (int i=1 ; i<6; i++){
        if (arr[i]<minimum){
            minimum = arr[i];
        }
    }
    cout << "minimum: "<< minimum;
}


#include <iostream>
using namespace std;

int main() {
    int arr[6] = {12, 5, 30, 8, 2, 20};

    int maximum = arr[0];
    int minimum = arr[0];

    for (int i = 1; i < 6; i++) {
        if (arr[i] > maximum) {
            maximum = arr[i];
        }

        if (arr[i] < minimum) {
            minimum = arr[i];
        }
    }

    cout << "Maximum: " << maximum << endl;
    cout << "Minimum: " << minimum;

    return 0;
}
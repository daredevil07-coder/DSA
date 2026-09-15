// 🔢 Subchapter 2.7 — Maximum and Minimum Elements
// 📌 2.7.4 Finding the Second Largest Element

// The second largest element is the second-highest value in an array.

// Example:

// int arr[6] = {12, 5, 30, 8, 2, 20};

// Output:

// Largest: 30
// Second Largest: 20


#include <iostream>
using namespace std;


int main(){

    int arr[6] = {12, 5, 30, 8, 2, 20};

    int maximum = arr[0];
    int secmaximum=arr[0];

    for (int i=1; i<6;i++){
        if (arr[i]>maximum){
            maximum = arr[i];
        }
        if (arr[i]<maximum && arr[i]>secmaximum){
            secmaximum=arr[i];
        }
    }

    cout << "maximum: " << maximum << endl;
    cout << "secmaximum: " << secmaximum << endl;



}

#include <iostream>
using namespace std;

int main() {

    int arr[6] = {12, 5, 30, 8, 2, 20};

    int maximum = arr[0];
    int secmaximum = arr[0];

    for (int i = 1; i < 6; i++) {

        if (arr[i] > maximum) {
            secmaximum = maximum;
            maximum = arr[i];
        }

        else if (arr[i] < maximum && arr[i] > secmaximum) {
            secmaximum = arr[i];
        }
    }

    cout << "Maximum: " << maximum << endl;
    cout << "Second Maximum: " << secmaximum;

    return 0;
}


// I DEEED only one mistake not updateing the secmaximum 


// Your original code:

// Time Complexity: O(n) — not O(n²), because there is only one loop.

// Space Complexity: O(1) — only maximum and secmaximum variables are used
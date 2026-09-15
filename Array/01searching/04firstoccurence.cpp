// int arr[7] = {10, 20, 30, 20, 40, 20, 50};
// int target = 20;

// First occurrence found at index: 1


#include <iostream>
using namespace std;

int main() {
    int arr[7] = {10, 20, 30, 20, 40, 20, 50};
    int target = 20;

    bool found = false;

    for (int i = 0; i < 7; i++) {
        if (arr[i] == target) {
            cout << "First occurrence found at index: " << i << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Element not found" << endl;
    }

    return 0;
}
// 2.8.10 Frequency of Every Element Using a Visited Array

// We’ll use this array:

// int arr[7] = {10, 20, 10, 30, 20, 10, 40};

// Expected output:

// 10 → 3
// 20 → 2
// 30 → 1
// 40 → 1




#include <iostream>
using namespace std;

int main() {
    int arr[7] = {10, 20, 10, 30, 20, 10, 40};

    bool visited[7] = {false};

    for (int i = 0; i < 7; i++) {

        if (visited[i] == true) {
            continue;
        }

        int count = 1;

        for (int j = i + 1; j < 7; j++) {

            if (arr[i] == arr[j]) {
                count++;
                visited[j] = true;
            }
        }

        cout << arr[i] << " = " << count << endl;
    }

    return 0;
}
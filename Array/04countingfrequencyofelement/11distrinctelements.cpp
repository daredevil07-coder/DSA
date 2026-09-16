// Write a C++ program to count distinct elements:

// int arr[8] = {10, 20, 10, 30, 20, 40, 30, 50};

// Expected output:

// Distinct elements = 5


#include <iostream>
using namespace std;

int main() {
    int arr[8] = {10, 20, 10, 30, 20, 40, 30, 50};

    bool visit[8] = {false};
    int distinct = 0;

    for (int i = 0; i < 8; i++) {

        if (visit[i] == true) {
            continue;
        }

        distinct++;

        for (int j = i + 1; j < 8; j++) {

            if (arr[i] == arr[j]) {
                visit[j] = true;
            }
        }
    }

    cout << "Distinct elements = " << distinct << endl;

    return 0;
}
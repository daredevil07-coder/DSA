#include <iostream>
using namespace std;





int main() {
    int arr[5] = {2, 4, 6, 8, 10};
    int prefix[5];

    int sum = 0;

    for (int i = 0; i < 5; i++) {
        sum += arr[i];
        prefix[i] = sum;
    }

    for (int i = 0; i < 5; i++) {
        cout << prefix[i] << " ";
    }

    return 0;
}
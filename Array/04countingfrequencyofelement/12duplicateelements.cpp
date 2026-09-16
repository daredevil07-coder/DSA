// ✍️ Practice Question

// Write a C++ program for:

// int arr[9] = {5, 10, 5, 20, 30, 10, 40, 20, 50};

// Expected output:

// Duplicate elements = 3
// 💡 Hint


#include <iostream>
using namespace std;

int main() {
    int arr[9] = {5, 10, 5, 20, 30, 10, 40, 20, 50};

    bool visit[9]={false};

    int duplicate = 0;

    for(int i=0;i<9;i++){
        if (visit[i]==true){
            continue;
        }
        int count = 1;

        for (int j= i+1; j<9;j++){
            if (arr[i]==arr[j]){
                count++;

            }
        }

        if (count >1){
            duplicate++;
        }

    }
    cout << "duplicate: "<< duplicate<<endl;


} 
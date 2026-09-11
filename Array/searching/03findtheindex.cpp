// Array = [15, 8, 23, 42, 10, 7]
// Target = 42


// Your program should output:

// Element found at index: 3


// #include <iostream>
// using namespace std;

// int main(){
//     int arr[6]={15,8,23,42,10,7};
//     int target = 42;

//     bool found = false;

//     for (int i=0;i<6;i++){
//         if (arr[i]== target){
//             cout<<"elements is found"<< i<<endl;
//             found = true;
//             break;
        
//         }

        
//     }

//     if (!found){
//         cout << "not found"<<endl;
//     }
//     return 0;

// }

#include <iostream>
using namespace std;

int main() {
    int arr[6] = {15, 8, 23, 42, 10, 7};
    int target = 42;

    bool found = false;

    for (int i = 0; i < 6; i++) {
        if (arr[i] == target) {
            cout << "Element is found at index: " << i << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Element not found" << endl;
    }

    return 0;
}
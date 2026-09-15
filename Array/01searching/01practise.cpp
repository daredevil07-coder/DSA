// Array = [10, 25, 7, 40, 15]
// Target = 40

// we have to find the target in the 
// array and we dont know where it is so we
//  have to search for it.


#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int target = 40;

    bool found = false;

    for (int i = 0; i < 5; i++) {
        if (arr[i] == target) {
            cout << "Element found at index: " << i << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Element not found" << endl;
    }

    return 0;
}




// mistake 

// first i was getting this

// Element not found
// Element not found
// Element not found
// Element found at index: 3


// i did not use a boolean variable to check 

// we have to give a flag so that if we find the
//  element we can break the loop and not 
//  print "Element not found" multiple times.



// int main(){
//     int arr[5] = {10, 20, 30, 40, 50};
//     int target = 40;

//     for (int i = 0; i < 5; i++){
//         if(arr[i] == target){
//             cout << "Element found at index: " << i << endl;
//             break;
//         }

//         else{
//             cout << "Element not found" << endl;
//         }
//     }
   
// }
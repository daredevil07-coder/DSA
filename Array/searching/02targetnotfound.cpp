// Array = [10, 20, 30, 40, 50]
// Target = 35

// here we will see if our is not present in the array 



#include <iostream>
using namespace std;    

int main(){
    int arr[5] = {10, 20, 30, 40, 50};
    int target = 35;

    bool found = false;

    for (int i = 0; i < 5; i++){

        if(arr[i] == target){
            cout << "Element found at index: " << i << endl;
            found = true;
            break;
        }
    }
    if (!found){
        cout << "Element not found" << endl;
    }

}
// # 🔎 Chapter 2 — Arrays
// # 2.6 Binary Search
// # 🧩 Practice Question 4 — First Occurrence of a Duplicate

// # Now let's make it more interesting. 😎

// # Given:

// # Array: 10 20 20 20 30 40 50
// # Target: 20

// # 🎯 Task: Use Binary Search to find the first occurrence of 20.


#include <iostream>
using namespace std;

int main(){

    int arr[6]={10,20,20,30,40,50};
    int target = 20;

    int low = 0;
    int high = 5;

    int answer = -1;

    while(low <=high) {

        int mid = (low + high)/2;
        if (arr[mid]==target){
            answer = mid;
            high = mid -1;
            
           


        }
        else if(arr[mid]< target){
            low = mid +1;

        }
        else{
            high = mid -1;
        }
    }

    if (answer != -1){
        cout<<"element  found "<<answer<<endl;
    }

}

// mistake;
// i was using flag but the core concept waas wgen we get the numbeer 
// but we want the first occurence first we store that value 
// and then do again searching

// int answeer = -1; we can also think it like a flag 
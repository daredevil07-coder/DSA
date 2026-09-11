

// 🧠 Practice 6 — Count Occurrences

// Given:

// int arr[8] = {10, 20, 20, 30, 20, 40, 20, 50};
// int target = 20;

// Question: How many times does 20 occur?

#include <iostream>
using namespace std;

int main(){
    int arr[8] = {10, 20, 20, 30, 20, 40, 20, 50};
    int target = 20;
    int occ = 0;

    for(int i=0;i<8;i++){
        if(arr[i]==target){
        occ++;


    }
}
    cout<<"occureence times: "<<occ<<endl;
}


// mistake;
// whenever you want to serach and serach and want 
// to get every then i++;
// 🟡 Practice 5 — Last Occurrence

// Given:

// int arr[7] = {10, 20, 30, 20, 40, 20, 50};
// int target = 20;

#include <iostream>
using namespace std;

int main(){
    int arr[7]= {10, 20, 30, 20, 40, 20, 50};
    int target = 20;
    int lo = 0;


    for (int i =0 ; i<7;i++){
        if (arr[i]==target){
        lo = i;
        }

    }
    cout << lo << endl;

    return 0;

}


// mistake ;;
// i was using break which does not go till the last and i was 
// getting index 1 
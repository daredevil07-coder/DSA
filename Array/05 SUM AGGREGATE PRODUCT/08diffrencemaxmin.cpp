// 🟢 2.9.7 Difference Between Maximum and Minimum
// Task

// Given:

// int arr[6] = {10, 5, 20, 8, 3, 15

// Maximum = 20
// Minimum = 3
// Difference = 17

#include <iostream>
using namespace std;

int main (){
    int arr[6] = {10, 5, 20, 8, 3, 15};

    int maximum = 0;
    int minimum = 30;

    for (int i=0; i<6;i++){
        if(arr[i]>maximum){
            maximum=arr[i];
            

        }

        if(arr[i]<minimum){
            minimum = arr[i];
            
        }
    }
    int diffrence= (maximum - minimum);
    cout<<"Maximum: " << maximum<<endl;
    cout<<"Minimum: " << minimum<<endl;
    cout<<"Diffrence: " << diffrence<<endl;


    // mistake

// i used contibue by mistake ;
// by using of continue it will jump to the next iteration 
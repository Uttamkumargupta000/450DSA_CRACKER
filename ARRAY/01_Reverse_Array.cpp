//---------  APPROACH 1  iterative  solution--------------

//  TC =O(n)

#include<bits/stdc++.h>
void reverseArray(int arr[], int start, int end){

    while(start<end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}


// --------- APPROACH 2 STL USED ------------------;

//  TC = O(n);

void reverseArray(int arr[], int n){
    reverse(arr,arr+n);
}


// Recursive solution 

//  TC = O(n);

void reverseArray(int arr[], int start, int end){

    //base case
    if(start > end){
        return ;
    }

    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    //Recursive call
    reverseArray(arr, start++, end--);

}
// -> Find max and min eleemnt present inside an array .
// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Take input in Array

  void inputArr( int arr[] , int n ) {
      
      for(int i=0 ; i< n ; i++){
          cin >> arr[i];
      }
 }

// Max function .
 
 int maxInarr(int arr[] , int n){
    int max=INT_MIN;
    for(int i=0 ; i<n; i++){
        if(arr[i]>max)
            max = arr[i] ; // Then update max 
    }
    return max;
 }

  // Min function

  int minInarr(int arr[] , int n){
    int min=INT_MAX;
    for(int i=0 ; i<n; i++){
        if(arr[i]<min)
            min = arr[i] ; // Then update min
    }
    return min;
 }
  

int main(){
    int n;      
    cin>>n;     // size of array 

    int arr[n]; // declaration of the arrry. 

    inputArr(arr,n);  // take input of the array 

    cout << maxInarr(arr,n) << endl;  // gave max in array 

    cout << minInarr(arr,n) << endl; // gave min in array 
 

}
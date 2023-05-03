//  Array -> It is a collection of data of similar datatype in a contiguous manner of storage.
#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    

    // int arr[4]={10,20,30,40};
    //cout<<arr[2]<<endl;
    
    int n;
    cin>>n;  // size of array 

    int arr[n];     // declaration of array 
    
    for (int i=0; i<n; i++){
        cin>>arr[i];        // take input in the array 

    }

    for (int i=0; i<n; i++){    
        cout<<arr[i]<<" ";          // output of the array 
    }

    

return 0;
}
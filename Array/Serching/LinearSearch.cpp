// Linear search -> find match for the key element that you want to search .
//                  here time complexity is O(n).
#include<iostream>
using namespace std;

int linearSearch(int arr[],int n, int key){
  // traverse the array .
    for (int i=0; i<=n; i++){
        if(arr[i]==key)  // if element is present than return it index . 
        return i;
    }
    return -1;
}

int main(){

  int n;
  cin>>n;  // size of array . 

    int arr[n]; // Declaration of array 

  for(int i=0; i<n; i++){
      cin>>arr[i];        // Input array . 
  }

  int key;      // Input Key.
  cin>>key;

  cout<<linearSearch(arr,n,key)<<endl;
}

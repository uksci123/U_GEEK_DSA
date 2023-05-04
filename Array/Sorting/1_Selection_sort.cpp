//  Sorting in Array -> Ordering of the element in the array  in ascending order.

// Selection sort -> Find the minimum element in unsorted array and swap it with element at begning.

// time complexity is o(n^2)
#include<iostream>
// Swap function 
 void swap ( int a , int b , int arr[]){
   int temp = arr[a];
       arr[a]= arr[b];
       arr[b]= temp;
 }
// Seleciton Sort function . 
void selectionSort(int arr [] , int n){
    for(int i=0 ; i<n ; i++){
      for(int j=i+1 ; j<n ; j++){
        if(arr[j] < arr[i]){
          swap(arr[i] , arr[j] , arr);
        }
      }
    }
}
using namespace std;
int main(){
  int n;
  cin>>n;
   int arr[n];
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }


   selectionSort(arr,n);
     
  //  for(int i=0; i<n-1; i++){
  //    for(int j=i+1; j<n; j++){
  //      if(arr[j]<arr[i]){
  //        int temp=arr[j];
  //        arr[j]=arr[i];
  //        arr[i]=temp;
  //      }
  //    }
  //  }

   for(int i=0; i<n; i++){
     cout<<arr[i]<<" ";
   }
}

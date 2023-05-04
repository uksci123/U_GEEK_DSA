// Bubble sort -> This is sorting algorithm here we do swaping two adjacent element if they are in wrong order and traverse the whole array
// after itrating one time we got the largest element of array on the last position of array.

/* eg  
        3 4 1 5 2 
        3 1 4 2 5 -> after completion of its first itration .
                     so as of now we have to itrate only for n-1 part of traversing.
        1 3 2 4 5    now go for n-2.

        1 2 3 4 5   and finally we go the sorted array .     

*/


#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }

  int counter=1 ;

  while(counter<n){

  for(int i=0;i<n-counter;i++){
     if(arr[i]>arr[i+1]){
       int temp=arr[i];
       arr[i]=arr[i+1];
       arr[i+1]=temp;
     }
  }
  counter++;
 }
 for(int i=0; i<n;i++){
   cout<<arr[i]<<" ";
 }
}

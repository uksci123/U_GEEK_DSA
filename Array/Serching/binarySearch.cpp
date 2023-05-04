//  Binary Search -> This is a searching algorithm reduce the time of serach in the program . 
//                      for a particular key that an user want to search . 
//                 condition for applying a  binary search that the given data should be present in the
//                sorted form so key could be compare the and devide the data in two part and set
//             the search the key in that part so their is a posibility of that key is occured.
#include<iostream>
using namespace std;

// -------- binary search fucntion --------
/*
    here we devide the whole in two part and and find mid and compare with key 
    and again devide compare with mid until we do not find the key if it is exist in
    the array if not than return -1.
*/
int binarySearch(int arr[], int n, int key){
  int s=0, e=n;
  while(s<=e){
    int mid=(s+e)/2;
    if(arr[mid]==key){
      return mid;
    }
    else if(arr[mid]>key){
      e=mid-1;
    }
    else{
      s=mid+1;
    }
  }
  return -1;
}

 int main(){
     int n;
     cin>>n;

     int arr[n];
     for(int i=0; i<n; i++){
         cin>>arr[i];
     }
     int key;
     cin>>key;

     // int binarySearch(int[],int,int);
     cout<< binarySearch(arr,n,key)<<endl;
 }


/*
        Time Complexity of Binary Search

    After first iteration, length of array  -> n
    After secondd iteration, length of array  -> n/2
    After third iteration, length of array -> n/2^2
    After k iterationn, length of array  -> n/2^2

       Let the length of array become 1 after k iterations

       k=logn having the base 2

       TC = O(logn)

*/

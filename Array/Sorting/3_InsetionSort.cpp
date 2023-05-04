// insertion sort -> Insert an element from unsorted array of  its correct positon in sorted array 
#include<iostream>
using namespace std;
int main(){
  int n;
     cin>>n;
   int arr[n];
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
            
    for(int i=1; i<n; i++){   // we start from 2 index of the array . 

      int current =arr[i];  // we chose the element . 

      int j=i-1;            // create an pointer and set as 1 less than an current pointer

      while(arr[j]>current && j>=0){
        arr[j+1]=arr[j];     
        j--;            
      }
      arr[j+1]=current;
    }

for(int i=0; i<n; i++){
  cout<<arr[i]<<" ";
}
cout<<endl;

}
/*  
       for better understanding you can take help from this example. 
        
        12 , 23 , 45 , 51 , 19 , 8    and here  i = 4  so j=3 and  curr = 19 and enter in loop

        first itration -> here j=3 so arr[3] = 51 > curr = 19 and 3>=0 cond true 
        
        arr[4] = arr [3] -> 12 , 23 , 45 , 51 , 51  , 8  and j update to j-- so j= 2

        second itration -> here j=2 so arr[2] = 45 > curr = 19 and 2>=0 cond true

        arr[3]  = arr[2] -> 12, 23 , 45 , 45 , 51 , 8 and j update to j-- so j=1

        third itration -> here j=1 so arr[1] > curr = 19  and 1>=0 cond true . 

        arr[2] = arr [1] -> 12 , 23 , 23 , 45 , 51 , 8 and j update to j-- so j=0

        forth itration -> here j=0 so arr[0] = 12 > curr =10 and 0>=0 here cond fase 

        outside the while loop and j=0

        and now arr[j+1] = arr[1] is set to curr so finally 

        12 , 19 , 23 , 45 , 51 , 8 

 
*/ 
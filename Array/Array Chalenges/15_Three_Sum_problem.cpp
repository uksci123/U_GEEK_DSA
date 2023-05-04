#include<bits/stdc++.h>
using namespace std ; 
  // Three sum Problen 

bool threeSum(int arr[] , int n , int k){

	for(int i = 0 ; i < n ; i++){
		int low = 1 ; 
		int high = n-1 ; 
		while(low<high){
			int curr = arr[i] + arr[low] + arr[high] ; 
			if(curr == k) {
				cout << i << " " << low << " " << high ; 
				return true ;
			}else if (curr < k)
				low++ ; 
				else 
				high--;
		}
	}
	cout << "No match found";
	return false ; 
}
int main (){
	// step to do it 
	// convert the problen in to two sum 
	int n ; cin >> n ; 
	int arr[n] ; 

	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

    threeSum(arr , n , 9);
}	
#include <bits/stdc++.h>
using namespace std ; 

// pair Sum Problem 
// check if there exist two element 
// in an array such that their sum is 
// equal to k 

// --------- Brute force approch -------
bool pairSum (int arr[] , int n , int k){
	for(int i = 0 ; i< n-1 ; i++){
		for(int j = i+1 ; j< n ; j++){
			if(arr[i]+arr[j]==k){
				cout << i << "  " << j ;
			 return true ; 
			}
		}
	}

	return false ;
}

// ------- optimised approch --- two pointer aprroch ----
// 1 > sort the array 
// 2 > two pointer one at star and another at last 
// 3 > if sum is greater than the given sum then decree the last pointer 
// 4 > other wise increse the fist pointer 

bool pairSumTwo(int arr[] , int n , int k){

	int i = 0 , j = n-1 ; 

	while(i<j){
		if(arr[i]+arr[j] == k){

			cout << i << " " << j ; 
			return true ; 
	     }
		else if(arr[i] + arr[j] < k)
			i++; 
		else 
			j-- ; 
	}
	return false ;
}
int main (){
	int n , k ; 
	cin >> n >> k ;  
	int arr[n] ; 
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i] ; 
	}

	// pairSum(arr , n , 11) ;
	pairSumTwo(arr , n , k) ;


}
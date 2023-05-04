#include<bits/stdc++.h> 
using namespace std; 

// Maximum cicular subarray Sum Problem
// we calculate the sum for both condn
// first if element is not wrap than use 
// simply kadane algo
// for calculating the wrap sum 
// first chage the sign of all element in the 
// array  

int kadane(int arr[] , int n){
	int currSum = 0  ; 
	int mx = INT_MIN ; 
	for(int i = 0 ; i< n ; i++){
		currSum += arr[i] ; 
		if(currSum < 0 ){
			currSum = 0 ; 
		}
		mx = max(mx , currSum);
	}
	return mx ;
}
int main(){

	int n ; 
	cin >> n ; 
	int arr[n]; 

	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	int noWrapSum = kadane(arr,n);
	cout << noWrapSum << endl ; 
	int totalSum = 0 ;

	for(int i = 0 ; i< n ; i++){
		totalSum += arr[i];
		arr[i] = -arr[i] ; 
	}
	cout << totalSum << endl ; 
	int nonContributingEle = kadane(arr , n );
	cout << nonContributingEle << endl ; 
	int wrapSum = totalSum + nonContributingEle;
	cout << wrapSum << endl ;
	cout << max(wrapSum , noWrapSum);


}


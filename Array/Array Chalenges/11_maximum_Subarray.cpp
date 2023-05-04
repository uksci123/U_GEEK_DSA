#include<bits/stdc++.h>
using namespace std ; 

// find the subarray in an array which has maximum sum 

// brute force approch
// time complexity o(n^3)
// using the concept of nested loop
int main(){

int n ; 
cin >> n ; 
int arr[n];

for(int i = 0 ; i< n ; i++){
	cin >> arr[i];
}

// --------- brute force approch -------

// int mx = INT_MIN; 

// for(int i = 0 ; i< n ; i++){
// 	for(int j = i ; j< n ; j++){
// 		int sum = 0;
// 		for(int k= i ; k <= j ; k++){
// 			sum+= arr[k];
// 		}
// 		mx = max(sum,mx);
// 	}
// }
// cout << mx; 

// -------- optimized approch ----------

// we find the cummulative sum array 

int cummSum[n+1];

cummSum[0] = 0 ;

for(int i = 1 ; i<=n ; i++)
{
	cummSum[i] = cummSum[i-1]+ arr[i-1];
}

int maxSum = INT_MIN;

for(int i = 1 ; i<= n ; i++ ){
	int sum = 0 ; 

	for(int j = 0 ; j <i ; j++){

		sum = cummSum[i] - cummSum[j];
		maxSum = max(sum, maxSum);
	}
}
cout << maxSum << endl << count; 

}
// Sum of All SubArray
#include<iostream>
using namespace std; 
int main(){
	int n ; 
	cin >> n ; 
	int arr[n];
	for(int i=0 ;i<n; i++){
		cin >> arr[i];
	}

	// Approch 
	// itrate over all the subarray 
	// using nested loop
	int sum =0 ; 
	for(int i=0 ; i< n ;i++){
		sum=0;
		for(int j=i ; j<n; j++){
			 sum +=arr[j];
			cout << sum << endl;
		}
	}
}
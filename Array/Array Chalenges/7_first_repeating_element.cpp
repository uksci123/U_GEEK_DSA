// First Reating Element 
// problem :- Give an array arr of size N. The task is 
// find the  first repeating element in the array of integer
// i.e. an element that occurs more than once and whose index 
// of first occurence is  smallest . 

#include<bits/stdc++.h>
using namespace std ; 

int main(){
	int n ; cin >> n ; 
	int arr[n]; 
	for(int i = 0 ; i< n ; i++){
		cin >> arr[i];
	}

	// idx array 
	const int N = 1e6+7; 
	int idx[N];

	// inialize idx with -1; 
	for(int i = 0 ; i< N ; i++){
		 idx[i]= -1;
	}

	// minimum repecting index
	// first initalize with INT_MAX
	int minIdx = INT_MAX ; 

	for(int i = 0 ; i< n ; i++){
		if( idx[arr[i]] != - 1){
 			// so update the minIdx
 			minIdx = min (minIdx , idx[arr[i]]);
		}
		else{
			idx[arr[i]] = i ; 
		}
	}

    if(minIdx == INT_MAX)
    	cout << "-1" << endl ;
    else
    	cout << minIdx + 1 ;  // add 1 for dispay 1 indexing
}

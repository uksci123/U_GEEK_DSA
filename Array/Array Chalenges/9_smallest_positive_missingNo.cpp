// Smallest positive missing Number 
// problem :- you have given an array arr[] of N
// integers including 0 . the last is to find the 
// smallest positive munber missing form the array.

#include <bits/stdc++.h>
using namespace std;

int main(){

	int n ; cin >> n ; 
	int a[n];

	// take input of the array 

	for(int i=0 ; i<n ; i++)
		cin >> a[i];

	const int N = 1e6 +2 ; 
		  int check[N];

		  for(int i = 0 ; i<N ; i++)
		  	check[i]=false;

		for(int i = 0 ; i<n ; i++){
			if(a[i] >= 0)
				check[a[i]]=true;
		}

		int ans = -1 ; 

		// and itrate the check array and 
		// store the index of first false is 
		// come in check array and break from 
		// the loop
		// missing positive integer

		for(int i=0 ; i< N ; i++){
			if(check[i]==false){
				ans = i ; 
				break;
			}
		}

		cout << ans << endl;




}
// Record Breaking day
// condn for RBD is 
// 1 - > the no. of visitor on the day is strictly strictly larger than the no. of visitor on each of the previous days 
// 2 - > Either it is the last day or the no. of visitor strictly greater than  no of visitor on the following days 
// count total no. of the record breaking day 

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n  ; cin >> n ; 

	// size of array is n+1 
	int a[n+1];

	// and last index of array is -1 
	 a[n] = -1;

	 // only one day in array 

	 // take input of the array 
	 for(int i=0 ; i<n ; i++ ){
	 	cin>> a[i];
	 }

	 if(n==1){
	 	cout << "1" << endl ; 
	 	// mean that particular day is a record breaking day 
	 	return 0 ;
	 }

	 int ans = 0 ; 
	 // total no. of RBD

	 int mx = -1; 
	 // max no. of visitor is that day

	 for(int i = 0 ; i< n ; i++){
	 	 // condn that is record breaking day 
	 	if ( a[i] > mx and a[i] > a[i+1])
	 		ans++;
	 	mx = max(mx , a[i]);
	 }


	 cout << ans ; 
}
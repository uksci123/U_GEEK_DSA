 // Longest Arthmetic Array 

// find the longest Arthmetic subarry length

#include <bits/stdc++.h>
using namespace std; 

int main(){
	// input of an array 
	int n ; cin>>n ; 
	int arr[n]; 
  vector<vector<int> > ans ;
	for(int i = 0 ; i<n ; i++) 
		cin >> arr[i];

	// maintaiin some pointer 
	// previous commond differene
	// current subarray length 
	// Ans for max subarray length

	int pd;	// store the first common difference
	pd = arr[0] - arr[1];
  // ans[0].push_back(arr[0]);
  // ans[0].push_back(arr[1]);
	int Ans = 2 ; // curr subarry length.
	int curr = 2 ; // max subrray length.
	int j = 2 ; // start from second index.
  int i = 0 ;
  	while(j<n){
  		if(pd == arr[j]-arr[j-1]){
        // ans[i].push_back(arr[j]);
  			// cout << pd <<" ";
  			// if curr CD is equal to previos CD
  			curr++;  // so increase the curr subarray length;
  	      }
  	      else{
  	      	// update the previous CD
            
  	      	pd = arr[j] - arr[j-1];
            // ans[i].push_back(arr[j]);
  	      	// cout << pd << " ";
  	      	// and update the curr length to 2 
  	      	// as new subarray is start
  	      	curr = 2 ; 
  	      }
  	      // take max of curr subarray lenght and Ans length 
  	       Ans = max(curr,Ans);
  	       j++;
  	  }

      // for(int i = 0 ; i < ans.size() ; i++){
      //   for(int j = 0 ; j < ans[i].size() ; j++){
      //     cout << ans[i][j] << " ";
      //   }
      //   cout << endl;
      // }
  	  cout << endl << Ans ;
}
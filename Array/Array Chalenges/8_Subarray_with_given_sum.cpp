 // Subarray with given sum 
 // problem :- Given an unsorted array A of Size
 // N of non-negative integer find a continuous 
 // subarray which sum is equal to a given number (s)

 // doing by the help of two pointer 
 // keep 2 pointer st and en and variable currSum
 // which store the sum from st to en pointer
 // and increment the en pointer till currSum + A[en] > s
 // after reach to it 
 // start incresing the st pointer until currSum <= s

	#include <bits/stdc++.h>
	using namespace std; 

	int main(){
		int n , s ;
		cin >> n >> s ;

		int a[n];

		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
		}

		int i = 0 , j = 0  , en = -1 , st = -1 , currSum = 0;

		while(j<n and currSum+a[j]<=s){
			currSum+=a[j];
			j++;
		}
		if(currSum==s){
			cout << i+1 << " " << j << endl;
	    }	

	    while(j<n){
	    	currSum+=a[j];
	    	while(currSum>s){
	    		currSum-=a[i];
	    		i++;
	    	}

	    	if(currSum==s){
	    		st=i+1;
	    		en=j+1;
	    		break;
	    	}
	    	j++;
	    }	

	    cout<< st<< " " << en<< endl;

}

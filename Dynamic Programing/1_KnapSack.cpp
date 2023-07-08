// KanpSack Pattern (Parent Problem)

// As of my knowledge 3 type of knapSack problem 
// 1-> Fractional KnapSack (Greedy)
// 2-> 0/1 KnapSack
// 3-> unBounded KnapSack


// 0/1 KnapSack

#include<iostream>
#include<vector>
using namespace std ; 

// using recursion 
int knapSackUsingRec(int val[] , int wt[] , int W , int n){
    // base condition (think about the valid smaller input)
    if(n==0 || W==0){
        return 0 ; // Here no profit on both condition either item does not exist or no capacity left in the KnapSack.
    }

    // Code of the Choice Diagram 

    // we have two option on each item if it's weight less than or equal to the weight of the KnapSack
    // either i have to pick or not pick particular item 
    // we return the max of both condition 

    if(wt[n-1]<=W){
        return max(val[n-1]+knapSackUsingRec(val,wt,W-wt[n-1],n-1) , knapSackUsingRec(val,wt,W,n-1));
    }else{
        // value of particular item is greater than the knapSack then we have to skip that element 
        return knapSackUsingRec(val,wt,W,n-1);
    }
}

// using recursion with meorisation 
int knapSackUsingRecMemo(int val[] , int wt[] , int W , int n , vector<vector<int> >dp){

    if(n==0 || W==0) return 0 ; 
    // we have to add just two line of code first we check in the dp matrix
    // that particular value is already present or not if it present then 
    // just return that value if not then move further.
    if(dp[n][W]!=-1){
        return dp[n][W];
    }
    if(wt[n-1]<=W){
        return dp[n][W] = max(val[n-1]+knapSackUsingRecMemo(val,wt,W-wt[n-1],n-1,dp) , knapSackUsingRecMemo(val,wt,W,n-1,dp));
    }else{
        return dp[n][W] =  knapSackUsingRecMemo(val,wt,W,n-1,dp);
    }
    
}

// using topDown approch and memorisation 
// to convert recursive code to topDown 
// step 1 -> base condition become the initialisation 
// step 2 -> change the choice digram code recursive to itrative
int knapsackUsingTopDown(int val[],int wt[] , int W , int n){
    vector<vector<int> > dp(n+1,vector<int>(W+1,-1));
    // step 1
    for(int i = 0 ; i<W+1 ; i++) dp[0][i] = 0 ;  // W = 0 return 0
    for(int i = 0 ; i<n+1 ; i++) dp[i][0] = 0 ;  // n = 0 return 0 

    // step 2  here i -> total no of item & j -> capcity of knapSack
    for(int i = 1 ; i<n+1 ; i++){
        for(int j = 1 ; j<W+1 ; j++){
            if(wt[i-1]<=j)
            dp[i][j] = max(val[i-1] + dp[i-1][j-wt[i-1]] , dp[i-1][j]) ;
            else 
            dp[i][j] = dp[i-1][j];
        }
    }
    return dp[n][W];
}
int main(){
int n ; cin >> n ; // No of item 
int W ; cin >> W ; // capcity of the KnapSack 
int val[n] , wt[n]; // value and weight arrary of each item 

for(int i =0 ; i< n ; i++){
    // take input of the value array 
    cin >> val[i];
}
for(int i = 0 ; i< n ;i++){
    // take input of the weight array
    cin >> wt[i];
}
// We have list of item and bag in which we have to put the item inside the 
// bag such that we gain the maximum profit 
cout << "KnapSack Using Recursion ----> " << knapSackUsingRec(val,wt,W,n) << " ";

cout << endl << endl ; 

vector<vector<int> >dp(n+1 ,vector<int>(W+1,-1));
cout << "KnapSack Using Recursion with Memorsation ----> "<<knapSackUsingRecMemo(val,wt,W,n,dp) << " ";

cout << endl << endl ; 

cout << "knapSack Using TopDown Approach ----> "<< knapsackUsingTopDown(val,wt,W,n)<< " ";


}

#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    
    for (int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }

    // for the searching for the element key 
     
     int key;
     cin>>key;

     for (int i = 0; i < n; i++)
     {
         for (int j = 0; j < m; j++)
         {
             if (arr[i][j]==key)
             {
                 cout<< "Element is found and the index value is ---"<<endl;
                 cout<<i<<" "<<j<<endl;

             }
             
         }
         
     }
     
}
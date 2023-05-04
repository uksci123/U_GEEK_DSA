#include<iostream>
using namespace std;

int main(){

    int n,m;
    cin>>n>>m;

    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>> arr[n][m];
        }

    }


    // We Need four Variable for the spiral order print
    // 1 row_start ; 2 row_end ; 3 column_start ; 4 coulumn_end .

    /*
         r_s / c_s ------------ c_e
             |
             |
             |
             |
            r_e

            and

            Terminaating condition is when row_start <= row_end and col_start <= col<end

    */

    int row_start=0, row_end = n-1 , col_start=0, col_end = m-1;

    while( row_start<=row_end && col_start<=col_end){

            // row start ------- printed value is  r01 r02 r03 r04 ... r0m-1

        for(int col=col_start ; col<=col_end ; col++){

            cout<<arr[row_start][col]<<" ";
        }

            row_start++;

           // column end -----  r1(m-1) r2(m-1) r3(m-1) r4(m-1) r5(m-1).... r(n-1)(m-1)
           // row is varying and column is fixed and move toward end row from currnet row_start

        for (int row = row_start; row <= row_end; row++)
        {
            cout<<arr[row][col_end]<<" ";
        }

            col_end--;

            // row end ----- r(n-1)(m-2) r(n-1)(m-3) r(n-1)(m-4) r(n-1)(m-5)..... r(n-1)(0)
            // row is fixed which is end row and column is varing from end to start.

        for (int col = col_end; col >=col_start ; col--)
        {
            cout<<arr[row_end][col]<<" ";
        }

            row_end--;

            // column start ------ r()
            // column is fixed as col_start and row is varing from row_end to row_start

        for (int row = row_end; row >= row_start; row--)
        {
            cout<<arr[row][col_start]<<"  ";
        }

            col_start++;


    }


}

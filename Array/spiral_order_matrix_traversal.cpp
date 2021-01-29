//in this matrix firstly we will print first row then last column then last row and then first column and this will repeat.
#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cout<<" Enter size of the ROW"<<endl;
    cin>>n;
    cout<<"Enter size of the column "<<endl;
    cin>>m;
    int arr[n][m];
    cout<<"Enter the elements "<<endl;

    for(int i =0 ; i<n ; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"Your entered matrix "<<endl;
     for(int i =0 ; i<n ; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n";
    cout<<"The SPIRAL ORDER MATRIX IS - "<<endl;

    //spiral order matrix operation
    //1-> print first row
    //2-> print last column
    //3-> print last row
    //4-> print first column

    int row_start =0 ,row_end = n-1, col_start = 0, col_end = m-1;

    while (row_start <= row_end && col_start <= col_end)
    {
        //1 step
        for(int col = col_start;col<= col_end;col++) //traversing single-single element.
        {
            cout<<arr[row_start][col]<<" ";
        }
        row_start++;

        //2 step
        for(int row = row_start; row <= row_end;row++)
        {
            cout<<arr[row][col_end]<<" ";
        }
        col_end--;

        //3 step
        for(int col = col_end;col>=col_start;col--)
        {
            cout<<arr[row_end][col]<<" ";
        }
        row_end--;

        //4 step
        for(int row = row_end;row>=row_start;row--)
        {
            cout<<arr[row][col_start]<<" ";
        }
        col_start++;
    }
    

}

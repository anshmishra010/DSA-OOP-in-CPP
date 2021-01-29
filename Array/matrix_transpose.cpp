// tip - how to tanspose the matrix = (row,col)=>(col,row) && (col,row)=>(row,col) or we can say to swap
#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter the size of row  "<<endl;
    cin>>n;
    cout<<"Enter the size of column  "<<endl;
    cin>>m;
    int arr[n][m];
    cout<<"Enter the element "<<endl;
    for(int i =0 ;i<n;i++)
    {
        for(int j =0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    cout<<"Entered matrix "<<endl;
    for(int i =0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }

    //Matrix transpose
    for(int i =0;i<n;i++)
    {
        for(int j=i;j<m;j++) //j=i, as we don't want to swap whole matrix
        {
            //swap
            int temp =arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    cout<<"\nTranspose matrix "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
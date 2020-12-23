//matrix mult = m*n x n*k =m*k
#include<iostream>
using namespace std;

int main()
{
    int m,n,k;
    cout<<"Enter the size of the  row "<<endl;
    cin>>m;
    cout<<"Enter the size of the column OR size of the row of second column "<<endl;
    cin>>n;
    cout<<"Enter the size of the second column "<<endl;
    cin>>k;

    int a[m][n];
    int b[n][k];
    int ab[m][k];

    cout<<"Enter the elements of the first matrix"<<endl;
    for(int i =0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"\nFirst MATRIX"<<endl;
    for(int i =0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"Enter the elements in second matrix "<<endl;
    for(int i =0;i<n;i++)
    {
        for(int j=0;j<k;j++)
        {
            cin>>b[i][j];
        }
    }
    cout<<"\nSECOND MATRIX "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<k;j++)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<"\n";
    }

    //for answer matrix
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<k;j++)
        {
            ab[i][j]=0;
        }
    }

    //multiplication
    for(int x=0;x<m;x++)// for first row
    {
        for(int y=0;y<k;y++) //for first  col of second matrix
        {
            for(int z=0;z<n;z++) //for column
            {
                ab[x][y] += a[x][z]*b[z][y];
            }
        }
    }
    cout<<"\nMultiplication of matrix "<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j =0 ;j<k;j++)
        {
            cout<<ab[i][j]<<" ";
        }
        cout<<"\n";
    }


    
    
}
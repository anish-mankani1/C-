/*wap to print transpose of a matrix


*/
#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int x[n][m],i,j;
    cout<<"enter matrix";
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>x[i][j];
        }
    }
    int transpose[m][n];
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            transpose[i][j]=x[j][i];
        }
    }
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
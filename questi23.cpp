#include<iostream>
using namespace std;
main()
{
    int n,m,j,i;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(i==1 || j==1 || i==n || j==m)
            {
            cout<<"*";
            }
            else
            {
            cout<<" ";
        }
        
    }
    cout<<endl;
}
}
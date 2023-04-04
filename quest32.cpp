#include<iostream>
using namespace std;
main()
{
    int i,x,j,k=1;
    cin>>x;
    for(i=1;i<=x;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<k<<" " ;
            k++;
        }
        cout<<endl;
    }
}
// wap to calculate odd even 1 and 2 by using star  12121 like
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
            if((i+j)%2==0)
            {
                cout<<"1";

            }
            else
            {
            cout<<"2";
        }
        }
        cout<<endl;
    }
}
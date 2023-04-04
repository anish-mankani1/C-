//wap to print number of star like 12345678    2345678
#include<iostream>
using namespace std;
main()
{
    int n,j,i;
    cin>>n;
    for(i=1;i<=n;i++)
   {
     for(j=i;j<=n;j++)
        {
    
    cout<<j;
    }
    for(j=1;j<=(i-1);j++)
    {
        cout<<j;
    }
    cout<<endl;
    }

}
//wap to calculate sum of five number entered by user 
#include<iostream>
using namespace std;
main()
{
    int i,n,sum=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<"number"<<i<<endl;
        sum=sum+i;
        
    }
    cout<<sum<<endl;
}
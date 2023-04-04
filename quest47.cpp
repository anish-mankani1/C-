//wap to calvulate positive and negative of array and then do sum and minus of it
#include<iostream>
using namespace std;
main()
{
    int sum=0,x[5];
    int i;
    cout<<"enter x";
    for(i=0;i<5;i++)
    {
    cin>>x[i];
    }
    
    for(i=1;i<5;i++)
    {
        if(x[i]%2==0)
        {
            
            sum=sum+x[i];
        }
        else
        {
            sum=sum-x[i];
        }
    }
    
    cout<<sum;

}
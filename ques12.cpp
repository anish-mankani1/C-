//wap to calculate sum of natural number using while
#include<iostream>
using namespace std;
main()
{
    int n=1,sum=0,i;
    cin>>i;
    while(n<=i)
    {
        cout<<n<<endl;
        sum=sum+n;
        n++;
    }
    cout<<sum<<endl;
}
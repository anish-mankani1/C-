//wap to print how many digit are
#include<iostream>
using namespace std;
main()
{
    int n,d=0;
    cin>>n;
    while(n!=0)
    {
        n=n/10;
        d++;
    }
    cout<<d<<endl;
}
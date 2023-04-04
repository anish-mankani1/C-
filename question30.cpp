//wap to print a to the power value   2 3= 8
#include<iostream>
using namespace std;
main()
{
    int a,b,i,p=1;
    cin>>a>>b;
    for(i=1;i<=b;i++)
    {
        p=p*a;

    }
    cout<<p<<endl;

}

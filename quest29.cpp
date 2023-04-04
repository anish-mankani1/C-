// wap to print factorial of number
#include<iostream>
using namespace std;
main()
{
    int no,f=1,i;
    cin>>no;
    for(i=1;no>=1;i++)
    {
     f=f*no;
     no=no-1;

    }
    cout<<f<<endl;
}
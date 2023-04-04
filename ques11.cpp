// wap to print sum of three number
#include<iostream>
using namespace std;
main()
{
     int d,no,sum=0;
     cin>>no;
     while(no!=0)
     {
     d=no%10;
     sum=sum+d;
     no=no/10;
     }
     cout<<"sum of three number:"<<sum<<endl;
}
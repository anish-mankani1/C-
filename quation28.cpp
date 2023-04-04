//wap to print sum of number
#include<iostream>
using namespace std;
main()
{
    int no,digit,sum=0;
    cin>>no;
    while(no!=0)
    {
        digit=no%10;
        sum=sum+digit;
        no=no/10;
        
    }
    cout<<sum<<endl;
}
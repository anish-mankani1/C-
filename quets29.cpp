//wap to print reverse of number
#include<iostream>
using namespace std;
main()
{
    int no,digit,reverse=0;
    cin>>no;
    while(no!=0)
    {
        digit=no%10;
        reverse=(reverse*10)+digit;
        no=no/10;
        
    }
    cout<<reverse<<endl;
}
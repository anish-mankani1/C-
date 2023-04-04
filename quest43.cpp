//write a [rogram to print odd and even in array
#include<iostream>
using namespace std;
main()
{
    int a[10],i,ev=0,od=0;
    cout<<"enter the number";
    for(i=0;i<10;i++)
    cin>>a[i];
    for(i=0;i<10;i++)
    {
        if(a[i]%2==0)
        {
            cout<<"even"<<endl;
        }
        else
        {
            cout<<"odd"<<endl;
        }
    }
    

}
//wap to print all prime number betwen number
#include<iostream>
using namespace std;
int add(int num)
{
    if(num%2==0)
    {
        return false;
    }
    else{
        return true;
    }
}
main()
{
    int i;
   int a;
   int b;
   cout<<"enter the value pof a and b"<<endl;
   cin>>a>>b;
   for(i=a;i<b;i++)
   if(add(i))
   {
    cout<<i<<endl;
   }
}
// wap to print square using with hte help of function
#include<iostream>
using namespace std;
int square(int n)                                    // take something and return something
{
    int c;
    
        c=n*n;
        return (c);
}
main()
{
   int i;
   for(i=0;i<=5;i++)
   {
    cout<<square(i)<<endl;
   }
}
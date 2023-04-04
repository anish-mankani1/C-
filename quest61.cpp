/*
 function use kar ke dekh raha tha

*/
#include<iostream>
using namespace std;
int  sum(int a,int b)
{
    int c;
    c=a+b;
    return c;
}
void g()
{
    cout<<"hello,good morning"<<endl;
}
void f()
{
    cout<<"anish mankani"<<endl;
}

int main()
{
    int x,y;
    cout<<"enter the value of x and y";
    cin>>x>>y;
    cout<<"the sum is:"<<sum(x,y)<<endl;
    g();
    f();
    return 0;
}
#include<iostream>
using namespace std;
int add(int,int);
main()
{
    int s;
     s=add(4,5);          // take somethiong and return something
     cout<<s<<endl;
}
int add(int x,int y)
{
    int c;
    c=x+y;
    return (c);
}
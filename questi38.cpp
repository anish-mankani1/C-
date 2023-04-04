// this is call by value
#include<iostream>
using namespace std;
void add(int z)
{
    z=100;
   cout<<z<<endl;
}
main()
{
    int a;
    a=5;
    add(a);
    cout<<a<<endl;
}
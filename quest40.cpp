#include<iostream>
using namespace std;
void add(int n1,int n2)
{
    n1--;
    n2=n2-2;

cout<<n1<<" "<<n2<<endl;
}
main()
{
    int p,q;
    p=26;
    q=13;
    add(p,q);
   cout<<p<<" " << q<<endl;

}
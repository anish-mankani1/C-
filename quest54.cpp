/*  union


*/
#include<iostream>
using namespace std;

union student
{
    int salary;
    char nm[100];
    char jb[100];
};
int main()
{
    union student x;
    cout<<"enter data";
    cin>>x.nm;
    cin>>x.jb;
    cin>>x.salary;
    cout<<x.nm<<endl;
    cout<<x.jb<<endl;
    cout<<x.salary<<endl;
    return 0;
}
/*simple pointer testing hai


*/
#include<iostream>
using namespace std;

int main()
{
    int a=3;
    int*b=&a;
    int **c=&b;
    cout<<a<<endl;
    cout<<&b<<endl;
    cout<<&c<<endl;
    cout<<*b<<endl;
    cout<<**c<<endl;
    return 0;
}
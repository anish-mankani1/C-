/*
function overloading hai yeh

*/                                      
#include<iostream>
using namespace std;

int add(int a ,int b)
{
     return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int square(int a,int b)
{
    return a*b;
}
int volume(int a)
{
    return a*a*a;

}
int rectangle(int l,int b)
{
    return l*b;
}
int main()
{
    cout<<"the value of a and b is "<<add(5,6)<<endl;
    cout<<"the value of a and b is "<<sub(7,4)<<endl;
    cout<<"the value of a and b is "<<square(5,6)<<endl;
    cout<<"the value of a is "<<volume(5)<<endl;
    cout<<"the value of a and b is "<<rectangle(5,6)<<endl;
    
    return 0;
}
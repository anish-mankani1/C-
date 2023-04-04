#include<iostream>
using namespace std;
main()
{
    int age;
    cin>>age;
    if(age<12)
    cout<<"child"<<endl;
    else if(age<18)
    cout<<"adult"<<endl;
    else if(age<24)
    cout<<"men"<<endl;
    return 0;
}
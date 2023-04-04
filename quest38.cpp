//wap to print age is greater than 18 or not
#include<iostream>
using namespace std;
int  vote(int age)
{
    if(age>=18)
    {
    return (true);
    }
    else
    {
    return(false);
}
}
main()
{
    int age;
    cout<<"enter age"<<endl;
    cin>>age;
    if(vote(age)==true)
    {
    cout<<"yes"<<endl;
    }
    else
    {
    cout<<"no"<<endl;
}
}
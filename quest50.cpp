//wap to print strictly greatest number using vector
#include<iostream>
#include<vector>
using namespace std;
main()
{
    vector <int> v(6);
    int i;
    cout<<"enter 6 number";
    for(i=0;i<6;i++)
    {
        cin>>v[i];

    } 
    int x;
    cout<<"enter x";
    cin>>x;
    int count=0;
    for(i=0;i<6;i++)
    {
        if(v[i]>x)
        {
            count++;
        }
    }
    cout<<count<<endl;
}
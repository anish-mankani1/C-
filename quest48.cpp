//wap to find the number with the help of vector
#include<iostream>
#include <vector>
using namespace std;
main()
{
    vector<int> v(6);
    int i;
    cout<<"enter 6 number";
    for(i=0;i<6;i++)
    {
        cin>>v[i];
    }
     int x;
    cout<<"enter number";
    cin>>x;

    int occurence=-1;
    for(i=0;i<6;i++)
    {
        if(v[i]==x)
        occurence=i;
    }
    cout<<occurence<<endl;
    
}
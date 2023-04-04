//wap to calculate occurence of number using vector
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
    int occurence=0;
    for(i=0;i<6;i++)
    {
        if(v[i]==x)
        {
            occurence++;
        }
    }
    cout<<occurence<<endl;
}
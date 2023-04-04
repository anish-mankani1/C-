/*
make a rectangle star pattern

*/
#include<iostream>
using namespace std;

int main()
{
    int starrows,starcolumn;
    cout<<"enter the value of starcolumn";
    cin>>starcolumn;
    cout<<"enter the value of starrows";
    cin>>starrows;
    for(int i=0;i<starrows;i++)
    {
        for(int j=0;j<starcolumn;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}
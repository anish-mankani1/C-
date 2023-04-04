/*

wap to print pascal qtraiongle

*/
#include<iostream>
using namespace std;

int main()
{
    int rows;
    cout<<"enter the rows";
    cin>>rows;
    cout<<endl;

    for(int i=0;i<rows;i++)  // rows=5
    {
        int val=1;
        for(int j=1;j<(rows-1);j++)   //j<5
        {
            cout<<" ";
        }
        for(int k=0;k<=i;k++)     //k<=0
        {
             cout<<" "<<val;
            val=val*(i-k)/(k+1);    // 1=1*
        }
        cout<<endl;
    }


    return 0;
}
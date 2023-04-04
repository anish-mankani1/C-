// wap to calculate the how many time a number came                 //doublett
#include<iostream>
using namespace std;

int main()
{
    int i,j;
    int a[]={1,2,3,4,5,6};
    int target=6;
    int pairs=0;
    for(i=0;i<6;i++)
    {
        for(j=i+1;j<6;j++)
        {
            if(a[i]+a[j]==target)
            {
                pairs++;
            }
        }
    }
    cout<<pairs<<endl;
    return 0;
}
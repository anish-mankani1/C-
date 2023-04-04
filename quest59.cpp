/*
wap to print number in rotate order   // 1 2 3 4 5
                                       // 5 4 3 2 1

*/
#include<iostream>
using namespace std;

int main()
{
    int i,array[]={1,2,3,4,5};
    int n,k;
    n=5;
    k=2;
    // k can be greater
  //  k=k%n;
    int j=0,ansarray[50];

    for(i=n-k;i<n;i++)                   // i=n-k    5-2=3
    {
        ansarray[j++]=array[i];
    }
    //4 5

    //for 1 2 3
    for(i=0;i<=k;i++)                     //i<=k
    {
        ansarray[j++]=array[i];
    }
    for(i=0;i<n;i++)                    //i<n
    {
        cout<<ansarray[i]<<endl;
    }
    return 0;
}
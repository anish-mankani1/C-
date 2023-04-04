/*


*/
#include<iostream>
using namespace std;

int main()
{
    int i,j,target=0;
    int a[5];
    int pairs=0;
    cout<<"enter the value of array";
    
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            cin>>a[i];
        }
    
   cout<<"enter the target"<<endl;
    cin>>target;
      for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[i]+a[j]==target)
            {
                pairs++;
            }
        }
    }
    }
    cout<<pairs<<endl;
    
    return 0;
}
//wap to print number in sorted order
#include<iostream>
using namespace std;
main()
{
    int a[]={1,2,3,4,5};
    int i;
    bool sortedflag=true;
    for(i=1;i<=5;i++)
    {
        if(a[i]<=a[i-1])
        {
            sortedflag=false;
        }
       
    }
     cout<<sortedflag<<endl;


}

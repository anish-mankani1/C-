/*wap to find uniques number


*/
#include<iostream>
using namespace std;

int main()
{
    int i,j;
    int array[]={1,2,3,7,3,2,1};
    for(i=0;i<7;i++)
    {
        for(j=i+1;j<7;j++)
        {
            if(array[i]==array[j])
            {
                array[i]=array[j]=-1;
            }
        }
    }
    for(i=0;i<7;i++)
    {
        if(array[i]>0)
        {
            cout<<array[i]<<endl;
        }
    }
    return 0;
}
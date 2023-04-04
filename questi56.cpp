/*
wap to print triplet of program 
ismein 0 likna jaruri hai kyu ki triplet hai ya 1 2 3 aisa karna tabhi 5 aahega
*/
#include<iostream>
using namespace std;

int main()
{
    int array[]={1,2,4,5,0};
    int target=5,triplet=0,i,j,k;
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            for(k=j+1;k<5;k++)
            {
                if(array[i]+array[j]+array[k]==target)
                {
                    triplet++;
                }
            }
        }
    }
    cout<<triplet<<endl;
    return 0;
}
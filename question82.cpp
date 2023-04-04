/*


*/
#include<iostream>
using namespace std;

int main()
{
    int i,j;
    int a[3][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           cin>>a[i][j];

        }
    }
   int  b[3][3];
   for(i=0;i<3;i++)
   {
    for(j=0;j<3;j++)
    {
        b[i][j]=a[j][i];
    }
   }
   for(i=0;i<3;i++)
   {
    for(j=0;j<3;j++)
    {
        cout<<b[i][j];
    }
   }
    return 0;
}
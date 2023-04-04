/* wap to pereform matrix multiplication of 2 *2


*/
#include<iostream>
using namespace std;

int main()
{
    int i,j;
    int r1,c1;
    cout<<"enter the value of r1and c1";
    cin>>r1>>c1;
    int a[r1][c1];
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
           cin>>a[i][j];
        }
    }
    int r2,c2;
    cout<<"enter the value r2 and c2";
    cin>>r2>>c2;
    int b[r2][c2];
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
           cin>>b[i][j];              b [i][j]
        }
        }
        if(c1!=r2)
        {
            cout<<"matrix is not possible";
        }
        int c[r1][c2];
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                int value=0;
                for(int k=0;k<r2;k++)
                {
                    value=value + a[i][k]*b[k][j];
                }
                c[i][j]=value;
            }
        }
         for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
               cout<<c[i][j]<<endl;     // c[i][j]
        }
        }
    return 0;
}
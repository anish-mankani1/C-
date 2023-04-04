/*


*/
#include<iostream>
using namespace std;

int main()
{
    int x[100];
    int i,max;
    cout<<"enter the value od array";
    for(i=0;i<10;i++)
    {
        cin>>x[i];
    }
    max=x[0];
    for(i=0;i<10;i++)
    {
        if(x[i]>max)
        {
            max=x[i];
        }
    }
    cout<<max<<endl;
    return 0;
}
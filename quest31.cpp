
#include<iostream>
using namespace std;
main()
{
    int no,i,j;
    cin>>no;
    for(i=1;i<=no;i++)
    {
        for(j=1;j<=no;j++)
        {
            if(i==no/2)
            {
            cout<<"*";
            // for middle row
        }
    

else
{
    if(j==no/2)
    {
        cout<<"*";
        }
    
    else
    {
    cout<<" ";
    }
}
        }
    
    cout<<"\n";
}
}

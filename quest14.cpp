// wap to calculate same multiple of 5 and 7
#include<iostream>
using namespace std;
main()
{
    int i;
    for(i=5;;i=i+5)
    {
        if(i%7==0)
        {
        cout<<i<<endl;
        break;
    }
}
}
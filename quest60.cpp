/*


*/
#include<iostream>
using namespace std;

int main()
{
    int i,x;
    cout<<"enter value of x";
    cin>>x;
    for(i=2;i<=x-1;i++)                    //   i=2       2<6 
                                           //    i=3    3<5   
                                            // 1=4     4<4
    
        if(x%i==0)
        break;
        if(i==x)
        
            cout<<"prime number"<<endl;
        
        else
            cout<<"not prime"<<endl;
        
    

    return 0;
}
//wap to calculate cost price abd selling price entered by user are profitable or not
#include<iostream>
using namespace std;
main()
{
    int cp,sp,profit,loss;
    cin>>cp>>sp;
    if(sp>cp)
    {
        profit=sp-cp;
    
    cout<<"profit"<<endl;
    }
     else if(cp>sp)
    {
    loss=cp-sp;
    cout<<"loss"<<endl;
     }
     else 
      {
      cout<<"no profit no loss"<<endl;
     } 
      }
// wap to sum first and last number of number // like 12345 1+5=6
#include<iostream>
using namespace std;
main()
{
    int sum,first,second,third,fourth,fifth,n;
    n=12345;
    first=n/10000;          //12345
    n=n%10000;
    second=n/1000;          //2
    n=n%1000;
    third=n/100;             //3
    n=n%100;
    fourth=n/10;             //4
    fifth=n%10;               //5
    sum=first+fifth;           //6
    cout<<"number of first and fifth "<< sum<<endl;
    
}
/*

 call by refrence method hai yeh 
       
*/
#include<iostream>
using namespace std;
/*void swappointer(int *a,int *b)
{
  int c;
  c=*a;                                              // by pointer se kiya simple method se swap nahi ho raha tha
  *a=*b;
  *b=c;


}
*/


void swap(int &a,int &b){
    int c;
    c=a;
    a=b;
    b=c;
}


int main()
{
    int x,y;
    x=4,y=5;
    swap(x,y);
    cout<<x<<" "<<y<<endl;

    return 0;
}
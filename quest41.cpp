#include<iostream>
using namespace std;
int g=67;         // global
void add()
{
    cout<<g<<endl;
}
main()
{
    int g;
    g=7;
    g=9;
   // cout<<"hello world";
  //  return 0;
  add();
  cout<<g<<endl;
  return 0;
    
}
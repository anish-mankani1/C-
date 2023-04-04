/*
wap to find 

*/
#include<iostream>
#include<vector>
using namespace std;
  int maximumonerow(vector<vector<int>>&v)
  {
    int maximumone=0;
    int maximumrow=-1;
    int column=v[0].size();
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v.size();j++)
        {
            if(v[i][j]==1)
            {
                int numberofone=column-j;
                if(numberofone>maximumone)
                {
                     maximumone=numberofone;
                     maximumrow=i;
                }
                break;
            }
        }
    }
  
  return maximumrow;
  }
int main()
{
    int n,m;
    
    cout<<"enter the value of n and m";
    cin>>n>>m;
    vector<vector<int>>greater(n,vector<int> (m) );
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
           cin>>greater[i][j];  
                 }
    }
    int result=maximumonerow(greater);
    cout<<result<<endl;
    

    return 0;
}
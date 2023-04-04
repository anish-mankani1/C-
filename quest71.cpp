/*wap to print running sum or prefix sum means 
               user enter 5 4 3 2 1
               prefix sum= 5 9 12 14 15 
*/
#include<iostream>
#include<vector>
using namespace std;
void runningsum(vector<int>&v)
{
  for(int i=1;i<v.size();i++)
  {
    v[i]+=v[i-1];
  }
}

int main()
{
    int n;
    cout<<"enter the value of  5 number";
    cin>>n; 
        int i;
        vector<int>v;
        for(i=0;i<n;i++)
        {
            int ele;
            cin>>ele;
            v.push_back(ele);   
        }
        runningsum(v);
        for(int i=0;i<n;i++)
        {
            cout<<v[i]<<" "<<endl;
        }
    return 0;
}
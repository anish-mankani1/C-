/* wap to print  the suffixsum by using prefixsum and totalsum

      6 2 4 3 1
      1

*/
#include<iostream>
#include<vector>
using namespace std;
 bool checkprefixandsuffixsum(vector<int>&v)
{
   int totalsum=0;
   
   for(int i=0;i<v.size();i++)
   {
    totalsum+=v[i];
   }
     int  prefixsum=0;
   for(int i=0;i<v.size();i++)
   {
    prefixsum+=v[i];
   int suffixsum=totalsum-prefixsum;
   
   if(suffixsum==prefixsum)
   {
     return true;
   }
   }
   return false;

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
       cout<<checkprefixandsuffixsum(v)<<endl;
        
    return 0;
}
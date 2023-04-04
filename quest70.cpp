//wap to print even element first and odd element last means 
// user enter 1 2 3 4 5
// output 4 2 3 1 5    
// pehele even aajahega phir oddd
#include<iostream>
#include<vector>
using namespace std;
void partiality(vector<int> &v)            
{
    int left=0;
    int right=v.size()-1;                                // college wallah 
    while(left<right)
    {
      if(v[left]%2==1 && v[right]%2==0)
      {
        swap(v[left],v[right]);
        left++;
        right--;
      }
    
    if(v[left]%2==0)
    {
    left++;
}
    if(v[right]%2==1)
    {
    right--;
    }
}
}
       

int main()
{
   
   int ele;
    cout<<"enter the value of  5 ele";
    cin>>ele; 
        int i;
        vector<int>v;
        for(i=0;i<ele;i++)
        {
            int ele;
            cin>>ele;
            v.push_back(ele);   
        }
        partiality(v);
        for(int i=0;i<ele;i++)
        {
            cout<<v[i]<<" "<<endl;
        }
        return 0;
}
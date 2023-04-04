/*


*/
#include<iostream>
#include<vector>
using namespace std;
void sort(vector<int> &v)            //&v matlab v ki copu nahi gayi address gaya
{
  int zeros_count=0;
  for(int ele:v)     //:v used for travese
  {
    if(ele==0)
    {
      zeros_count++;
    }
  }
  for(int i=0;i<v.size();i++)
  {
    if(i<zeros_count)
    {
        v[i]=0;
    }
    else{
        v[i]=1;
    }
  }
}     

int main()
{
   // int n;
   int ele;
    cout<<"enter the value of ele";
    cin>>ele; // pure number n mein jahege pehle
        int i;
        vector<int>v;
        for(i=0;i<ele;i++)
        {
            int ele;
            cin>>ele;
            v.push_back(ele);   //pure element v mein chale gaye
        }
        sort(v);
        for(int i=0;i<ele;i++)
        {
            cout<<v[i]<<" "<<endl;
        }
        return 0;
}
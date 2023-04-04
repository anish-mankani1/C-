/*wrp to print the diamond abc pattern


*/
#include<iostream>
using namespace std;

int main()
{
    int n=5;            //given input
    //loop for upper traingle
    for(int line=1;line<=n;line++)


    {
        // for spacess
        int spaces=n-line;
        for(int k=0;k<spaces;k++)
        {
            cout<<" ";
        }
        // characters
   int character=2*line-1;
   for(int j=0;j<character;j++)
   {
    cout<<(char)('A'+j);
   }
   cout<<endl;
    }
    //loop for lower traingle
    for(int line =6;line<=9;line++)
    {
        int spaces=line-n;
        for(int k=0;k<spaces;k++)
        {
            cout<<" ";
        }
        int character=2*(2*n-line)-1;  // 10-6=4*2=8-1
         for(int j=0;j<character;j++)
         {
            cout<<(char)('A'+j);
         } 
         cout<<endl;  
    }

    
    return 0;
}
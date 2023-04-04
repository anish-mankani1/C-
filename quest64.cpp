/*


*/
#include<iostream>
using namespace std;

int main()
{
    int x,y;
    cout<<"enter the value of x and y";
    cin>>x>>y;
    char ans;
    cout<<"enter the ans";
    cin>>ans;
    switch(ans)
    {
     case '+':
     cout<<"ans"<<x+y<<endl;
     break;
     case '*':
      cout<<"ans"<<x*y<<endl;
      break;
      case '%':
       cout<<"ans"<<x%y<<endl;
       break;
       case '/':
        cout<<"ans"<<x+y<<endl;
        break;
        case '-':
         cout<<"ans"<<x+y<<endl;
         break;
         default:
         cout<<"you have entered wrong choice";
         








    }


    return 0;
}
/*

         simple program of class by jenny's example
*/
#include<iostream>
using namespace std;
#define pi 3.14
int r=2;
void area();
class myclass
{
    public:
    int a;
    void display()
    {
        cout<<"inside class"<<endl;
    }
};
int sum(int,int);
int main()
{
    myclass m;
    m.a=90;
    m.display();
   area();
   cout<<"hello world from main function"<<endl;
   cout<<m.a<<endl;
   cout<<sum(7,8)<<endl;
    
    return 0;
}
void area()
{
    float area;
    area=pi*r*r;
    cout<<area<<endl;
}
int  sum(int a,int b)
{
     int c=a+b;
     return c;


     
     
     
}
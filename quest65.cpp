/*
          simple example of class by harry

*/
#include<iostream>
using namespace std;

class employee
{
    private:
   int  a,b,c;
    public:
    int d,e;
   void setdata(int a, int b, int c);            // is ko define neeche kiya hai
    void getdata()
    {
        cout<<"the value of a is" <<a<<endl;
         cout<<"the value of b is" <<b<<endl;
          cout<<"the value of c is" <<c<<endl;
           cout<<"the value of d is" <<d<<endl;
            cout<<"the value of e is" <<e<<endl;
    }
};
void employee :: setdata(int a, int b, int c)
{
    a;
    b;
    c;
}
int main()
{
    employee harry;
    harry.d=34;
    harry.e=89;
    harry.setdata(1,2,4);
    harry.getdata();
    
    return 0;
}
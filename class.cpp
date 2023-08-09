// yeh simple wala jisme private ko public se access kar rahe hai
#include<iostream>
using namespace std;
class  employee
{
    private:
    int a,b,c;
    public:
     int d,e;
    void setdata(int a1,int b1,int c1);
    void getdata()
    {
        
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<c<<endl;
        cout<<d<<endl;
        cout<<e<<endl;
    }

};
void employee::setdata(int a1,int b1,int c1)
{
    a=a1;
    b=b1;
    c=c1;
}
int main()
{
    employee disha;
    disha.d=98;
    disha.e=87;
    disha.setdata(1,2,3);
    disha.getdata();
    return 0;
}
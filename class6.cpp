// abstraction hai encapsulation jaisa hai yeh bhi data ko hide  karta hai
#include<iostream>
using namespace std;
class variable
{
    private:
    int a,b;
    public:
    void set(int x,int y)
    {
        a=x;
        b=y;
    }
    void get()
    {
        cout<<a<<endl;
        cout<<b<<endl;
    }
};
int main()
{
    variable z;
    z.set(10,20);
    z.get();
    return 0;
}
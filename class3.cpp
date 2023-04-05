#include<iostream>
using namespace std;
class myclass
{
    public:
    void mymethod();
};
void myclass::mymethod()
{
    cout<<"hello";
}
int main()
{
    myclass x;
    x.mymethod();
    return 0;
    }

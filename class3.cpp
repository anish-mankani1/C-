#include<iostream>
using namespace std;
class myclass
{
    public:
    void mymethod()
    {
        cout<<"hello world";
    }
};
/*void myclass::mymethod()
{                                    // second method hai
    cout<<"hello";
}
*/
int main()
{
    myclass x;
    x.mymethod();
    return 0;
    }

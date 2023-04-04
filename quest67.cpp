/*


*/
#include<iostream>
using namespace std;
class anish
{
   
    string s;
     public:
    void binary();
    void checkbinary();

};
void anish :: binary()
{
    cout<<"enter a binary number"<<endl;
    cin>>s;
}
void anish :: checkbinary()
{
    int i;
    for(i=0;i<s.length();i++)
    {
        if((s.at(i)!='0') && (s.at(i)!='1'))
        {
            cout<<"incorrect binary number"<<endl;
            exit(0);
        }
        else
        {
            cout<<"it is binary number"<<endl;
        }
    }
}

int main()
{
    anish b;
    b.binary();
    b.checkbinary();
    return 0;
}
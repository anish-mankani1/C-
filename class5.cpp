#include<iostream>
using namespace std;
class employee{
    private:
    int salary;
    public:
    void setsalary(int s)
    {
        salary=s;
    }
     int getsalary()
    {
        return salary;
    }
};
int main()
{
    employee x;
    x.setsalary(5000);
    x.getsalary();
    cout<<x.getsalary()<<endl;
    return 0;
}
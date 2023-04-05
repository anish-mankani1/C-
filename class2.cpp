#include<iostream>
using namespace std;
class car
{
    public:
    int speed(int maxspeed);

};
 int car::speed(int maxspeed)
{
    return maxspeed;
}
int main()
{
    car x;
    cout<<x.speed(200)<<endl;
}